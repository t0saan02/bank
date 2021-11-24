#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menuwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    menWindow = new MenuWindow();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnlogin_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();
    if(login=="admin" && password=="qwer")
{
     menWindow->show();
     this->close;

   }
    else{
        QMessageBox::warning(this, "Vaara tunnus tai salasana");
    }
}
