#ifndef CREDITOS_H
#define CREDITOS_H

#include <QDialog>

namespace Ui {
class creditos;
}

class creditos : public QDialog
{
    Q_OBJECT

public:
    explicit creditos(QWidget *parent = nullptr);
    ~creditos();

private:
    Ui::creditos *ui;
};

#endif // CREDITOS_H
