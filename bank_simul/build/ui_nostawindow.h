/********************************************************************************
** Form generated from reading UI file 'nostawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTAWINDOW_H
#define UI_NOSTAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostaWindow
{
public:
    QPushButton *btntakaisin;
    QPushButton *btnkirulos;

    void setupUi(QWidget *NostaWindow)
    {
        if (NostaWindow->objectName().isEmpty())
            NostaWindow->setObjectName(QStringLiteral("NostaWindow"));
        NostaWindow->resize(400, 300);
        btntakaisin = new QPushButton(NostaWindow);
        btntakaisin->setObjectName(QStringLiteral("btntakaisin"));
        btntakaisin->setGeometry(QRect(50, 180, 91, 31));
        btnkirulos = new QPushButton(NostaWindow);
        btnkirulos->setObjectName(QStringLiteral("btnkirulos"));
        btnkirulos->setGeometry(QRect(200, 180, 91, 31));

        retranslateUi(NostaWindow);

        QMetaObject::connectSlotsByName(NostaWindow);
    } // setupUi

    void retranslateUi(QWidget *NostaWindow)
    {
        NostaWindow->setWindowTitle(QApplication::translate("NostaWindow", "Form", Q_NULLPTR));
        btntakaisin->setText(QApplication::translate("NostaWindow", "Takaisin", Q_NULLPTR));
        btnkirulos->setText(QApplication::translate("NostaWindow", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NostaWindow: public Ui_NostaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTAWINDOW_H
