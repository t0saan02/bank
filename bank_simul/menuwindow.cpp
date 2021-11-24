#include "menuwindow.h"
#include "ui_menuwindow.h"

MenuWindow::MenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWindow)
{
    ui->setupUi(this);
}

MenuWindow::~MenuWindow()
{
    delete ui;
}

void MenuWindow::on_btnsaldo_clicked()
{

}

void MenuWindow::on_btnnosta_clicked()
{

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
