#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
    connect(ui->btnnosta, SIGNAL(click()), this, SLOT(openNostaWindow()));
    connect(ui->btnsaldo, SIGNAL(click()), this, SLOT(openSaldoWindow()));

}

MenuWindow::~MenuWindow()
{
    delete ui;
}
void MenuWindow::openNostaWindow(){
    nstwindow = new NostaWindow();
    nstwindow->show();}
void MenuWindow::openSaldoWindow(){
        sldwindow = new SaldoWindow();
        sldwindow->show();}

void MenuWindow::on_btnsaldo_clicked()
{
openSaldoWindow();
}

void MenuWindow::on_btnnosta_clicked()
{
  openNostaWindow();
}

void MenuWindow::on_btntalletus_clicked()
{

}

void MenuWindow::on_btnlainaa_clicked()
{

}

void MenuWindow::on_btnkirulos_clicked()
{

}

void MenuWindow::on_btntapahtumat_clicked()
{

}
