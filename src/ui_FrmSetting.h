/********************************************************************************
** Form generated from reading UI file 'FrmSetting.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMSETTING_H
#define UI_FRMSETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qvumeter.h"

QT_BEGIN_NAMESPACE

class Ui_FrmSetting
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *Solapar;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QSpinBox *Descartar;
    QLabel *label_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpinBox *Fundir;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *FundirSolapar;
    QCheckBox *FundirParar;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *Dispositivo;
    QFrame *frame_4;
    QCheckBox *Detector;
    QVUMeter *VuNivel;
    QDoubleSpinBox *DetectorNivel;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *page_2;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QSpinBox *Transicion;
    QLabel *label_16;
    QFrame *frame_19;
    QVUMeter *VuNivel2_3;
    QDoubleSpinBox *Locucion;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnSalir;

    void setupUi(QDialog *FrmSetting)
    {
        if (FrmSetting->objectName().isEmpty())
            FrmSetting->setObjectName(QString::fromUtf8("FrmSetting"));
        FrmSetting->resize(660, 485);
        FrmSetting->setStyleSheet(QString::fromUtf8("background-color: rgb(49, 49, 49);\n"
"background-color: rgb(33, 48, 58);"));
        verticalLayout = new QVBoxLayout(FrmSetting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(FrmSetting);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 62, 62);\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(250, 128, 28, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"\n"
"  border: 2px solid #000000;"));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_2, 0, 1, 1, 2);

        listWidget = new QListWidget(FrmSetting);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/menu/prefer.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 62, 62);\n"
"color: rgb(255, 255, 255);\n"
"  border: 2px solid #000000;"));
        listWidget->setFrameShape(QFrame::WinPanel);
        listWidget->setIconSize(QSize(20, 20));

        gridLayout->addWidget(listWidget, 0, 0, 2, 1);

        stackedWidget = new QStackedWidget(FrmSetting);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 62, 62);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"  border: 1px solid #000000;"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        frame = new QFrame(page_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 80, 481, 61));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLineWidth(0);

        horizontalLayout->addWidget(label_5);

        Solapar = new QSpinBox(frame);
        Solapar->setObjectName(QString::fromUtf8("Solapar"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Solapar->sizePolicy().hasHeightForWidth());
        Solapar->setSizePolicy(sizePolicy2);
        Solapar->setMaximum(100);
        Solapar->setValue(30);

        horizontalLayout->addWidget(Solapar);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setLineWidth(0);

        horizontalLayout->addWidget(label_6);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        Descartar = new QSpinBox(frame);
        Descartar->setObjectName(QString::fromUtf8("Descartar"));
        Descartar->setMaximum(100);
        Descartar->setValue(40);

        horizontalLayout_10->addWidget(Descartar);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_10->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout_10);

        frame_2 = new QFrame(page_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 160, 481, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(0);

        horizontalLayout_3->addWidget(label_7);

        Fundir = new QSpinBox(frame_2);
        Fundir->setObjectName(QString::fromUtf8("Fundir"));
        sizePolicy2.setHeightForWidth(Fundir->sizePolicy().hasHeightForWidth());
        Fundir->setSizePolicy(sizePolicy2);
        Fundir->setMaximum(100);
        Fundir->setValue(3);

        horizontalLayout_3->addWidget(Fundir);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        FundirSolapar = new QCheckBox(frame_2);
        FundirSolapar->setObjectName(QString::fromUtf8("FundirSolapar"));
        FundirSolapar->setCheckable(true);
        FundirSolapar->setChecked(false);

        verticalLayout_2->addWidget(FundirSolapar);

        FundirParar = new QCheckBox(frame_2);
        FundirParar->setObjectName(QString::fromUtf8("FundirParar"));

        verticalLayout_2->addWidget(FundirParar);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 20, 481, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Dispositivo = new QComboBox(frame_3);
        Dispositivo->setObjectName(QString::fromUtf8("Dispositivo"));

        horizontalLayout_5->addWidget(Dispositivo);


        verticalLayout_5->addLayout(horizontalLayout_5);

        frame_4 = new QFrame(page_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 270, 481, 121));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        Detector = new QCheckBox(frame_4);
        Detector->setObjectName(QString::fromUtf8("Detector"));
        Detector->setGeometry(QRect(10, 30, 201, 17));
        VuNivel = new QVUMeter(frame_4);
        VuNivel->setObjectName(QString::fromUtf8("VuNivel"));
        VuNivel->setGeometry(QRect(420, 10, 50, 101));
        VuNivel->setColorBg(QColor(33, 48, 58));
        VuNivel->setColorValue(QColor(33, 48, 58));
        VuNivel->setColorLow(QColor(79, 145, 255));
        VuNivel->setColorHigh(QColor(79, 145, 255));
        VuNivel->setMaxValue(120);
        DetectorNivel = new QDoubleSpinBox(frame_4);
        DetectorNivel->setObjectName(QString::fromUtf8("DetectorNivel"));
        DetectorNivel->setGeometry(QRect(350, 50, 62, 22));
        DetectorNivel->setDecimals(0);
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 5, 111, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 66, 111, 15));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 145, 111, 16));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 255, 111, 16));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        frame_9 = new QFrame(page_2);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(10, 20, 481, 46));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout_10 = new QVBoxLayout(frame_9);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_10->addItem(verticalSpacer_5);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_15 = new QLabel(frame_9);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setLineWidth(0);

        horizontalLayout_12->addWidget(label_15);

        Transicion = new QSpinBox(frame_9);
        Transicion->setObjectName(QString::fromUtf8("Transicion"));
        sizePolicy2.setHeightForWidth(Transicion->sizePolicy().hasHeightForWidth());
        Transicion->setSizePolicy(sizePolicy2);
        Transicion->setMaximum(5000);
        Transicion->setValue(500);

        horizontalLayout_12->addWidget(Transicion);

        label_16 = new QLabel(frame_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setLineWidth(0);

        horizontalLayout_12->addWidget(label_16);


        verticalLayout_10->addLayout(horizontalLayout_12);

        frame_19 = new QFrame(page_2);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(10, 90, 481, 121));
        frame_19->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        VuNivel2_3 = new QVUMeter(frame_19);
        VuNivel2_3->setObjectName(QString::fromUtf8("VuNivel2_3"));
        VuNivel2_3->setGeometry(QRect(420, 10, 50, 101));
        VuNivel2_3->setColorBg(QColor(33, 48, 58));
        VuNivel2_3->setColorValue(QColor(33, 48, 58));
        VuNivel2_3->setColorLow(QColor(79, 145, 255));
        VuNivel2_3->setColorHigh(QColor(79, 145, 255));
        VuNivel2_3->setLeftValue(0.15);
        VuNivel2_3->setRightValue(0.15);
        VuNivel2_3->setMaxValue(1);
        Locucion = new QDoubleSpinBox(frame_19);
        Locucion->setObjectName(QString::fromUtf8("Locucion"));
        Locucion->setGeometry(QRect(350, 50, 62, 22));
        Locucion->setDecimals(2);
        Locucion->setMaximum(1);
        Locucion->setSingleStep(0.01);
        Locucion->setValue(0.15);
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 5, 111, 16));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 75, 111, 16));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BtnSalir = new QPushButton(FrmSetting);
        BtnSalir->setObjectName(QString::fromUtf8("BtnSalir"));
        BtnSalir->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"background-color: rgb(207, 207, 207);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"    \n"
" }\n"
"\n"
" \n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
""));

        horizontalLayout_2->addWidget(BtnSalir);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FrmSetting);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(listWidget, SIGNAL(currentTextChanged(QString)), label_2, SLOT(setText(QString)));
        QObject::connect(DetectorNivel, SIGNAL(valueChanged(double)), VuNivel, SLOT(setLeftValue(double)));
        QObject::connect(DetectorNivel, SIGNAL(valueChanged(double)), VuNivel, SLOT(setRightValue(double)));
        QObject::connect(Locucion, SIGNAL(valueChanged(double)), VuNivel2_3, SLOT(setLeftValue(double)));
        QObject::connect(Locucion, SIGNAL(valueChanged(double)), VuNivel2_3, SLOT(setRightValue(double)));

        listWidget->setCurrentRow(-1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FrmSetting);
    } // setupUi

    void retranslateUi(QDialog *FrmSetting)
    {
        FrmSetting->setWindowTitle(QApplication::translate("FrmSetting", "Preferencias", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmSetting", "Preferencias", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("FrmSetting", "General", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("FrmSetting", "Pisador", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_5->setText(QApplication::translate("FrmSetting", "Solapar pistas a", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FrmSetting", "Segundos del final", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrmSetting", "Descartar pistas menores de", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrmSetting", "Segundos", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FrmSetting", "Tiempo de Fundido", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FrmSetting", "Segundos", 0, QApplication::UnicodeUTF8));
        FundirSolapar->setText(QApplication::translate("FrmSetting", "Fundidos al Solapar", 0, QApplication::UnicodeUTF8));
        FundirParar->setText(QApplication::translate("FrmSetting", "Fundido al Parar", 0, QApplication::UnicodeUTF8));
        Detector->setText(QApplication::translate("FrmSetting", "Activar Detector", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        VuNivel->setToolTip(QApplication::translate("FrmSetting", "VU Meter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        VuNivel->setWhatsThis(QApplication::translate("FrmSetting", "VU Meter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("FrmSetting", "Dispositivo", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FrmSetting", "Superposici\303\263n", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("FrmSetting", "Fundidos", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("FrmSetting", "Detector de finales", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("FrmSetting", "Variaci\303\263n de", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("FrmSetting", "Milisegundos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        VuNivel2_3->setToolTip(QApplication::translate("FrmSetting", "VU Meter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        VuNivel2_3->setWhatsThis(QApplication::translate("FrmSetting", "VU Meter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_12->setText(QApplication::translate("FrmSetting", "Transici\303\263n", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("FrmSetting", "Locuci\303\263n", 0, QApplication::UnicodeUTF8));
        BtnSalir->setText(QApplication::translate("FrmSetting", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmSetting: public Ui_FrmSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMSETTING_H
