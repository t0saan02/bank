#include "nostawindow.h"
#include "ui_nostawindow.h"

NostaWindow::NostaWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NostaWindow)
{
    ui->setupUi(this);
}

NostaWindow::~NostaWindow()
{
    delete ui;
}

void NostaWindow::on_btntakaisin_clicked()
{

}

void NostaWindow::on_btnkirulos_clicked()
{

}
