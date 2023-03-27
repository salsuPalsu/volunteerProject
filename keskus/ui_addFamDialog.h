/********************************************************************************
** Form generated from reading UI file 'addFamDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFAMDIALOG_H
#define UI_ADDFAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QLineEdit *barEdit;
    QSpinBox *AdultspinBox;
    QSpinBox *BigCspinBox;
    QSpinBox *SmallCspinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *ok_Button;
    QLabel *label_4;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QString::fromUtf8("AddDialog"));
        AddDialog->resize(333, 334);
        barEdit = new QLineEdit(AddDialog);
        barEdit->setObjectName(QString::fromUtf8("barEdit"));
        barEdit->setGeometry(QRect(20, 50, 211, 26));
        AdultspinBox = new QSpinBox(AddDialog);
        AdultspinBox->setObjectName(QString::fromUtf8("AdultspinBox"));
        AdultspinBox->setGeometry(QRect(170, 100, 61, 41));
        BigCspinBox = new QSpinBox(AddDialog);
        BigCspinBox->setObjectName(QString::fromUtf8("BigCspinBox"));
        BigCspinBox->setGeometry(QRect(170, 150, 61, 41));
        SmallCspinBox = new QSpinBox(AddDialog);
        SmallCspinBox->setObjectName(QString::fromUtf8("SmallCspinBox"));
        SmallCspinBox->setGeometry(QRect(170, 200, 61, 41));
        label = new QLabel(AddDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 63, 20));
        label_2 = new QLabel(AddDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 91, 20));
        label_3 = new QLabel(AddDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 200, 101, 20));
        ok_Button = new QPushButton(AddDialog);
        ok_Button->setObjectName(QString::fromUtf8("ok_Button"));
        ok_Button->setGeometry(QRect(170, 260, 93, 29));
        label_4 = new QLabel(AddDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 71, 20));

        retranslateUi(AddDialog);

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QCoreApplication::translate("AddDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddDialog", "AIKUISIA:", nullptr));
        label_2->setText(QCoreApplication::translate("AddDialog", "ISOJA LAPSIA:", nullptr));
        label_3->setText(QCoreApplication::translate("AddDialog", "PIENI\303\204 LAPSIA:", nullptr));
        ok_Button->setText(QCoreApplication::translate("AddDialog", "OK", nullptr));
        label_4->setText(QCoreApplication::translate("AddDialog", "VIIVAKOODI :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFAMDIALOG_H
