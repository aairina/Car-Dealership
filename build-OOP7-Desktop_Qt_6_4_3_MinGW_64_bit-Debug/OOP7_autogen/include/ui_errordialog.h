/********************************************************************************
** Form generated from reading UI file 'errordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORDIALOG_H
#define UI_ERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_errorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *errorDialog)
    {
        if (errorDialog->objectName().isEmpty())
            errorDialog->setObjectName("errorDialog");
        errorDialog->resize(216, 175);
        verticalLayout = new QVBoxLayout(errorDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(errorDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(errorDialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(errorDialog);

        QMetaObject::connectSlotsByName(errorDialog);
    } // setupUi

    void retranslateUi(QDialog *errorDialog)
    {
        errorDialog->setWindowTitle(QCoreApplication::translate("errorDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("errorDialog", "Some data was incorrect and could not be modified.", nullptr));
        pushButton->setText(QCoreApplication::translate("errorDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class errorDialog: public Ui_errorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORDIALOG_H
