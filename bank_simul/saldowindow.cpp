#include "saldowindow.h"
#include "ui_saldowindow.h"

SaldoWindow::SaldoWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SaldoWindow)
{
    ui->setupUi(this);
}

SaldoWindow::~SaldoWindow()
{
    delete ui;
}

void SaldoWindow::on_btntakaisin_clicked()
{

}

void SaldoWindow::on_btnkirulos_clicked()
{

}
