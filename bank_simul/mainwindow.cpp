#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnlogin, SIGNAL(click()), this, SLOT(openMenuWindow()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openMenuWindow(){
    menwindow = new MenuWindow();
    menwindow->show();
}
void MainWindow::on_btnlogin_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();
    if(login=="admin" && password=="qwer")
{
     openMenuWindow();

   }
    else{
        QMessageBox::warning(this, "Tunnistauduinen", "Tunnus tai salasana on vaara!");
    }
}
