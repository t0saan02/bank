#ifndef SALDOWINDOW_H
#define SALDOWINDOW_H

#include <QWidget>

namespace Ui {
class SaldoWindow;
}

class SaldoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SaldoWindow(QWidget *parent = 0);
    ~SaldoWindow();

private slots:
    void on_btntakaisin_clicked();

    void on_btnkirulos_clicked();

private:
    Ui::SaldoWindow *ui;
};

#endif // SALDOWINDOW_H
