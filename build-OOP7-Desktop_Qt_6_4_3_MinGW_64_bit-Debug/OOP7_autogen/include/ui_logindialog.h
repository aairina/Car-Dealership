/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *wong;
    QLabel *label;
    QLineEdit *Username;
    QLabel *label_2;
    QLineEdit *Password;
    QHBoxLayout *horizontalLayout;
    QPushButton *CustomerButton;
    QPushButton *ManagerButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->setEnabled(true);
        LoginDialog->resize(253, 200);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        wong = new QLabel(LoginDialog);
        wong->setObjectName("wong");
        wong->setEnabled(true);
        wong->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(wong);

        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        Username = new QLineEdit(LoginDialog);
        Username->setObjectName("Username");

        verticalLayout->addWidget(Username);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        Password = new QLineEdit(LoginDialog);
        Password->setObjectName("Password");

        verticalLayout->addWidget(Password);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        CustomerButton = new QPushButton(LoginDialog);
        CustomerButton->setObjectName("CustomerButton");

        horizontalLayout->addWidget(CustomerButton);

        ManagerButton = new QPushButton(LoginDialog);
        ManagerButton->setObjectName("ManagerButton");

        horizontalLayout->addWidget(ManagerButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        wong->setText(QCoreApplication::translate("LoginDialog", "Data incorrect", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Password:", nullptr));
        CustomerButton->setText(QCoreApplication::translate("LoginDialog", "Customer Login", nullptr));
        ManagerButton->setText(QCoreApplication::translate("LoginDialog", "Manager Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
