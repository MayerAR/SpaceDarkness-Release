/********************************************************************************
** Form generated from reading UI file 'widgetitemtab.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETITEMTAB_H
#define UI_WIDGETITEMTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetItemTab
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *accelerationLabel;
    QSpinBox *accelerationSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *limitVelocityLabel;
    QSpinBox *limitVelocitySpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *isStaticLabel;
    QCheckBox *isStaticCheckBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *pixmapTextLabel;
    QPushButton *changePixmapPushButton;
    QLabel *pixmapLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rotateAccelerationLabel;
    QDoubleSpinBox *rotateAccelerationSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *limitRotationLabel;
    QDoubleSpinBox *limitRotationSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *elasticityLabel;
    QDoubleSpinBox *elasticitySpinBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *healthLabel;
    QLabel *healthValueLabel;
    QSlider *healthSlider;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *massLabel;
    QLabel *massValueLabel;
    QSlider *massSlider;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *WidgetItemTab)
    {
        if (WidgetItemTab->objectName().isEmpty())
            WidgetItemTab->setObjectName(QString::fromUtf8("WidgetItemTab"));
        WidgetItemTab->resize(600, 320);
        WidgetItemTab->setMinimumSize(QSize(600, 320));
        WidgetItemTab->setMaximumSize(QSize(600, 320));
        WidgetItemTab->setWindowTitle(QString::fromUtf8("Form"));
        layoutWidget = new QWidget(WidgetItemTab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 301));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
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
        accelerationSpinBox->setSingleStep(1);

        horizontalLayout->addWidget(accelerationSpinBox);


        verticalLayout_4->addLayout(horizontalLayout);

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


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        isStaticLabel = new QLabel(layoutWidget);
        isStaticLabel->setObjectName(QString::fromUtf8("isStaticLabel"));
        isStaticLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_6->addWidget(isStaticLabel);

        isStaticCheckBox = new QCheckBox(layoutWidget);
        isStaticCheckBox->setObjectName(QString::fromUtf8("isStaticCheckBox"));
        isStaticCheckBox->setMinimumSize(QSize(80, 0));
        isStaticCheckBox->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(isStaticCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pixmapTextLabel = new QLabel(layoutWidget);
        pixmapTextLabel->setObjectName(QString::fromUtf8("pixmapTextLabel"));
        pixmapTextLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_9->addWidget(pixmapTextLabel);

        changePixmapPushButton = new QPushButton(layoutWidget);
        changePixmapPushButton->setObjectName(QString::fromUtf8("changePixmapPushButton"));
        changePixmapPushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_9->addWidget(changePixmapPushButton);


        verticalLayout_3->addLayout(horizontalLayout_9);

        pixmapLabel = new QLabel(layoutWidget);
        pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
        pixmapLabel->setMinimumSize(QSize(100, 100));
        pixmapLabel->setMaximumSize(QSize(100, 100));

        verticalLayout_3->addWidget(pixmapLabel);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_10->addLayout(verticalLayout_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMinimumSize);
        rotateAccelerationLabel = new QLabel(layoutWidget);
        rotateAccelerationLabel->setObjectName(QString::fromUtf8("rotateAccelerationLabel"));
        rotateAccelerationLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_4->addWidget(rotateAccelerationLabel);

        rotateAccelerationSpinBox = new QDoubleSpinBox(layoutWidget);
        rotateAccelerationSpinBox->setObjectName(QString::fromUtf8("rotateAccelerationSpinBox"));
        rotateAccelerationSpinBox->setMinimumSize(QSize(80, 0));
        rotateAccelerationSpinBox->setMaximumSize(QSize(60, 16777215));
        rotateAccelerationSpinBox->setMaximum(60.000000000000000);
        rotateAccelerationSpinBox->setSingleStep(0.500000000000000);

        horizontalLayout_4->addWidget(rotateAccelerationSpinBox);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        limitRotationLabel = new QLabel(layoutWidget);
        limitRotationLabel->setObjectName(QString::fromUtf8("limitRotationLabel"));
        limitRotationLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_3->addWidget(limitRotationLabel);

        limitRotationSpinBox = new QDoubleSpinBox(layoutWidget);
        limitRotationSpinBox->setObjectName(QString::fromUtf8("limitRotationSpinBox"));
        limitRotationSpinBox->setMinimumSize(QSize(80, 0));
        limitRotationSpinBox->setMaximumSize(QSize(60, 16777215));
        limitRotationSpinBox->setMaximum(6.000000000000000);
        limitRotationSpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_3->addWidget(limitRotationSpinBox);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        elasticityLabel = new QLabel(layoutWidget);
        elasticityLabel->setObjectName(QString::fromUtf8("elasticityLabel"));
        elasticityLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_5->addWidget(elasticityLabel);

        elasticitySpinBox = new QDoubleSpinBox(layoutWidget);
        elasticitySpinBox->setObjectName(QString::fromUtf8("elasticitySpinBox"));
        elasticitySpinBox->setMinimumSize(QSize(80, 0));
        elasticitySpinBox->setMaximumSize(QSize(60, 16777215));
        elasticitySpinBox->setMaximum(3.000000000000000);
        elasticitySpinBox->setSingleStep(0.100000000000000);

        horizontalLayout_5->addWidget(elasticitySpinBox);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        healthLabel = new QLabel(layoutWidget);
        healthLabel->setObjectName(QString::fromUtf8("healthLabel"));
        healthLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_7->addWidget(healthLabel);

        healthValueLabel = new QLabel(layoutWidget);
        healthValueLabel->setObjectName(QString::fromUtf8("healthValueLabel"));
        healthValueLabel->setMinimumSize(QSize(80, 0));
        healthValueLabel->setText(QString::fromUtf8("0"));

        horizontalLayout_7->addWidget(healthValueLabel);


        verticalLayout->addLayout(horizontalLayout_7);

        healthSlider = new QSlider(layoutWidget);
        healthSlider->setObjectName(QString::fromUtf8("healthSlider"));
        healthSlider->setMinimum(1);
        healthSlider->setMaximum(5000);
        healthSlider->setPageStep(100);
        healthSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(healthSlider);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        massLabel = new QLabel(layoutWidget);
        massLabel->setObjectName(QString::fromUtf8("massLabel"));
        massLabel->setMinimumSize(QSize(170, 0));

        horizontalLayout_8->addWidget(massLabel);

        massValueLabel = new QLabel(layoutWidget);
        massValueLabel->setObjectName(QString::fromUtf8("massValueLabel"));
        massValueLabel->setMinimumSize(QSize(80, 0));
        massValueLabel->setText(QString::fromUtf8("0"));

        horizontalLayout_8->addWidget(massValueLabel);


        verticalLayout_2->addLayout(horizontalLayout_8);

        massSlider = new QSlider(layoutWidget);
        massSlider->setObjectName(QString::fromUtf8("massSlider"));
        massSlider->setMinimum(1);
        massSlider->setMaximum(3000);
        massSlider->setPageStep(100);
        massSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(massSlider);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(verticalLayout_2);


        horizontalLayout_10->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        QWidget::setTabOrder(accelerationSpinBox, limitVelocitySpinBox);
        QWidget::setTabOrder(limitVelocitySpinBox, isStaticCheckBox);
        QWidget::setTabOrder(isStaticCheckBox, changePixmapPushButton);
        QWidget::setTabOrder(changePixmapPushButton, rotateAccelerationSpinBox);
        QWidget::setTabOrder(rotateAccelerationSpinBox, limitRotationSpinBox);
        QWidget::setTabOrder(limitRotationSpinBox, elasticitySpinBox);
        QWidget::setTabOrder(elasticitySpinBox, healthSlider);
        QWidget::setTabOrder(healthSlider, massSlider);

        retranslateUi(WidgetItemTab);
        QObject::connect(healthSlider, SIGNAL(valueChanged(int)), healthValueLabel, SLOT(setNum(int)));
        QObject::connect(massSlider, SIGNAL(valueChanged(int)), massValueLabel, SLOT(setNum(int)));
        QObject::connect(changePixmapPushButton, SIGNAL(clicked()), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(isStaticCheckBox, SIGNAL(clicked()), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(accelerationSpinBox, SIGNAL(valueChanged(int)), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(massSlider, SIGNAL(valueChanged(int)), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(healthSlider, SIGNAL(valueChanged(int)), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(elasticitySpinBox, SIGNAL(valueChanged(double)), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(limitRotationSpinBox, SIGNAL(valueChanged(double)), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(rotateAccelerationSpinBox, SIGNAL(valueChanged(double)), WidgetItemTab, SLOT(slotChanged()));
        QObject::connect(limitVelocitySpinBox, SIGNAL(valueChanged(int)), WidgetItemTab, SLOT(slotChanged()));

        QMetaObject::connectSlotsByName(WidgetItemTab);
    } // setupUi

    void retranslateUi(QWidget *WidgetItemTab)
    {
#ifndef QT_NO_WHATSTHIS
        accelerationLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change acceleration of object", nullptr));
#endif // QT_NO_WHATSTHIS
        accelerationLabel->setText(QApplication::translate("WidgetItemTab", "Acceleration:", nullptr));
#ifndef QT_NO_WHATSTHIS
        accelerationSpinBox->setWhatsThis(QApplication::translate("WidgetItemTab", "Change acceleration of object", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        limitVelocityLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change max velocity of current object", nullptr));
#endif // QT_NO_WHATSTHIS
        limitVelocityLabel->setText(QApplication::translate("WidgetItemTab", "Limit Velocity:", nullptr));
#ifndef QT_NO_WHATSTHIS
        limitVelocitySpinBox->setWhatsThis(QApplication::translate("WidgetItemTab", "Change limit velocity of current object", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        isStaticLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change the influence of other objects on the current object", nullptr));
#endif // QT_NO_WHATSTHIS
        isStaticLabel->setText(QApplication::translate("WidgetItemTab", "Is Static:", nullptr));
#ifndef QT_NO_WHATSTHIS
        isStaticCheckBox->setWhatsThis(QApplication::translate("WidgetItemTab", "Change the influence of other objects on the current object", nullptr));
#endif // QT_NO_WHATSTHIS
        isStaticCheckBox->setText(QString());
#ifndef QT_NO_WHATSTHIS
        pixmapTextLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change image of object", nullptr));
#endif // QT_NO_WHATSTHIS
        pixmapTextLabel->setText(QApplication::translate("WidgetItemTab", "Pixmap:", nullptr));
#ifndef QT_NO_WHATSTHIS
        changePixmapPushButton->setWhatsThis(QApplication::translate("WidgetItemTab", "Change image of object", nullptr));
#endif // QT_NO_WHATSTHIS
        changePixmapPushButton->setText(QApplication::translate("WidgetItemTab", "Change", nullptr));
        pixmapLabel->setText(QString());
#ifndef QT_NO_WHATSTHIS
        rotateAccelerationLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change the acceleration of the angular rotation of the object", nullptr));
#endif // QT_NO_WHATSTHIS
        rotateAccelerationLabel->setText(QApplication::translate("WidgetItemTab", "Rotate Acceleration:", nullptr));
#ifndef QT_NO_WHATSTHIS
        rotateAccelerationSpinBox->setWhatsThis(QApplication::translate("WidgetItemTab", "Change the acceleration of the angular rotation of the object", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        limitRotationLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change max rotation of object", nullptr));
#endif // QT_NO_WHATSTHIS
        limitRotationLabel->setText(QApplication::translate("WidgetItemTab", "Limit Rotation:", nullptr));
#ifndef QT_NO_WHATSTHIS
        limitRotationSpinBox->setWhatsThis(QApplication::translate("WidgetItemTab", "Change max rotation of object", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        elasticityLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change the repulsion coefficient", nullptr));
#endif // QT_NO_WHATSTHIS
        elasticityLabel->setText(QApplication::translate("WidgetItemTab", "Elasticity:", nullptr));
#ifndef QT_NO_WHATSTHIS
        elasticitySpinBox->setWhatsThis(QApplication::translate("WidgetItemTab", "Change the repulsion coefficient", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        healthLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change health value", nullptr));
#endif // QT_NO_WHATSTHIS
        healthLabel->setText(QApplication::translate("WidgetItemTab", "Health:", nullptr));
#ifndef QT_NO_WHATSTHIS
        healthValueLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change health value", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        healthSlider->setWhatsThis(QApplication::translate("WidgetItemTab", "Change health value", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        massLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change mass value", nullptr));
#endif // QT_NO_WHATSTHIS
        massLabel->setText(QApplication::translate("WidgetItemTab", "Mass:", nullptr));
#ifndef QT_NO_WHATSTHIS
        massValueLabel->setWhatsThis(QApplication::translate("WidgetItemTab", "Change mass value", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        massSlider->setWhatsThis(QApplication::translate("WidgetItemTab", "Change mass value", nullptr));
#endif // QT_NO_WHATSTHIS
        Q_UNUSED(WidgetItemTab);
    } // retranslateUi

};

namespace Ui {
    class WidgetItemTab: public Ui_WidgetItemTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETITEMTAB_H
