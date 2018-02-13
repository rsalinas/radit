/********************************************************************************
** Form generated from reading UI file 'FrmPisadores.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMPISADORES_H
#define UI_FRMPISADORES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmPisadores
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *RInFichero;
    QLabel *LInFichero;
    QPushButton *BtnInFichero;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *RInCarpeta;
    QLabel *LInCarpeta;
    QPushButton *BtnInCarpeta;
    QRadioButton *RInHora;
    QRadioButton *RInTemperatura;
    QRadioButton *RInHumedad;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *TTitulo;
    QPushButton *BtnTitulo;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSpinBox *Segundos;
    QLabel *label_6;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *ROutFichero;
    QLabel *LOutFichero;
    QPushButton *BtnOutFichero;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *ROutCarpeta;
    QLabel *LOutCarpeta;
    QPushButton *BtnOutCarpeta;
    QRadioButton *ROutHora;
    QRadioButton *ROutTemperatura;
    QRadioButton *ROutHumedad;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *BtnSalir;

    void setupUi(QDialog *FrmPisadores)
    {
        if (FrmPisadores->objectName().isEmpty())
            FrmPisadores->setObjectName(QString::fromUtf8("FrmPisadores"));
        FrmPisadores->resize(458, 488);
        FrmPisadores->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
""));
        groupBox = new QGroupBox(FrmPisadores);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 441, 261));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);\n"
" border: 1px solid #000000;"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(false);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 110, 421, 131));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        RInFichero = new QRadioButton(groupBox_2);
        RInFichero->setObjectName(QString::fromUtf8("RInFichero"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(RInFichero->sizePolicy().hasHeightForWidth());
        RInFichero->setSizePolicy(sizePolicy1);
        RInFichero->setChecked(true);

        horizontalLayout_2->addWidget(RInFichero);

        LInFichero = new QLabel(groupBox_2);
        LInFichero->setObjectName(QString::fromUtf8("LInFichero"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LInFichero->sizePolicy().hasHeightForWidth());
        LInFichero->setSizePolicy(sizePolicy2);
        LInFichero->setStyleSheet(QString::fromUtf8(""));
        LInFichero->setLineWidth(0);

        horizontalLayout_2->addWidget(LInFichero);

        BtnInFichero = new QPushButton(groupBox_2);
        BtnInFichero->setObjectName(QString::fromUtf8("BtnInFichero"));
        BtnInFichero->setCursor(QCursor(Qt::PointingHandCursor));
        BtnInFichero->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
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

        horizontalLayout_2->addWidget(BtnInFichero);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        RInCarpeta = new QRadioButton(groupBox_2);
        RInCarpeta->setObjectName(QString::fromUtf8("RInCarpeta"));
        sizePolicy1.setHeightForWidth(RInCarpeta->sizePolicy().hasHeightForWidth());
        RInCarpeta->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(RInCarpeta);

        LInCarpeta = new QLabel(groupBox_2);
        LInCarpeta->setObjectName(QString::fromUtf8("LInCarpeta"));
        LInCarpeta->setEnabled(false);
        sizePolicy2.setHeightForWidth(LInCarpeta->sizePolicy().hasHeightForWidth());
        LInCarpeta->setSizePolicy(sizePolicy2);
        LInCarpeta->setLineWidth(0);

        horizontalLayout_3->addWidget(LInCarpeta);

        BtnInCarpeta = new QPushButton(groupBox_2);
        BtnInCarpeta->setObjectName(QString::fromUtf8("BtnInCarpeta"));
        BtnInCarpeta->setEnabled(false);
        BtnInCarpeta->setCursor(QCursor(Qt::PointingHandCursor));
        BtnInCarpeta->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
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

        horizontalLayout_3->addWidget(BtnInCarpeta);


        verticalLayout_2->addLayout(horizontalLayout_3);

        RInHora = new QRadioButton(groupBox_2);
        RInHora->setObjectName(QString::fromUtf8("RInHora"));

        verticalLayout_2->addWidget(RInHora);

        RInTemperatura = new QRadioButton(groupBox_2);
        RInTemperatura->setObjectName(QString::fromUtf8("RInTemperatura"));

        verticalLayout_2->addWidget(RInTemperatura);

        RInHumedad = new QRadioButton(groupBox_2);
        RInHumedad->setObjectName(QString::fromUtf8("RInHumedad"));

        verticalLayout_2->addWidget(RInHumedad);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 441, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(21, 146, 184, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(250, 128, 28, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(0, 0, 0);\n"
""));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 411, 20));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setLineWidth(0);

        horizontalLayout_4->addWidget(label_9);

        TTitulo = new QLineEdit(layoutWidget);
        TTitulo->setObjectName(QString::fromUtf8("TTitulo"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(7);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(TTitulo->sizePolicy().hasHeightForWidth());
        TTitulo->setSizePolicy(sizePolicy3);
        TTitulo->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));

        horizontalLayout_4->addWidget(TTitulo);

        BtnTitulo = new QPushButton(layoutWidget);
        BtnTitulo->setObjectName(QString::fromUtf8("BtnTitulo"));
        BtnTitulo->setCursor(QCursor(Qt::PointingHandCursor));
        BtnTitulo->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
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

        horizontalLayout_4->addWidget(BtnTitulo);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 411, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setLineWidth(0);

        horizontalLayout->addWidget(label_5);

        Segundos = new QSpinBox(layoutWidget1);
        Segundos->setObjectName(QString::fromUtf8("Segundos"));
        sizePolicy1.setHeightForWidth(Segundos->sizePolicy().hasHeightForWidth());
        Segundos->setSizePolicy(sizePolicy1);
        Segundos->setMinimum(0);
        Segundos->setMaximum(60);
        Segundos->setValue(3);

        horizontalLayout->addWidget(Segundos);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setLineWidth(0);

        horizontalLayout->addWidget(label_6);

        groupBox_3 = new QGroupBox(FrmPisadores);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 280, 441, 161));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);\n"
" border: 1px solid #000000;"));
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_3->setFlat(false);
        groupBox_4 = new QGroupBox(groupBox_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 30, 421, 123));
        groupBox_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ROutFichero = new QRadioButton(groupBox_4);
        ROutFichero->setObjectName(QString::fromUtf8("ROutFichero"));
        sizePolicy1.setHeightForWidth(ROutFichero->sizePolicy().hasHeightForWidth());
        ROutFichero->setSizePolicy(sizePolicy1);
        ROutFichero->setChecked(true);

        horizontalLayout_6->addWidget(ROutFichero);

        LOutFichero = new QLabel(groupBox_4);
        LOutFichero->setObjectName(QString::fromUtf8("LOutFichero"));
        sizePolicy2.setHeightForWidth(LOutFichero->sizePolicy().hasHeightForWidth());
        LOutFichero->setSizePolicy(sizePolicy2);
        LOutFichero->setLineWidth(0);

        horizontalLayout_6->addWidget(LOutFichero);

        BtnOutFichero = new QPushButton(groupBox_4);
        BtnOutFichero->setObjectName(QString::fromUtf8("BtnOutFichero"));
        BtnOutFichero->setCursor(QCursor(Qt::PointingHandCursor));
        BtnOutFichero->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
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

        horizontalLayout_6->addWidget(BtnOutFichero);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        ROutCarpeta = new QRadioButton(groupBox_4);
        ROutCarpeta->setObjectName(QString::fromUtf8("ROutCarpeta"));
        sizePolicy1.setHeightForWidth(ROutCarpeta->sizePolicy().hasHeightForWidth());
        ROutCarpeta->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(ROutCarpeta);

        LOutCarpeta = new QLabel(groupBox_4);
        LOutCarpeta->setObjectName(QString::fromUtf8("LOutCarpeta"));
        LOutCarpeta->setEnabled(false);
        sizePolicy2.setHeightForWidth(LOutCarpeta->sizePolicy().hasHeightForWidth());
        LOutCarpeta->setSizePolicy(sizePolicy2);
        LOutCarpeta->setLineWidth(0);

        horizontalLayout_7->addWidget(LOutCarpeta);

        BtnOutCarpeta = new QPushButton(groupBox_4);
        BtnOutCarpeta->setObjectName(QString::fromUtf8("BtnOutCarpeta"));
        BtnOutCarpeta->setEnabled(false);
        BtnOutCarpeta->setCursor(QCursor(Qt::PointingHandCursor));
        BtnOutCarpeta->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
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

        horizontalLayout_7->addWidget(BtnOutCarpeta);


        verticalLayout->addLayout(horizontalLayout_7);

        ROutHora = new QRadioButton(groupBox_4);
        ROutHora->setObjectName(QString::fromUtf8("ROutHora"));

        verticalLayout->addWidget(ROutHora);

        ROutTemperatura = new QRadioButton(groupBox_4);
        ROutTemperatura->setObjectName(QString::fromUtf8("ROutTemperatura"));

        verticalLayout->addWidget(ROutTemperatura);

        ROutHumedad = new QRadioButton(groupBox_4);
        ROutHumedad->setObjectName(QString::fromUtf8("ROutHumedad"));

        verticalLayout->addWidget(ROutHumedad);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 441, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(21, 146, 184, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(250, 128, 28, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"color: rgb(0, 0, 0);\n"
""));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget2 = new QWidget(FrmPisadores);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 450, 441, 25));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        BtnSalir = new QPushButton(layoutWidget2);
        BtnSalir->setObjectName(QString::fromUtf8("BtnSalir"));
        BtnSalir->setCursor(QCursor(Qt::PointingHandCursor));
        BtnSalir->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
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

        horizontalLayout_9->addWidget(BtnSalir);


        retranslateUi(FrmPisadores);

        QMetaObject::connectSlotsByName(FrmPisadores);
    } // setupUi

    void retranslateUi(QDialog *FrmPisadores)
    {
        FrmPisadores->setWindowTitle(QApplication::translate("FrmPisadores", "A\303\261adir Pisadores", 0, QApplication::UnicodeUTF8));
        RInFichero->setText(QApplication::translate("FrmPisadores", "Fichero", 0, QApplication::UnicodeUTF8));
        LInFichero->setText(QString());
        BtnInFichero->setText(QApplication::translate("FrmPisadores", " ... ", 0, QApplication::UnicodeUTF8));
        RInCarpeta->setText(QApplication::translate("FrmPisadores", "Carpeta aleatoria", 0, QApplication::UnicodeUTF8));
        LInCarpeta->setText(QString());
        BtnInCarpeta->setText(QApplication::translate("FrmPisadores", " ... ", 0, QApplication::UnicodeUTF8));
        RInHora->setText(QApplication::translate("FrmPisadores", "Locuci\303\263n hora", 0, QApplication::UnicodeUTF8));
        RInTemperatura->setText(QApplication::translate("FrmPisadores", "Locuci\303\263n Temperatura", 0, QApplication::UnicodeUTF8));
        RInHumedad->setText(QApplication::translate("FrmPisadores", "Locuci\303\263n Humedad", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmPisadores", "Intro", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("FrmPisadores", "T\303\255tulo", 0, QApplication::UnicodeUTF8));
        BtnTitulo->setText(QApplication::translate("FrmPisadores", " ... ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FrmPisadores", "Reproducir a los", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FrmPisadores", "Segundos del inicio", 0, QApplication::UnicodeUTF8));
        ROutFichero->setText(QApplication::translate("FrmPisadores", "Fichero", 0, QApplication::UnicodeUTF8));
        LOutFichero->setText(QString());
        BtnOutFichero->setText(QApplication::translate("FrmPisadores", " ... ", 0, QApplication::UnicodeUTF8));
        ROutCarpeta->setText(QApplication::translate("FrmPisadores", "Carpeta aleatoria", 0, QApplication::UnicodeUTF8));
        LOutCarpeta->setText(QString());
        BtnOutCarpeta->setText(QApplication::translate("FrmPisadores", " ... ", 0, QApplication::UnicodeUTF8));
        ROutHora->setText(QApplication::translate("FrmPisadores", "Locuci\303\263n hora", 0, QApplication::UnicodeUTF8));
        ROutTemperatura->setText(QApplication::translate("FrmPisadores", "Locuci\303\263n Temperatura", 0, QApplication::UnicodeUTF8));
        ROutHumedad->setText(QApplication::translate("FrmPisadores", "Locuci\303\263n Humedad", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrmPisadores", "Outro", 0, QApplication::UnicodeUTF8));
        BtnSalir->setText(QApplication::translate("FrmPisadores", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmPisadores: public Ui_FrmPisadores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMPISADORES_H
