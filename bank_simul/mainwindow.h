#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menuwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void openMenuWindow();

private:
    MenuWindow *menwindow;


private:
    Ui::MainWindow *ui;

private slots:

    void on_btnlogin_clicked();
};

#endif // MAINWINDOW_H
