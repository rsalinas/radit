/********************************************************************************
** Form generated from reading UI file 'FrmCunas.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCUNAS_H
#define UI_FRMCUNAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <micelanea/CunaButton.h>

QT_BEGIN_NAMESPACE

class Ui_FrmCunas
{
public:
    QHBoxLayout *horizontalLayout;
    CunaButton *Btn1;
    CunaButton *Btn2;
    CunaButton *Btn3;
    CunaButton *Btn4;
    CunaButton *Btn5;
    CunaButton *Btn6;
    CunaButton *Btn7;
    CunaButton *Btn8;
    CunaButton *Btn9;
    QComboBox *ComboPagina;
    QPushButton *BtnEditar;

    void setupUi(QDialog *FrmCunas)
    {
        if (FrmCunas->objectName().isEmpty())
            FrmCunas->setObjectName(QString::fromUtf8("FrmCunas"));
        FrmCunas->resize(886, 28);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FrmCunas->sizePolicy().hasHeightForWidth());
        FrmCunas->setSizePolicy(sizePolicy);
        FrmCunas->setMinimumSize(QSize(0, 20));
        FrmCunas->setMaximumSize(QSize(16777215, 28));
        FrmCunas->setStyleSheet(QString::fromUtf8("  background-color: rgb(32, 39, 47);\n"
""));
        horizontalLayout = new QHBoxLayout(FrmCunas);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 0, 0);
        Btn1 = new CunaButton(FrmCunas);
        Btn1->setObjectName(QString::fromUtf8("Btn1"));
        Btn1->setCursor(QCursor(Qt::PointingHandCursor));
        Btn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn1->setIcon(icon);
        Btn1->setIconSize(QSize(32, 20));
        Btn1->setCheckable(true);
        Btn1->setChecked(false);

        horizontalLayout->addWidget(Btn1);

        Btn2 = new CunaButton(FrmCunas);
        Btn2->setObjectName(QString::fromUtf8("Btn2"));
        Btn2->setCursor(QCursor(Qt::PointingHandCursor));
        Btn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn2->setIcon(icon1);
        Btn2->setIconSize(QSize(32, 20));
        Btn2->setCheckable(true);
        Btn2->setChecked(false);

        horizontalLayout->addWidget(Btn2);

        Btn3 = new CunaButton(FrmCunas);
        Btn3->setObjectName(QString::fromUtf8("Btn3"));
        Btn3->setCursor(QCursor(Qt::PointingHandCursor));
        Btn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n3.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn3->setIcon(icon2);
        Btn3->setIconSize(QSize(32, 20));
        Btn3->setCheckable(true);

        horizontalLayout->addWidget(Btn3);

        Btn4 = new CunaButton(FrmCunas);
        Btn4->setObjectName(QString::fromUtf8("Btn4"));
        Btn4->setCursor(QCursor(Qt::PointingHandCursor));
        Btn4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n4.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn4->setIcon(icon3);
        Btn4->setIconSize(QSize(32, 20));
        Btn4->setCheckable(true);

        horizontalLayout->addWidget(Btn4);

        Btn5 = new CunaButton(FrmCunas);
        Btn5->setObjectName(QString::fromUtf8("Btn5"));
        Btn5->setCursor(QCursor(Qt::PointingHandCursor));
        Btn5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n5.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn5->setIcon(icon4);
        Btn5->setIconSize(QSize(32, 20));
        Btn5->setCheckable(true);

        horizontalLayout->addWidget(Btn5);

        Btn6 = new CunaButton(FrmCunas);
        Btn6->setObjectName(QString::fromUtf8("Btn6"));
        Btn6->setCursor(QCursor(Qt::PointingHandCursor));
        Btn6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n6.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn6->setIcon(icon5);
        Btn6->setIconSize(QSize(32, 20));
        Btn6->setCheckable(true);

        horizontalLayout->addWidget(Btn6);

        Btn7 = new CunaButton(FrmCunas);
        Btn7->setObjectName(QString::fromUtf8("Btn7"));
        Btn7->setCursor(QCursor(Qt::PointingHandCursor));
        Btn7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n7.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn7->setIcon(icon6);
        Btn7->setIconSize(QSize(32, 20));
        Btn7->setCheckable(true);

        horizontalLayout->addWidget(Btn7);

        Btn8 = new CunaButton(FrmCunas);
        Btn8->setObjectName(QString::fromUtf8("Btn8"));
        Btn8->setCursor(QCursor(Qt::PointingHandCursor));
        Btn8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n8.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn8->setIcon(icon7);
        Btn8->setIconSize(QSize(32, 20));
        Btn8->setCheckable(true);

        horizontalLayout->addWidget(Btn8);

        Btn9 = new CunaButton(FrmCunas);
        Btn9->setObjectName(QString::fromUtf8("Btn9"));
        Btn9->setCursor(QCursor(Qt::PointingHandCursor));
        Btn9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n9.png"), QSize(), QIcon::Normal, QIcon::Off);
        Btn9->setIcon(icon8);
        Btn9->setIconSize(QSize(32, 20));
        Btn9->setCheckable(true);

        horizontalLayout->addWidget(Btn9);

        ComboPagina = new QComboBox(FrmCunas);
        ComboPagina->setObjectName(QString::fromUtf8("ComboPagina"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ComboPagina->sizePolicy().hasHeightForWidth());
        ComboPagina->setSizePolicy(sizePolicy1);
        ComboPagina->setStyleSheet(QString::fromUtf8("     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"background-color: rgb(38, 106, 208);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" \n"
"color: rgb(255, 255, 0);\n"
""));

        horizontalLayout->addWidget(ComboPagina);

        BtnEditar = new QPushButton(FrmCunas);
        BtnEditar->setObjectName(QString::fromUtf8("BtnEditar"));
        BtnEditar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnEditar->setStyleSheet(QString::fromUtf8("     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"background-color: rgb(38, 106, 208);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" \n"
"color: rgb(255, 255, 0);\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/general/iconos/menu/preferencias.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEditar->setIcon(icon9);
        BtnEditar->setIconSize(QSize(16, 16));
        BtnEditar->setCheckable(false);

        horizontalLayout->addWidget(BtnEditar);


        retranslateUi(FrmCunas);

        QMetaObject::connectSlotsByName(FrmCunas);
    } // setupUi

    void retranslateUi(QDialog *FrmCunas)
    {
        FrmCunas->setWindowTitle(QApplication::translate("FrmCunas", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Btn1->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn2->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn3->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn4->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn5->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn6->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn7->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn8->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Btn9->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ComboPagina->clear();
        ComboPagina->insertItems(0, QStringList()
         << QApplication::translate("FrmCunas", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmCunas", "9", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        BtnEditar->setToolTip(QApplication::translate("FrmCunas", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnEditar->setText(QApplication::translate("FrmCunas", "Editar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmCunas: public Ui_FrmCunas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCUNAS_H
