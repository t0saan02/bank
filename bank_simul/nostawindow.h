#ifndef NOSTAWINDOW_H
#define NOSTAWINDOW_H

#include <QWidget>

namespace Ui {
class NostaWindow;
}

class NostaWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NostaWindow(QWidget *parent = 0);
    ~NostaWindow();

private slots:
    void on_btntakaisin_clicked();

    void on_btnkirulos_clicked();

private:
    Ui::NostaWindow *ui;
};

#endif // NOSTAWINDOW_H
