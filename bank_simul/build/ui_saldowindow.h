/********************************************************************************
** Form generated from reading UI file 'saldowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDOWINDOW_H
#define UI_SALDOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaldoWindow
{
public:
    QPushButton *btntakaisin;
    QPushButton *btnkirulos;

    void setupUi(QWidget *SaldoWindow)
    {
        if (SaldoWindow->objectName().isEmpty())
            SaldoWindow->setObjectName(QStringLiteral("SaldoWindow"));
        SaldoWindow->resize(400, 300);
        btntakaisin = new QPushButton(SaldoWindow);
        btntakaisin->setObjectName(QStringLiteral("btntakaisin"));
        btntakaisin->setGeometry(QRect(40, 150, 101, 31));
        btnkirulos = new QPushButton(SaldoWindow);
        btnkirulos->setObjectName(QStringLiteral("btnkirulos"));
        btnkirulos->setGeometry(QRect(190, 150, 101, 31));

        retranslateUi(SaldoWindow);

        QMetaObject::connectSlotsByName(SaldoWindow);
    } // setupUi

    void retranslateUi(QWidget *SaldoWindow)
    {
        SaldoWindow->setWindowTitle(QApplication::translate("SaldoWindow", "Form", Q_NULLPTR));
        btntakaisin->setText(QApplication::translate("SaldoWindow", "Takaisin", Q_NULLPTR));
        btnkirulos->setText(QApplication::translate("SaldoWindow", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaldoWindow: public Ui_SaldoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDOWINDOW_H
