// backend.h

#ifndef BACKEND_H
#define BACKEND_H

#include <gmp.h>

#ifdef __cplusplus
extern "C" {
#endif

int isPrime(const mpz_t number, int *res);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void comprimo(int *res, mpz_t a, mpz_t b);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

unsigned long long int enc(const char *frase, mpz_t n, mpz_t e);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int desenc(mpz_t p, mpz_t q, mpz_t e);

#ifdef __cplusplus
}
#endif

#endif // BACKEND_H
