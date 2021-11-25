#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QMainWindow>
#include"nostawindow.h"
#include"saldowindow.h"


namespace Ui {
class MenuWindow;
}

class MenuWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = 0);
    ~MenuWindow();
public slots:
    void openNostaWindow();

private:
    NostaWindow *nstwindow;
public slots:
    void openSaldoWindow();

private:
    SaldoWindow *sldwindow;

private slots:
    void on_btnsaldo_clicked();

    void on_btnnosta_clicked();

    void on_btntalletus_clicked();

    void on_btnlainaa_clicked();

    void on_btnkirulos_clicked();

    void on_btntapahtumat_clicked();

private:
    Ui::MenuWindow *ui;
};

#endif // MENUWINDOW_H
