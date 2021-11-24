/********************************************************************************
** Form generated from reading UI file 'menuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWINDOW_H
#define UI_MENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWindow
{
public:
    QPushButton *btnsaldo;
    QPushButton *btnnosta;
    QPushButton *btntalletus;
    QPushButton *btnlainaa;
    QPushButton *btnkirulos;
    QPushButton *btntapahtumat;

    void setupUi(QWidget *MenuWindow)
    {
        if (MenuWindow->objectName().isEmpty())
            MenuWindow->setObjectName(QStringLiteral("MenuWindow"));
        MenuWindow->resize(400, 300);
        btnsaldo = new QPushButton(MenuWindow);
        btnsaldo->setObjectName(QStringLiteral("btnsaldo"));
        btnsaldo->setGeometry(QRect(60, 40, 91, 31));
        btnnosta = new QPushButton(MenuWindow);
        btnnosta->setObjectName(QStringLiteral("btnnosta"));
        btnnosta->setGeometry(QRect(190, 40, 91, 31));
        btntalletus = new QPushButton(MenuWindow);
        btntalletus->setObjectName(QStringLiteral("btntalletus"));
        btntalletus->setGeometry(QRect(60, 90, 91, 31));
        btnlainaa = new QPushButton(MenuWindow);
        btnlainaa->setObjectName(QStringLiteral("btnlainaa"));
        btnlainaa->setGeometry(QRect(190, 90, 91, 31));
        btnkirulos = new QPushButton(MenuWindow);
        btnkirulos->setObjectName(QStringLiteral("btnkirulos"));
        btnkirulos->setGeometry(QRect(190, 140, 91, 31));
        btntapahtumat = new QPushButton(MenuWindow);
        btntapahtumat->setObjectName(QStringLiteral("btntapahtumat"));
        btntapahtumat->setGeometry(QRect(60, 140, 91, 31));

        retranslateUi(MenuWindow);

        QMetaObject::connectSlotsByName(MenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MenuWindow)
    {
        MenuWindow->setWindowTitle(QApplication::translate("MenuWindow", "Form", Q_NULLPTR));
        btnsaldo->setText(QApplication::translate("MenuWindow", "Saldo", Q_NULLPTR));
        btnnosta->setText(QApplication::translate("MenuWindow", "Nosta rahaa", Q_NULLPTR));
        btntalletus->setText(QApplication::translate("MenuWindow", "Talletus", Q_NULLPTR));
        btnlainaa->setText(QApplication::translate("MenuWindow", "Hake lainaa", Q_NULLPTR));
        btnkirulos->setText(QApplication::translate("MenuWindow", "Kirjaudu ulos", Q_NULLPTR));
        btntapahtumat->setText(QApplication::translate("MenuWindow", "Tilintapahtumat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MenuWindow: public Ui_MenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWINDOW_H
