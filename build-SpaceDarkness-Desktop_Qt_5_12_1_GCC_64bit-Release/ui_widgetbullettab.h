/********************************************************************************
** Form generated from reading UI file 'widgetbullettab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETBULLETTAB_H
#define UI_WIDGETBULLETTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetBulletTab
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pixmapTextLabel;
    QPushButton *changePixmapPushButton;
    QLabel *pixmapLabel;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *accelerationLabel;
    QSpinBox *accelerationSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *limitVelocityLabel;
    QSpinBox *limitVelocitySpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *isStaticLabel;
    QCheckBox *isStaticCheckBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QFrame *line;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_12;
    QLabel *weaponLabel;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *clipLabel;
    QSpinBox *clipSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *recoilLabel;
    QSpinBox *recoilSpinBox;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *reloadLabel;
    QSpinBox *reloadTimeSpinBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *timeBetweenLabel;
    QSpinBox *betweenShotTimeSpinBox;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetBulletTab)
    {
        if (WidgetBulletTab->objectName().isEmpty())
            WidgetBulletTab->setObjectName(QString::fromUtf8("WidgetBulletTab"));
        WidgetBulletTab->resize(600, 320);
        WidgetBulletTab->setMinimumSize(QSize(600, 320));
        WidgetBulletTab->setMaximumSize(QSize(600, 320));
        WidgetBulletTab->setWindowTitle(QString::fromUtf8("Form"));
        layoutWidget = new QWidget(WidgetBulletTab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 574, 291));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pixmapTextLabel = new QLabel(layoutWidget);
        pixmapTextLabel->setObjectName(QString::fromUtf8("pixmapTextLabel"));
        pixmapTextLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_4->addWidget(pixmapTextLabel);

        changePixmapPushButton = new QPushButton(layoutWidget);
        changePixmapPushButton->setObjectName(QString::fromUtf8("changePixmapPushButton"));

        horizontalLayout_4->addWidget(changePixmapPushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        pixmapLabel = new QLabel(layoutWidget);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        pixmapLabel->setMinimumSize(QSize(100, 100));
        pixmapLabel->setMaximumSize(QSize(100, 100));

        verticalLayout->addWidget(pixmapLabel);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        accelerationLabel = new QLabel(layoutWidget);
        accelerationLabel->setObjectName(QString::fromUtf8("accelerationLabel"));
        accelerationLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout->addWidget(accelerationLabel);

        accelerationSpinBox = new QSpinBox(layoutWidget);
        accelerationSpinBox->setObjectName(QString::fromUtf8("accelerationSpinBox"));
        accelerationSpinBox->setMinimumSize(QSize(80, 0));
        accelerationSpinBox->setMaximumSize(QSize(50, 16777215));
        accelerationSpinBox->setMaximum(30);

        horizontalLayout->addWidget(accelerationSpinBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        limitVelocityLabel = new QLabel(layoutWidget);
        limitVelocityLabel->setObjectName(QString::fromUtf8("limitVelocityLabel"));
        limitVelocityLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_2->addWidget(limitVelocityLabel);

        limitVelocitySpinBox = new QSpinBox(layoutWidget);
        limitVelocitySpinBox->setObjectName(QString::fromUtf8("limitVelocitySpinBox"));
        limitVelocitySpinBox->setMinimumSize(QSize(80, 0));
        limitVelocitySpinBox->setMaximumSize(QSize(50, 16777215));
        limitVelocitySpinBox->setMaximum(1500);
        limitVelocitySpinBox->setSingleStep(100);

        horizontalLayout_2->addWidget(limitVelocitySpinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        isStaticLabel = new QLabel(layoutWidget);
        isStaticLabel->setObjectName(QString::fromUtf8("isStaticLabel"));
        isStaticLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_3->addWidget(isStaticLabel);

        isStaticCheckBox = new QCheckBox(layoutWidget);
        isStaticCheckBox->setObjectName(QString::fromUtf8("isStaticCheckBox"));
        isStaticCheckBox->setMinimumSize(QSize(80, 0));
        isStaticCheckBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(isStaticCheckBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_12);

        weaponLabel = new QLabel(layoutWidget);
        weaponLabel->setObjectName(QString::fromUtf8("weaponLabel"));

        horizontalLayout_11->addWidget(weaponLabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        clipLabel = new QLabel(layoutWidget);
        clipLabel->setObjectName(QString::fromUtf8("clipLabel"));
        clipLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_7->addWidget(clipLabel);

        clipSpinBox = new QSpinBox(layoutWidget);
        clipSpinBox->setObjectName(QString::fromUtf8("clipSpinBox"));
        clipSpinBox->setMinimumSize(QSize(80, 0));
        clipSpinBox->setMaximum(500);
        clipSpinBox->setSingleStep(10);

        horizontalLayout_7->addWidget(clipSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        recoilLabel = new QLabel(layoutWidget);
        recoilLabel->setObjectName(QString::fromUtf8("recoilLabel"));
        recoilLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_6->addWidget(recoilLabel);

        recoilSpinBox = new QSpinBox(layoutWidget);
        recoilSpinBox->setObjectName(QString::fromUtf8("recoilSpinBox"));
        recoilSpinBox->setMinimumSize(QSize(80, 0));
        recoilSpinBox->setMaximum(1000);
        recoilSpinBox->setSingleStep(100);

        horizontalLayout_6->addWidget(recoilSpinBox);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_10->addLayout(verticalLayout_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        reloadLabel = new QLabel(layoutWidget);
        reloadLabel->setObjectName(QString::fromUtf8("reloadLabel"));
        reloadLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_8->addWidget(reloadLabel);

        reloadTimeSpinBox = new QSpinBox(layoutWidget);
        reloadTimeSpinBox->setObjectName(QString::fromUtf8("reloadTimeSpinBox"));
        reloadTimeSpinBox->setMinimumSize(QSize(80, 0));
        reloadTimeSpinBox->setMaximum(500);
        reloadTimeSpinBox->setSingleStep(10);

        horizontalLayout_8->addWidget(reloadTimeSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        timeBetweenLabel = new QLabel(layoutWidget);
        timeBetweenLabel->setObjectName(QString::fromUtf8("timeBetweenLabel"));
        timeBetweenLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_9->addWidget(timeBetweenLabel);

        betweenShotTimeSpinBox = new QSpinBox(layoutWidget);
        betweenShotTimeSpinBox->setObjectName(QString::fromUtf8("betweenShotTimeSpinBox"));
        betweenShotTimeSpinBox->setMinimumSize(QSize(80, 0));
        betweenShotTimeSpinBox->setMinimum(1);
        betweenShotTimeSpinBox->setMaximum(100);

        horizontalLayout_9->addWidget(betweenShotTimeSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_10);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        QWidget::setTabOrder(changePixmapPushButton, limitVelocitySpinBox);
        QWidget::setTabOrder(limitVelocitySpinBox, accelerationSpinBox);
        QWidget::setTabOrder(accelerationSpinBox, isStaticCheckBox);

        retranslateUi(WidgetBulletTab);
        QObject::connect(changePixmapPushButton, SIGNAL(clicked()), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(isStaticCheckBox, SIGNAL(stateChanged(int)), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(accelerationSpinBox, SIGNAL(valueChanged(int)), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(limitVelocitySpinBox, SIGNAL(valueChanged(int)), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(clipSpinBox, SIGNAL(valueChanged(int)), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(betweenShotTimeSpinBox, SIGNAL(valueChanged(int)), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(reloadTimeSpinBox, SIGNAL(valueChanged(int)), WidgetBulletTab, SLOT(slotChanged()));
        QObject::connect(recoilSpinBox, SIGNAL(valueChanged(int)), WidgetBulletTab, SLOT(slotChanged()));

        QMetaObject::connectSlotsByName(WidgetBulletTab);
    } // setupUi

    void retranslateUi(QWidget *WidgetBulletTab)
    {
#ifndef QT_NO_WHATSTHIS
        pixmapTextLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change image of object", nullptr));
#endif // QT_NO_WHATSTHIS
        pixmapTextLabel->setText(QApplication::translate("WidgetBulletTab", " Pixmap:", nullptr));
#ifndef QT_NO_WHATSTHIS
        changePixmapPushButton->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change image of object", nullptr));
#endif // QT_NO_WHATSTHIS
        changePixmapPushButton->setText(QApplication::translate("WidgetBulletTab", "Change", nullptr));
        pixmapLabel->setText(QString());
#ifndef QT_NO_WHATSTHIS
        accelerationLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change acceleration of object", nullptr));
#endif // QT_NO_WHATSTHIS
        accelerationLabel->setText(QApplication::translate("WidgetBulletTab", "Acceleration: ", nullptr));
#ifndef QT_NO_WHATSTHIS
        accelerationSpinBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change acceleration of object", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        limitVelocityLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change limit velocity of current object", nullptr));
#endif // QT_NO_WHATSTHIS
        limitVelocityLabel->setText(QApplication::translate("WidgetBulletTab", "Limit Velocity: ", nullptr));
#ifndef QT_NO_WHATSTHIS
        limitVelocitySpinBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change limit velocity of current object", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        isStaticLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change the influence of other objects on the current object", nullptr));
#endif // QT_NO_WHATSTHIS
        isStaticLabel->setText(QApplication::translate("WidgetBulletTab", "Is Static:", nullptr));
#ifndef QT_NO_WHATSTHIS
        isStaticCheckBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change the influence of other objects on the current object", nullptr));
#endif // QT_NO_WHATSTHIS
        isStaticCheckBox->setText(QString());
        weaponLabel->setText(QApplication::translate("WidgetBulletTab", "Weapon Parametres:", nullptr));
#ifndef QT_NO_WHATSTHIS
        clipLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "How much bullets in one clip", nullptr));
#endif // QT_NO_WHATSTHIS
        clipLabel->setText(QApplication::translate("WidgetBulletTab", "Clip:", nullptr));
#ifndef QT_NO_WHATSTHIS
        clipSpinBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "How much bullets in one clip", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        recoilLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change the power of recoil from the shot", nullptr));
#endif // QT_NO_WHATSTHIS
        recoilLabel->setText(QApplication::translate("WidgetBulletTab", "Recoil:", nullptr));
#ifndef QT_NO_WHATSTHIS
        recoilSpinBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change the power of recoil from the shot", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        reloadLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change time between two clips", nullptr));
#endif // QT_NO_WHATSTHIS
        reloadLabel->setText(QApplication::translate("WidgetBulletTab", "Reload Time:", nullptr));
#ifndef QT_NO_WHATSTHIS
        reloadTimeSpinBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change time between two clips", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        timeBetweenLabel->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change time between two bullets", nullptr));
#endif // QT_NO_WHATSTHIS
        timeBetweenLabel->setText(QApplication::translate("WidgetBulletTab", "Time Between Shot:", nullptr));
#ifndef QT_NO_WHATSTHIS
        betweenShotTimeSpinBox->setWhatsThis(QApplication::translate("WidgetBulletTab", "Change time between two bullets", nullptr));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(WidgetBulletTab);
    } // retranslateUi

};

namespace Ui {
    class WidgetBulletTab: public Ui_WidgetBulletTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETBULLETTAB_H
