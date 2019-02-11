/********************************************************************************
** Form generated from reading UI file 'gameoptionstab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOPTIONSTAB_H
#define UI_GAMEOPTIONSTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameOptionsTab
{
public:
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *musicLabel;
    QLabel *musicPercentlabel;
    QSlider *musicHorizontalSlider;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *languageLabel;
    QComboBox *languageComboBox;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;

    void setupUi(QWidget *GameOptionsTab)
    {
        if (GameOptionsTab->objectName().isEmpty())
            GameOptionsTab->setObjectName(QString::fromUtf8("GameOptionsTab"));
        GameOptionsTab->resize(481, 302);
        GameOptionsTab->setMinimumSize(QSize(481, 302));
        GameOptionsTab->setMaximumSize(QSize(481, 302));
        verticalLayoutWidget_3 = new QWidget(GameOptionsTab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 481, 301));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        musicLabel = new QLabel(verticalLayoutWidget_3);
        musicLabel->setObjectName(QString::fromUtf8("musicLabel"));

        horizontalLayout->addWidget(musicLabel);

        musicPercentlabel = new QLabel(verticalLayoutWidget_3);
        musicPercentlabel->setObjectName(QString::fromUtf8("musicPercentlabel"));

        horizontalLayout->addWidget(musicPercentlabel);


        verticalLayout->addLayout(horizontalLayout);

        musicHorizontalSlider = new QSlider(verticalLayoutWidget_3);
        musicHorizontalSlider->setObjectName(QString::fromUtf8("musicHorizontalSlider"));
        musicHorizontalSlider->setMinimumSize(QSize(150, 0));
        musicHorizontalSlider->setCursor(QCursor(Qt::ArrowCursor));
        musicHorizontalSlider->setMaximum(100);
        musicHorizontalSlider->setOrientation(Qt::Horizontal);
        musicHorizontalSlider->setTickInterval(0);

        verticalLayout->addWidget(musicHorizontalSlider);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        languageLabel = new QLabel(verticalLayoutWidget_3);
        languageLabel->setObjectName(QString::fromUtf8("languageLabel"));

        verticalLayout_2->addWidget(languageLabel);

        languageComboBox = new QComboBox(verticalLayoutWidget_3);
        languageComboBox->setObjectName(QString::fromUtf8("languageComboBox"));
        languageComboBox->setMinimumSize(QSize(150, 0));

        verticalLayout_2->addWidget(languageComboBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(1, 10);
        horizontalLayout_2->setStretch(2, 10);
        horizontalLayout_2->setStretch(3, 10);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(GameOptionsTab);
        QObject::connect(musicHorizontalSlider, SIGNAL(valueChanged(int)), musicPercentlabel, SLOT(setNum(int)));
        QObject::connect(musicHorizontalSlider, SIGNAL(valueChanged(int)), GameOptionsTab, SLOT(slotChanged()));
        QObject::connect(languageComboBox, SIGNAL(currentIndexChanged(int)), GameOptionsTab, SLOT(slotChanged()));

        QMetaObject::connectSlotsByName(GameOptionsTab);
    } // setupUi

    void retranslateUi(QWidget *GameOptionsTab)
    {
        GameOptionsTab->setWindowTitle(QApplication::translate("GameOptionsTab", "Form", nullptr));
        musicLabel->setText(QApplication::translate("GameOptionsTab", "Volume:", nullptr));
        musicPercentlabel->setText(QString());
        languageLabel->setText(QApplication::translate("GameOptionsTab", "Language:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOptionsTab: public Ui_GameOptionsTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOPTIONSTAB_H
