/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

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

class Ui_optionsDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *cancelPushButtom;
    QPushButton *applyPushButton;

    void setupUi(QDialog *optionsDialog)
    {
        if (optionsDialog->objectName().isEmpty())
            optionsDialog->setObjectName(QString::fromUtf8("optionsDialog"));
        optionsDialog->resize(520, 396);
        optionsDialog->setMinimumSize(QSize(520, 396));
        optionsDialog->setMaximumSize(QSize(520, 396));
        layoutWidget = new QWidget(optionsDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 503, 382));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(501, 351));
        tabWidget->setMaximumSize(QSize(501, 351));

        verticalLayout_6->addWidget(tabWidget);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        cancelPushButtom = new QPushButton(layoutWidget);
        cancelPushButtom->setObjectName(QString::fromUtf8("cancelPushButtom"));

        horizontalLayout_7->addWidget(cancelPushButtom);

        applyPushButton = new QPushButton(layoutWidget);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setEnabled(false);

        horizontalLayout_7->addWidget(applyPushButton);


        verticalLayout_6->addLayout(horizontalLayout_7);


        retranslateUi(optionsDialog);
        QObject::connect(cancelPushButtom, SIGNAL(clicked()), optionsDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(optionsDialog);
    } // setupUi

    void retranslateUi(QDialog *optionsDialog)
    {
        optionsDialog->setWindowTitle(QApplication::translate("optionsDialog", "Options:", nullptr));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        cancelPushButtom->setText(QApplication::translate("optionsDialog", "Cancel", nullptr));
        applyPushButton->setText(QApplication::translate("optionsDialog", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class optionsDialog: public Ui_optionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
