/********************************************************************************
** Form generated from reading UI file 'clientviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTVIEWDIALOG_H
#define UI_CLIENTVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClientViewDialog
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
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton;

    void setupUi(QDialog *ClientViewDialog)
    {
        if (ClientViewDialog->objectName().isEmpty())
            ClientViewDialog->setObjectName("ClientViewDialog");
        ClientViewDialog->resize(627, 348);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientViewDialog->sizePolicy().hasHeightForWidth());
        ClientViewDialog->setSizePolicy(sizePolicy);
        ClientViewDialog->setSizeGripEnabled(false);
        horizontalLayout = new QHBoxLayout(ClientViewDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        IDLabel = new QLabel(ClientViewDialog);
        IDLabel->setObjectName("IDLabel");

        horizontalLayout_3->addWidget(IDLabel);

        IDDisplay = new QLabel(ClientViewDialog);
        IDDisplay->setObjectName("IDDisplay");

        horizontalLayout_3->addWidget(IDDisplay);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        ManLabel = new QLabel(ClientViewDialog);
        ManLabel->setObjectName("ManLabel");

        horizontalLayout_5->addWidget(ManLabel);

        ManDisplay = new QLabel(ClientViewDialog);
        ManDisplay->setObjectName("ManDisplay");

        horizontalLayout_5->addWidget(ManDisplay);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        ModLabel = new QLabel(ClientViewDialog);
        ModLabel->setObjectName("ModLabel");

        horizontalLayout_6->addWidget(ModLabel);

        ModDisplay = new QLabel(ClientViewDialog);
        ModDisplay->setObjectName("ModDisplay");

        horizontalLayout_6->addWidget(ModDisplay);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        YearLabel = new QLabel(ClientViewDialog);
        YearLabel->setObjectName("YearLabel");

        horizontalLayout_7->addWidget(YearLabel);

        YearDisplay = new QLabel(ClientViewDialog);
        YearDisplay->setObjectName("YearDisplay");

        horizontalLayout_7->addWidget(YearDisplay);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        KiloLabel = new QLabel(ClientViewDialog);
        KiloLabel->setObjectName("KiloLabel");

        horizontalLayout_8->addWidget(KiloLabel);

        KiloDisplay = new QLabel(ClientViewDialog);
        KiloDisplay->setObjectName("KiloDisplay");

        horizontalLayout_8->addWidget(KiloDisplay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        PriceLabel = new QLabel(ClientViewDialog);
        PriceLabel->setObjectName("PriceLabel");

        horizontalLayout_9->addWidget(PriceLabel);

        PriceDisplay = new QLabel(ClientViewDialog);
        PriceDisplay->setObjectName("PriceDisplay");

        horizontalLayout_9->addWidget(PriceDisplay);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        RangeLabel = new QLabel(ClientViewDialog);
        RangeLabel->setObjectName("RangeLabel");

        horizontalLayout_10->addWidget(RangeLabel);

        RangeDisplay = new QLabel(ClientViewDialog);
        RangeDisplay->setObjectName("RangeDisplay");

        horizontalLayout_10->addWidget(RangeDisplay);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        TimeLabel = new QLabel(ClientViewDialog);
        TimeLabel->setObjectName("TimeLabel");

        horizontalLayout_11->addWidget(TimeLabel);

        TimeDisplay = new QLabel(ClientViewDialog);
        TimeDisplay->setObjectName("TimeDisplay");

        horizontalLayout_11->addWidget(TimeDisplay);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);


        verticalLayout_4->addLayout(horizontalLayout_11);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ClientViewDialog);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8("../build-OOP7-Desktop_Qt_6_2_4_MinGW_64_bit-Debug/Parking place.png")));
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        AddButton = new QPushButton(ClientViewDialog);
        AddButton->setObjectName("AddButton");

        horizontalLayout_2->addWidget(AddButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        pushButton = new QPushButton(ClientViewDialog);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(ClientViewDialog);

        QMetaObject::connectSlotsByName(ClientViewDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientViewDialog)
    {
        ClientViewDialog->setWindowTitle(QCoreApplication::translate("ClientViewDialog", "Dialog", nullptr));
        IDLabel->setText(QCoreApplication::translate("ClientViewDialog", "ID:", nullptr));
        IDDisplay->setText(QString());
        ManLabel->setText(QCoreApplication::translate("ClientViewDialog", "Manufactuer:", nullptr));
        ManDisplay->setText(QString());
        ModLabel->setText(QCoreApplication::translate("ClientViewDialog", "Model:", nullptr));
        ModDisplay->setText(QString());
        YearLabel->setText(QCoreApplication::translate("ClientViewDialog", "Year:", nullptr));
        YearDisplay->setText(QString());
        KiloLabel->setText(QCoreApplication::translate("ClientViewDialog", "Kilometerage:", nullptr));
        KiloDisplay->setText(QString());
        PriceLabel->setText(QCoreApplication::translate("ClientViewDialog", "Price:", nullptr));
        PriceDisplay->setText(QString());
        RangeLabel->setText(QCoreApplication::translate("ClientViewDialog", "Range:", nullptr));
        RangeDisplay->setText(QString());
        TimeLabel->setText(QCoreApplication::translate("ClientViewDialog", "Loading Time", nullptr));
        TimeDisplay->setText(QString());
        label->setText(QString());
        AddButton->setText(QCoreApplication::translate("ClientViewDialog", "Add to favourites", nullptr));
        pushButton->setText(QCoreApplication::translate("ClientViewDialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientViewDialog: public Ui_ClientViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTVIEWDIALOG_H
