#include <math.h>
#include <stdio.h>
#include <gmp.h>
#include <locale.h>

void isPrime(mpz_t num, int *res){
    *res = mpz_probab_prime_p(num, 25);
}


void mdc(mpz_t res, mpz_t a, mpz_t b) {
    mpz_gcd(res, a, b);
}

// Função para verificar se dois números são coprimos
void comprimo(int *res, mpz_t a, mpz_t b) {
    mpz_t result;
    mpz_init(result);
    mdc(result, a, b);
    *res = mpz_cmp_ui(result, 1) == 0;
    mpz_clear(result);
}





void inverso_modular(mpz_t res, mpz_t a, mpz_t m) {
    mpz_invert(res, a, m);
}



void power_mod_gmp(mpz_t result, mpz_t base, mpz_t exponent, mpz_t modulus) {
    mpz_init(result);
    mpz_mod(base, base, modulus); // base = base % modulus
    mpz_powm(result, base, exponent, modulus); // result = base^exponent % modulus
}




unsigned long long int enc(const char *frase, mpz_t n, mpz_t e) {
    mpz_t ascii_codes[99999]; // Array de mpz_t para armazenar os códigos ASCII
    mpz_t resultado;
    unsigned long long int i = 0;

    // Inicialização das variáveis
    mpz_init(resultado);
    for (; frase[i] != '\0' && frase[i] != '\n'; i++) {
        mpz_init_set_ui(ascii_codes[i], frase[i]);
    }

    FILE *file = fopen("criptografado.txt", "w");

    for (unsigned long long int j = 0; j < i; j++) {
        power_mod_gmp(resultado, ascii_codes[j], e, n);
        gmp_fprintf(file, "%Zd ", resultado);
    }

    fclose(file);

    // Limpeza de variáveis alocadas
    for (unsigned long long int j = 0; j < i; j++) {
        mpz_clear(ascii_codes[j]);
    }
    mpz_clear(resultado);

    return i; // Retorna o número de caracteres criptografados
}



int desenc(mpz_t p, mpz_t q, mpz_t e) {
    mpz_t ascii_codes[99999]; // Array de mpz_t para armazenar os códigos ASCII
    mpz_t n, resultado;
    mpz_init(n);


    // Calcula o n e φ(n)
    mpz_mul(n, p, q);
    mpz_t p_minus_1, q_minus_1;
    mpz_inits(p_minus_1, q_minus_1, NULL);
    mpz_sub_ui(p_minus_1, p, 1);
    mpz_sub_ui(q_minus_1, q, 1);
    mpz_t phi_n;
    mpz_init(phi_n);
    mpz_mul(phi_n, p_minus_1, q_minus_1);

    // Pede para o usuário o valor de 'e'

    // Calcula a chave privada 'd' usando o inverso multiplicativo modular
    mpz_t d;
    mpz_init(d);
    inverso_modular(d, e, phi_n);

    FILE *file = fopen("criptografado.txt", "r");

    unsigned long long int i = 0;
    while (!feof(file)) {
        mpz_init(ascii_codes[i]); // Inicializa ascii_codes[i]
        gmp_fscanf(file, "%Zd", ascii_codes[i]); // Lê os valores do arquivo
        i++;
    }

    fclose(file);

    char frase[99999];
    for (unsigned long long int j = 0; j < i; j++) {
        power_mod_gmp(resultado, ascii_codes[j], d, n);
        frase[j] = mpz_get_ui(resultado) % 256; // Converte resultado para char e armazena em frase
    }
    frase[i] = '\0'; // Finaliza a string

    FILE *file_out = fopen("desencriptografado.txt", "w");
    fprintf(file_out, "%s", frase);
    fclose(file_out);


    // Limpeza
    for (unsigned long long int j = 0; j < i; j++) {
        mpz_clear(ascii_codes[j]);
    }

    mpz_clear(p);
    mpz_clear(q);
    mpz_clear(e);
    mpz_clear(n);
    mpz_clear(resultado);
}

