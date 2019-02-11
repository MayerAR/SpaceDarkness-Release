/********************************************************************************
** Form generated from reading UI file 'createnewobjectsparamdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWOBJECTSPARAMDIALOG_H
#define UI_CREATENEWOBJECTSPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewObjectsParamDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *newSettingsLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *nameSettingsLineEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QPushButton *createPushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *CreateNewObjectsParamDialog)
    {
        if (CreateNewObjectsParamDialog->objectName().isEmpty())
            CreateNewObjectsParamDialog->setObjectName(QString::fromUtf8("CreateNewObjectsParamDialog"));
        CreateNewObjectsParamDialog->resize(300, 120);
        CreateNewObjectsParamDialog->setMinimumSize(QSize(300, 120));
        CreateNewObjectsParamDialog->setMaximumSize(QSize(300, 120));
        verticalLayoutWidget = new QWidget(CreateNewObjectsParamDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 281, 114));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        newSettingsLabel = new QLabel(verticalLayoutWidget);
        newSettingsLabel->setObjectName(QString::fromUtf8("newSettingsLabel"));

        verticalLayout->addWidget(newSettingsLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        nameSettingsLineEdit = new QLineEdit(verticalLayoutWidget);
        nameSettingsLineEdit->setObjectName(QString::fromUtf8("nameSettingsLineEdit"));

        horizontalLayout_2->addWidget(nameSettingsLineEdit);

        horizontalLayout_2->setStretch(0, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        createPushButton = new QPushButton(verticalLayoutWidget);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));
        createPushButton->setEnabled(false);

        horizontalLayout->addWidget(createPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CreateNewObjectsParamDialog);
        QObject::connect(nameSettingsLineEdit, SIGNAL(textChanged(QString)), CreateNewObjectsParamDialog, SLOT(textEdited(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), CreateNewObjectsParamDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(CreateNewObjectsParamDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateNewObjectsParamDialog)
    {
        CreateNewObjectsParamDialog->setWindowTitle(QApplication::translate("CreateNewObjectsParamDialog", "Create new Parametres", nullptr));
        newSettingsLabel->setText(QApplication::translate("CreateNewObjectsParamDialog", "Enter the name of\n"
"the new objects Parametres:", nullptr));
        pushButton->setText(QApplication::translate("CreateNewObjectsParamDialog", "Cancel", nullptr));
        createPushButton->setText(QApplication::translate("CreateNewObjectsParamDialog", "Create New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateNewObjectsParamDialog: public Ui_CreateNewObjectsParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWOBJECTSPARAMDIALOG_H
