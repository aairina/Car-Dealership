/********************************************************************************
** Form generated from reading UI file 'carviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARVIEWDIALOG_H
#define UI_CARVIEWDIALOG_H

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

class Ui_CarViewDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *IDLabel;
    QLabel *IDDisplay;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *ManLabel;
    QLabel *ManDisplay;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ModLabel;
    QLabel *ModDisplay;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *YearLabel;
    QLabel *YearDisplay;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *KiloLabel;
    QLabel *KiloDisplay;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *PriceLabel;
    QLabel *PriceDisplay;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QLabel *RangeLabel;
    QLabel *RangeDisplay;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *TimeLabel;
    QLabel *TimeDisplay;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *ManagerEdit;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_4;
    QLineEdit *ManEdit;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QLineEdit *ModEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_6;
    QLineEdit *YearEdit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_7;
    QLineEdit *KiloEdit;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_8;
    QLineEdit *PriceEdit;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_9;
    QLineEdit *RangeEdit;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_10;
    QLineEdit *TimeEdit;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *SaveButton;
    QPushButton *DeleteButton;
    QPushButton *BackButton;

    void setupUi(QDialog *CarViewDialog)
    {
        if (CarViewDialog->objectName().isEmpty())
            CarViewDialog->setObjectName("CarViewDialog");
        CarViewDialog->resize(627, 595);
        horizontalLayout = new QHBoxLayout(CarViewDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        IDLabel = new QLabel(CarViewDialog);
        IDLabel->setObjectName("IDLabel");

        horizontalLayout_3->addWidget(IDLabel);

        IDDisplay = new QLabel(CarViewDialog);
        IDDisplay->setObjectName("IDDisplay");

        horizontalLayout_3->addWidget(IDDisplay);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        ManLabel = new QLabel(CarViewDialog);
        ManLabel->setObjectName("ManLabel");

        horizontalLayout_5->addWidget(ManLabel);

        ManDisplay = new QLabel(CarViewDialog);
        ManDisplay->setObjectName("ManDisplay");

        horizontalLayout_5->addWidget(ManDisplay);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        ModLabel = new QLabel(CarViewDialog);
        ModLabel->setObjectName("ModLabel");

        horizontalLayout_6->addWidget(ModLabel);

        ModDisplay = new QLabel(CarViewDialog);
        ModDisplay->setObjectName("ModDisplay");

        horizontalLayout_6->addWidget(ModDisplay);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        YearLabel = new QLabel(CarViewDialog);
        YearLabel->setObjectName("YearLabel");

        horizontalLayout_7->addWidget(YearLabel);

        YearDisplay = new QLabel(CarViewDialog);
        YearDisplay->setObjectName("YearDisplay");

        horizontalLayout_7->addWidget(YearDisplay);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        KiloLabel = new QLabel(CarViewDialog);
        KiloLabel->setObjectName("KiloLabel");

        horizontalLayout_8->addWidget(KiloLabel);

        KiloDisplay = new QLabel(CarViewDialog);
        KiloDisplay->setObjectName("KiloDisplay");

        horizontalLayout_8->addWidget(KiloDisplay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        PriceLabel = new QLabel(CarViewDialog);
        PriceLabel->setObjectName("PriceLabel");

        horizontalLayout_9->addWidget(PriceLabel);

        PriceDisplay = new QLabel(CarViewDialog);
        PriceDisplay->setObjectName("PriceDisplay");

        horizontalLayout_9->addWidget(PriceDisplay);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        RangeLabel = new QLabel(CarViewDialog);
        RangeLabel->setObjectName("RangeLabel");

        horizontalLayout_10->addWidget(RangeLabel);

        RangeDisplay = new QLabel(CarViewDialog);
        RangeDisplay->setObjectName("RangeDisplay");

        horizontalLayout_10->addWidget(RangeDisplay);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        TimeLabel = new QLabel(CarViewDialog);
        TimeLabel->setObjectName("TimeLabel");

        horizontalLayout_11->addWidget(TimeLabel);

        TimeDisplay = new QLabel(CarViewDialog);
        TimeDisplay->setObjectName("TimeDisplay");

        horizontalLayout_11->addWidget(TimeDisplay);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(CarViewDialog);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../build-OOP7-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/Parking place.png")));
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        ManagerEdit = new QLabel(CarViewDialog);
        ManagerEdit->setObjectName("ManagerEdit");
        ManagerEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ManagerEdit);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_4 = new QLabel(CarViewDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_13->addWidget(label_4);

        ManEdit = new QLineEdit(CarViewDialog);
        ManEdit->setObjectName("ManEdit");

        horizontalLayout_13->addWidget(ManEdit);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_5 = new QLabel(CarViewDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_15->addWidget(label_5);

        ModEdit = new QLineEdit(CarViewDialog);
        ModEdit->setObjectName("ModEdit");

        horizontalLayout_15->addWidget(ModEdit);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_6 = new QLabel(CarViewDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_16->addWidget(label_6);

        YearEdit = new QLineEdit(CarViewDialog);
        YearEdit->setObjectName("YearEdit");

        horizontalLayout_16->addWidget(YearEdit);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_7 = new QLabel(CarViewDialog);
        label_7->setObjectName("label_7");

        horizontalLayout_20->addWidget(label_7);

        KiloEdit = new QLineEdit(CarViewDialog);
        KiloEdit->setObjectName("KiloEdit");

        horizontalLayout_20->addWidget(KiloEdit);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_8 = new QLabel(CarViewDialog);
        label_8->setObjectName("label_8");

        horizontalLayout_21->addWidget(label_8);

        PriceEdit = new QLineEdit(CarViewDialog);
        PriceEdit->setObjectName("PriceEdit");

        horizontalLayout_21->addWidget(PriceEdit);


        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_9 = new QLabel(CarViewDialog);
        label_9->setObjectName("label_9");

        horizontalLayout_22->addWidget(label_9);

        RangeEdit = new QLineEdit(CarViewDialog);
        RangeEdit->setObjectName("RangeEdit");

        horizontalLayout_22->addWidget(RangeEdit);


        verticalLayout->addLayout(horizontalLayout_22);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        label_10 = new QLabel(CarViewDialog);
        label_10->setObjectName("label_10");

        horizontalLayout_25->addWidget(label_10);

        TimeEdit = new QLineEdit(CarViewDialog);
        TimeEdit->setObjectName("TimeEdit");

        horizontalLayout_25->addWidget(TimeEdit);


        verticalLayout->addLayout(horizontalLayout_25);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        SaveButton = new QPushButton(CarViewDialog);
        SaveButton->setObjectName("SaveButton");

        horizontalLayout_27->addWidget(SaveButton);

        DeleteButton = new QPushButton(CarViewDialog);
        DeleteButton->setObjectName("DeleteButton");

        horizontalLayout_27->addWidget(DeleteButton);

        BackButton = new QPushButton(CarViewDialog);
        BackButton->setObjectName("BackButton");
        BackButton->setEnabled(true);

        horizontalLayout_27->addWidget(BackButton);


        verticalLayout_2->addLayout(horizontalLayout_27);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(CarViewDialog);

        QMetaObject::connectSlotsByName(CarViewDialog);
    } // setupUi

    void retranslateUi(QDialog *CarViewDialog)
    {
        CarViewDialog->setWindowTitle(QCoreApplication::translate("CarViewDialog", "Dialog", nullptr));
        IDLabel->setText(QCoreApplication::translate("CarViewDialog", "ID:", nullptr));
        IDDisplay->setText(QString());
        ManLabel->setText(QCoreApplication::translate("CarViewDialog", "Manufactuer:", nullptr));
        ManDisplay->setText(QString());
        ModLabel->setText(QCoreApplication::translate("CarViewDialog", "Model:", nullptr));
        ModDisplay->setText(QString());
        YearLabel->setText(QCoreApplication::translate("CarViewDialog", "Year:", nullptr));
        YearDisplay->setText(QString());
        KiloLabel->setText(QCoreApplication::translate("CarViewDialog", "Kilometerage:", nullptr));
        KiloDisplay->setText(QString());
        PriceLabel->setText(QCoreApplication::translate("CarViewDialog", "Price:", nullptr));
        PriceDisplay->setText(QString());
        RangeLabel->setText(QCoreApplication::translate("CarViewDialog", "Range:", nullptr));
        RangeDisplay->setText(QString());
        TimeLabel->setText(QCoreApplication::translate("CarViewDialog", "Loading Time", nullptr));
        TimeDisplay->setText(QString());
        label->setText(QString());
        ManagerEdit->setText(QCoreApplication::translate("CarViewDialog", "Manager Edit", nullptr));
        label_4->setText(QCoreApplication::translate("CarViewDialog", "Manufacturer:", nullptr));
        label_5->setText(QCoreApplication::translate("CarViewDialog", "Model:", nullptr));
        label_6->setText(QCoreApplication::translate("CarViewDialog", "Year:", nullptr));
        label_7->setText(QCoreApplication::translate("CarViewDialog", "Kilometerage:", nullptr));
        label_8->setText(QCoreApplication::translate("CarViewDialog", "Price:", nullptr));
        label_9->setText(QCoreApplication::translate("CarViewDialog", "Range:", nullptr));
        label_10->setText(QCoreApplication::translate("CarViewDialog", "Loading Time:", nullptr));
        SaveButton->setText(QCoreApplication::translate("CarViewDialog", "Save Modifications", nullptr));
        DeleteButton->setText(QCoreApplication::translate("CarViewDialog", "Delete Car", nullptr));
        BackButton->setText(QCoreApplication::translate("CarViewDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarViewDialog: public Ui_CarViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARVIEWDIALOG_H
