/********************************************************************************
** Form generated from reading UI file 'choosestagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSESTAGEWIDGET_H
#define UI_CHOOSESTAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseStageWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *textLabel;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okeyButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ChooseStageWidget)
    {
        if (ChooseStageWidget->objectName().isEmpty())
            ChooseStageWidget->setObjectName(QString::fromUtf8("ChooseStageWidget"));
        ChooseStageWidget->resize(248, 131);
        ChooseStageWidget->setMinimumSize(QSize(248, 131));
        ChooseStageWidget->setMaximumSize(QSize(248, 131));
        verticalLayoutWidget = new QWidget(ChooseStageWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 251, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        textLabel = new QLabel(verticalLayoutWidget);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        textLabel->setFont(font);

        verticalLayout->addWidget(textLabel);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okeyButton = new QPushButton(verticalLayoutWidget);
        okeyButton->setObjectName(QString::fromUtf8("okeyButton"));
        okeyButton->setMinimumSize(QSize(0, 21));
        okeyButton->setMaximumSize(QSize(80, 21));

        horizontalLayout->addWidget(okeyButton);

        cancelButton = new QPushButton(verticalLayoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(80, 21));
        cancelButton->setMaximumSize(QSize(80, 21));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 15);
        verticalLayout->setStretch(1, 15);
        verticalLayout->setStretch(3, 15);

        retranslateUi(ChooseStageWidget);
        QObject::connect(cancelButton, SIGNAL(clicked()), ChooseStageWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ChooseStageWidget);
    } // setupUi

    void retranslateUi(QDialog *ChooseStageWidget)
    {
        ChooseStageWidget->setWindowTitle(QApplication::translate("ChooseStageWidget", "Choose Stage", nullptr));
        textLabel->setText(QApplication::translate("ChooseStageWidget", "Choose Stage:", nullptr));
        okeyButton->setText(QApplication::translate("ChooseStageWidget", "Start", nullptr));
        cancelButton->setText(QApplication::translate("ChooseStageWidget", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseStageWidget: public Ui_ChooseStageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESTAGEWIDGET_H
