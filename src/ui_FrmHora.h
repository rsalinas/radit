/********************************************************************************
** Form generated from reading UI file 'FrmHora.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMHORA_H
#define UI_FRMHORA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmHora
{
public:
    QPushButton *BtnTodos;
    QPushButton *BtnNinguna;
    QPushButton *BtnCancelar;
    QPushButton *BtnAceptar;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *H0;
    QCheckBox *H1;
    QCheckBox *H2;
    QCheckBox *H3;
    QCheckBox *H4;
    QCheckBox *H5;
    QCheckBox *H6;
    QCheckBox *H7;
    QCheckBox *H8;
    QCheckBox *H9;
    QCheckBox *H10;
    QCheckBox *H11;
    QCheckBox *H12;
    QCheckBox *H13;
    QCheckBox *H14;
    QCheckBox *H15;
    QCheckBox *H16;
    QCheckBox *H17;
    QCheckBox *H18;
    QCheckBox *H19;
    QCheckBox *H20;
    QCheckBox *H21;
    QCheckBox *H22;
    QCheckBox *H23;

    void setupUi(QDialog *FrmHora)
    {
        if (FrmHora->objectName().isEmpty())
            FrmHora->setObjectName(QString::fromUtf8("FrmHora"));
        FrmHora->resize(282, 200);
        FrmHora->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        BtnTodos = new QPushButton(FrmHora);
        BtnTodos->setObjectName(QString::fromUtf8("BtnTodos"));
        BtnTodos->setGeometry(QRect(200, 40, 75, 23));
        BtnTodos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BtnNinguna = new QPushButton(FrmHora);
        BtnNinguna->setObjectName(QString::fromUtf8("BtnNinguna"));
        BtnNinguna->setGeometry(QRect(200, 10, 75, 23));
        BtnNinguna->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BtnCancelar = new QPushButton(FrmHora);
        BtnCancelar->setObjectName(QString::fromUtf8("BtnCancelar"));
        BtnCancelar->setGeometry(QRect(200, 170, 75, 23));
        BtnCancelar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BtnAceptar = new QPushButton(FrmHora);
        BtnAceptar->setObjectName(QString::fromUtf8("BtnAceptar"));
        BtnAceptar->setGeometry(QRect(100, 170, 75, 23));
        BtnAceptar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget = new QWidget(FrmHora);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 171, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        H0 = new QCheckBox(layoutWidget);
        H0->setObjectName(QString::fromUtf8("H0"));
        H0->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H0, 0, 0, 1, 1);

        H1 = new QCheckBox(layoutWidget);
        H1->setObjectName(QString::fromUtf8("H1"));
        H1->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H1, 0, 1, 1, 1);

        H2 = new QCheckBox(layoutWidget);
        H2->setObjectName(QString::fromUtf8("H2"));
        H2->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H2, 0, 2, 1, 1);

        H3 = new QCheckBox(layoutWidget);
        H3->setObjectName(QString::fromUtf8("H3"));
        H3->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H3, 0, 3, 1, 1);

        H4 = new QCheckBox(layoutWidget);
        H4->setObjectName(QString::fromUtf8("H4"));
        H4->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H4, 1, 0, 1, 1);

        H5 = new QCheckBox(layoutWidget);
        H5->setObjectName(QString::fromUtf8("H5"));
        H5->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H5, 1, 1, 1, 1);

        H6 = new QCheckBox(layoutWidget);
        H6->setObjectName(QString::fromUtf8("H6"));
        H6->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H6, 1, 2, 1, 1);

        H7 = new QCheckBox(layoutWidget);
        H7->setObjectName(QString::fromUtf8("H7"));
        H7->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H7, 1, 3, 1, 1);

        H8 = new QCheckBox(layoutWidget);
        H8->setObjectName(QString::fromUtf8("H8"));
        H8->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H8, 2, 0, 1, 1);

        H9 = new QCheckBox(layoutWidget);
        H9->setObjectName(QString::fromUtf8("H9"));
        H9->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H9, 2, 1, 1, 1);

        H10 = new QCheckBox(layoutWidget);
        H10->setObjectName(QString::fromUtf8("H10"));
        H10->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H10, 2, 2, 1, 1);

        H11 = new QCheckBox(layoutWidget);
        H11->setObjectName(QString::fromUtf8("H11"));
        H11->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H11, 2, 3, 1, 1);

        H12 = new QCheckBox(layoutWidget);
        H12->setObjectName(QString::fromUtf8("H12"));
        H12->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H12, 3, 0, 1, 1);

        H13 = new QCheckBox(layoutWidget);
        H13->setObjectName(QString::fromUtf8("H13"));
        H13->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H13, 3, 1, 1, 1);

        H14 = new QCheckBox(layoutWidget);
        H14->setObjectName(QString::fromUtf8("H14"));
        H14->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H14, 3, 2, 1, 1);

        H15 = new QCheckBox(layoutWidget);
        H15->setObjectName(QString::fromUtf8("H15"));
        H15->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H15, 3, 3, 1, 1);

        H16 = new QCheckBox(layoutWidget);
        H16->setObjectName(QString::fromUtf8("H16"));
        H16->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H16, 4, 0, 1, 1);

        H17 = new QCheckBox(layoutWidget);
        H17->setObjectName(QString::fromUtf8("H17"));
        H17->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H17, 4, 1, 1, 1);

        H18 = new QCheckBox(layoutWidget);
        H18->setObjectName(QString::fromUtf8("H18"));
        H18->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H18, 4, 2, 1, 1);

        H19 = new QCheckBox(layoutWidget);
        H19->setObjectName(QString::fromUtf8("H19"));
        H19->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H19, 4, 3, 1, 1);

        H20 = new QCheckBox(layoutWidget);
        H20->setObjectName(QString::fromUtf8("H20"));
        H20->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H20, 5, 0, 1, 1);

        H21 = new QCheckBox(layoutWidget);
        H21->setObjectName(QString::fromUtf8("H21"));
        H21->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H21, 5, 1, 1, 1);

        H22 = new QCheckBox(layoutWidget);
        H22->setObjectName(QString::fromUtf8("H22"));
        H22->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H22, 5, 2, 1, 1);

        H23 = new QCheckBox(layoutWidget);
        H23->setObjectName(QString::fromUtf8("H23"));
        H23->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(H23, 5, 3, 1, 1);


        retranslateUi(FrmHora);
        QObject::connect(BtnCancelar, SIGNAL(clicked()), FrmHora, SLOT(close()));

        QMetaObject::connectSlotsByName(FrmHora);
    } // setupUi

    void retranslateUi(QDialog *FrmHora)
    {
        FrmHora->setWindowTitle(QApplication::translate("FrmHora", "Horas del Evento", 0, QApplication::UnicodeUTF8));
        BtnTodos->setText(QApplication::translate("FrmHora", "Todas", 0, QApplication::UnicodeUTF8));
        BtnNinguna->setText(QApplication::translate("FrmHora", "Ninguna", 0, QApplication::UnicodeUTF8));
        BtnCancelar->setText(QApplication::translate("FrmHora", "Cancelar", 0, QApplication::UnicodeUTF8));
        BtnAceptar->setText(QApplication::translate("FrmHora", "Aceptar", 0, QApplication::UnicodeUTF8));
        H0->setText(QApplication::translate("FrmHora", "0", 0, QApplication::UnicodeUTF8));
        H1->setText(QApplication::translate("FrmHora", "1", 0, QApplication::UnicodeUTF8));
        H2->setText(QApplication::translate("FrmHora", "2", 0, QApplication::UnicodeUTF8));
        H3->setText(QApplication::translate("FrmHora", "3", 0, QApplication::UnicodeUTF8));
        H4->setText(QApplication::translate("FrmHora", "4", 0, QApplication::UnicodeUTF8));
        H5->setText(QApplication::translate("FrmHora", "5", 0, QApplication::UnicodeUTF8));
        H6->setText(QApplication::translate("FrmHora", "6", 0, QApplication::UnicodeUTF8));
        H7->setText(QApplication::translate("FrmHora", "7", 0, QApplication::UnicodeUTF8));
        H8->setText(QApplication::translate("FrmHora", "8", 0, QApplication::UnicodeUTF8));
        H9->setText(QApplication::translate("FrmHora", "9", 0, QApplication::UnicodeUTF8));
        H10->setText(QApplication::translate("FrmHora", "10", 0, QApplication::UnicodeUTF8));
        H11->setText(QApplication::translate("FrmHora", "11", 0, QApplication::UnicodeUTF8));
        H12->setText(QApplication::translate("FrmHora", "12", 0, QApplication::UnicodeUTF8));
        H13->setText(QApplication::translate("FrmHora", "13", 0, QApplication::UnicodeUTF8));
        H14->setText(QApplication::translate("FrmHora", "14", 0, QApplication::UnicodeUTF8));
        H15->setText(QApplication::translate("FrmHora", "15", 0, QApplication::UnicodeUTF8));
        H16->setText(QApplication::translate("FrmHora", "16", 0, QApplication::UnicodeUTF8));
        H17->setText(QApplication::translate("FrmHora", "17", 0, QApplication::UnicodeUTF8));
        H18->setText(QApplication::translate("FrmHora", "18", 0, QApplication::UnicodeUTF8));
        H19->setText(QApplication::translate("FrmHora", "19", 0, QApplication::UnicodeUTF8));
        H20->setText(QApplication::translate("FrmHora", "20", 0, QApplication::UnicodeUTF8));
        H21->setText(QApplication::translate("FrmHora", "21", 0, QApplication::UnicodeUTF8));
        H22->setText(QApplication::translate("FrmHora", "22", 0, QApplication::UnicodeUTF8));
        H23->setText(QApplication::translate("FrmHora", "23", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmHora: public Ui_FrmHora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMHORA_H
