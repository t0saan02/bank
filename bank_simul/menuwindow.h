#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QWidget>

namespace Ui {
class MenuWindow;
}

class MenuWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWindow(QWidget *parent = 0);
    ~MenuWindow();

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
