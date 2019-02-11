/********************************************************************************
** Form generated from reading UI file 'objectsoptionstab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTSOPTIONSTAB_H
#define UI_OBJECTSOPTIONSTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjectOptionsTab
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *changeObjectLabel;
    QComboBox *changeObjectComboBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *deletePushButton;
    QPushButton *changePushButton;
    QPushButton *createPushButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ObjectOptionsTab)
    {
        if (ObjectOptionsTab->objectName().isEmpty())
            ObjectOptionsTab->setObjectName(QString::fromUtf8("ObjectOptionsTab"));
        ObjectOptionsTab->resize(481, 302);
        ObjectOptionsTab->setMinimumSize(QSize(481, 302));
        ObjectOptionsTab->setMaximumSize(QSize(481, 302));
        ObjectOptionsTab->setContextMenuPolicy(Qt::DefaultContextMenu);
        layoutWidget = new QWidget(ObjectOptionsTab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 481, 301));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        changeObjectLabel = new QLabel(layoutWidget);
        changeObjectLabel->setObjectName(QString::fromUtf8("changeObjectLabel"));

        verticalLayout_2->addWidget(changeObjectLabel);

        changeObjectComboBox = new QComboBox(layoutWidget);
        changeObjectComboBox->setObjectName(QString::fromUtf8("changeObjectComboBox"));
        changeObjectComboBox->setMinimumSize(QSize(150, 0));

        verticalLayout_2->addWidget(changeObjectComboBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(0, 27);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 30);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        deletePushButton = new QPushButton(layoutWidget);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setEnabled(false);

        verticalLayout->addWidget(deletePushButton);

        changePushButton = new QPushButton(layoutWidget);
        changePushButton->setObjectName(QString::fromUtf8("changePushButton"));
        changePushButton->setEnabled(false);

        verticalLayout->addWidget(changePushButton);

        createPushButton = new QPushButton(layoutWidget);
        createPushButton->setObjectName(QString::fromUtf8("createPushButton"));

        verticalLayout->addWidget(createPushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(ObjectOptionsTab);
        QObject::connect(changeObjectComboBox, SIGNAL(currentIndexChanged(QString)), ObjectOptionsTab, SLOT(slotChanged(QString)));

        QMetaObject::connectSlotsByName(ObjectOptionsTab);
    } // setupUi

    void retranslateUi(QWidget *ObjectOptionsTab)
    {
        ObjectOptionsTab->setWindowTitle(QApplication::translate("ObjectOptionsTab", "Form", nullptr));
#ifndef QT_NO_WHATSTHIS
        ObjectOptionsTab->setWhatsThis(QApplication::translate("ObjectOptionsTab", "Chose parametres for chage game objects", nullptr));
#endif // QT_NO_WHATSTHIS
        changeObjectLabel->setText(QApplication::translate("ObjectOptionsTab", "Chose parametres:", nullptr));
#ifndef QT_NO_WHATSTHIS
        deletePushButton->setWhatsThis(QApplication::translate("ObjectOptionsTab", "Delete selected parameter", nullptr));
#endif // QT_NO_WHATSTHIS
        deletePushButton->setText(QApplication::translate("ObjectOptionsTab", "Delete", nullptr));
#ifndef QT_NO_WHATSTHIS
        changePushButton->setWhatsThis(QApplication::translate("ObjectOptionsTab", "Change selected parameter", nullptr));
#endif // QT_NO_WHATSTHIS
        changePushButton->setText(QApplication::translate("ObjectOptionsTab", "Change", nullptr));
#ifndef QT_NO_WHATSTHIS
        createPushButton->setWhatsThis(QApplication::translate("ObjectOptionsTab", "Create new object parameter", nullptr));
#endif // QT_NO_WHATSTHIS
        createPushButton->setText(QApplication::translate("ObjectOptionsTab", "Create New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectOptionsTab: public Ui_ObjectOptionsTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTSOPTIONSTAB_H
