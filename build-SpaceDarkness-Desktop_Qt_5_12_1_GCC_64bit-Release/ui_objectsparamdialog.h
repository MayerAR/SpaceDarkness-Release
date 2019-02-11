/********************************************************************************
** Form generated from reading UI file 'objectsparamdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTSPARAMDIALOG_H
#define UI_OBJECTSPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectsParamDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *objectsParamTabWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPushButton;
    QPushButton *acceptPushButton;

    void setupUi(QDialog *ObjectsParamDialog)
    {
        if (ObjectsParamDialog->objectName().isEmpty())
            ObjectsParamDialog->setObjectName(QString::fromUtf8("ObjectsParamDialog"));
        ObjectsParamDialog->resize(620, 370);
        ObjectsParamDialog->setMinimumSize(QSize(620, 370));
        ObjectsParamDialog->setMaximumSize(QSize(620, 370));
        layoutWidget = new QWidget(ObjectsParamDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, -6, 621, 378));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 15, 10, 10);
        objectsParamTabWidget = new QTabWidget(layoutWidget);
        objectsParamTabWidget->setObjectName(QString::fromUtf8("objectsParamTabWidget"));
        objectsParamTabWidget->setMinimumSize(QSize(600, 320));
        objectsParamTabWidget->setMaximumSize(QSize(600, 320));

        verticalLayout->addWidget(objectsParamTabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelPushButton = new QPushButton(layoutWidget);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));

        horizontalLayout->addWidget(cancelPushButton);

        acceptPushButton = new QPushButton(layoutWidget);
        acceptPushButton->setObjectName(QString::fromUtf8("acceptPushButton"));
        acceptPushButton->setEnabled(true);

        horizontalLayout->addWidget(acceptPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ObjectsParamDialog);
        QObject::connect(cancelPushButton, SIGNAL(clicked()), ObjectsParamDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(ObjectsParamDialog);
    } // setupUi

    void retranslateUi(QDialog *ObjectsParamDialog)
    {
        ObjectsParamDialog->setWindowTitle(QApplication::translate("ObjectsParamDialog", "Change current parametres:", nullptr));
        cancelPushButton->setText(QApplication::translate("ObjectsParamDialog", "Cancel", nullptr));
        acceptPushButton->setText(QApplication::translate("ObjectsParamDialog", "Accept", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectsParamDialog: public Ui_ObjectsParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTSPARAMDIALOG_H
