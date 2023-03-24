/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ManLine;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *ModLine;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *YearLine;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *KiloLine;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *PriceLine;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *RangeLine;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *TimeLine;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *DoneButton;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName("AddDialog");
        AddDialog->resize(408, 326);
        verticalLayout = new QVBoxLayout(AddDialog);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(AddDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        ManLine = new QLineEdit(AddDialog);
        ManLine->setObjectName("ManLine");

        horizontalLayout->addWidget(ManLine);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(AddDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        ModLine = new QLineEdit(AddDialog);
        ModLine->setObjectName("ModLine");

        horizontalLayout_2->addWidget(ModLine);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(AddDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        YearLine = new QLineEdit(AddDialog);
        YearLine->setObjectName("YearLine");

        horizontalLayout_3->addWidget(YearLine);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(AddDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        KiloLine = new QLineEdit(AddDialog);
        KiloLine->setObjectName("KiloLine");

        horizontalLayout_4->addWidget(KiloLine);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(AddDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        PriceLine = new QLineEdit(AddDialog);
        PriceLine->setObjectName("PriceLine");

        horizontalLayout_5->addWidget(PriceLine);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(AddDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        RangeLine = new QLineEdit(AddDialog);
        RangeLine->setObjectName("RangeLine");

        horizontalLayout_6->addWidget(RangeLine);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(AddDialog);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        TimeLine = new QLineEdit(AddDialog);
        TimeLine->setObjectName("TimeLine");

        horizontalLayout_7->addWidget(TimeLine);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        DoneButton = new QPushButton(AddDialog);
        DoneButton->setObjectName("DoneButton");

        horizontalLayout_8->addWidget(DoneButton);


        verticalLayout->addLayout(horizontalLayout_8);


        retranslateUi(AddDialog);

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QCoreApplication::translate("AddDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddDialog", "Manufacturer:", nullptr));
        label_2->setText(QCoreApplication::translate("AddDialog", "Model:", nullptr));
        label_3->setText(QCoreApplication::translate("AddDialog", "Year of registration:", nullptr));
        label_4->setText(QCoreApplication::translate("AddDialog", "Kilometerge:", nullptr));
        label_5->setText(QCoreApplication::translate("AddDialog", "Price:", nullptr));
        label_6->setText(QCoreApplication::translate("AddDialog", "Range:", nullptr));
        label_7->setText(QCoreApplication::translate("AddDialog", "Loading time:", nullptr));
        DoneButton->setText(QCoreApplication::translate("AddDialog", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
