#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include <QMainWindow>
#include <menuwindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MenuWindow *menWindow;
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
private slots:

    void on_btnlogin_clicked();
};

#endif // MAINWINDOW_H
