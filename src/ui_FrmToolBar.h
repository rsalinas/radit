/********************************************************************************
** Form generated from reading UI file 'FrmToolBar.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMTOOLBAR_H
#define UI_FRMTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_FrmToolBar
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnAux1;
    QPushButton *BtnAux2;
    QPushButton *BtnCunas;
    QPushButton *BtnLogEmision;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnAcerca;
    QPushButton *BtnSalir;
    QLabel *label;

    void setupUi(QDialog *FrmToolBar)
    {
        if (FrmToolBar->objectName().isEmpty())
            FrmToolBar->setObjectName(QString::fromUtf8("FrmToolBar"));
        FrmToolBar->resize(771, 22);
        FrmToolBar->setMinimumSize(QSize(0, 20));
        FrmToolBar->setMaximumSize(QSize(16777215, 28));
        FrmToolBar->setStyleSheet(QString::fromUtf8("  background-color: rgb(32, 39, 47);\n"
"\n"
"	\n"
"	\n"
"\n"
""));
        horizontalLayout = new QHBoxLayout(FrmToolBar);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 0, 0, 0);
        BtnAux1 = new QPushButton(FrmToolBar);
        BtnAux1->setObjectName(QString::fromUtf8("BtnAux1"));
        BtnAux1->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAux1->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"background-color: rgb(38, 106, 208);\n"
"    \n"
" }\n"
"\n"
" \n"
" QPushButton::checked {\n"
"	\n"
"	background-color: rgb(252, 114, 1);\n"
"background-color: rgb(139, 34, 2);\n"
"\n"
"\n"
"\n"
" }\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/menu/aux1.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAux1->setIcon(icon);
        BtnAux1->setIconSize(QSize(16, 16));
        BtnAux1->setCheckable(true);

        horizontalLayout->addWidget(BtnAux1);

        BtnAux2 = new QPushButton(FrmToolBar);
        BtnAux2->setObjectName(QString::fromUtf8("BtnAux2"));
        BtnAux2->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAux2->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"background-color: rgb(38, 106, 208);\n"
"    \n"
" }\n"
"\n"
" \n"
" QPushButton::checked {\n"
"	\n"
"	background-color: rgb(252, 114, 1);\n"
"\n"
"background-color: rgb(139, 34, 2);\n"
"\n"
" }\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/general/iconos/menu/aux2.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAux2->setIcon(icon1);
        BtnAux2->setIconSize(QSize(16, 16));
        BtnAux2->setCheckable(true);
        BtnAux2->setChecked(false);

        horizontalLayout->addWidget(BtnAux2);

        BtnCunas = new QPushButton(FrmToolBar);
        BtnCunas->setObjectName(QString::fromUtf8("BtnCunas"));
        BtnCunas->setCursor(QCursor(Qt::PointingHandCursor));
        BtnCunas->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"background-color: rgb(38, 106, 208);\n"
"\n"
"	\n"
"    \n"
" }\n"
"\n"
" \n"
" QPushButton::checked {\n"
"	\n"
"	background-color: rgb(252, 114, 1);\n"
"	\n"
"	background-color: rgb(139, 34, 2);\n"
"\n"
"\n"
"	\n"
"	     \n"
"\n"
" }\n"
"\n"
"QPushButton:disabled { color: grey; }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/general/iconos/menu/paleta.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnCunas->setIcon(icon2);
        BtnCunas->setIconSize(QSize(16, 16));
        BtnCunas->setCheckable(true);
        BtnCunas->setChecked(true);
        BtnCunas->setAutoDefault(true);
        BtnCunas->setDefault(false);
        BtnCunas->setFlat(false);

        horizontalLayout->addWidget(BtnCunas);

        BtnLogEmision = new QPushButton(FrmToolBar);
        BtnLogEmision->setObjectName(QString::fromUtf8("BtnLogEmision"));
        BtnLogEmision->setCursor(QCursor(Qt::PointingHandCursor));
        BtnLogEmision->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"background-color: rgb(38, 106, 208);\n"
"    \n"
" }\n"
"\n"
" \n"
" QPushButton::checked {\n"
"	\n"
"	background-color: rgb(252, 114, 1);\n"
"background-color: rgb(139, 34, 2);\n"
"\n"
"\n"
" }\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/general/iconos/menu/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnLogEmision->setIcon(icon3);
        BtnLogEmision->setIconSize(QSize(16, 16));
        BtnLogEmision->setCheckable(true);

        horizontalLayout->addWidget(BtnLogEmision);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnAcerca = new QPushButton(FrmToolBar);
        BtnAcerca->setObjectName(QString::fromUtf8("BtnAcerca"));
        BtnAcerca->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAcerca->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 106, 208);\n"
"color: rgb(255, 255, 255);\n"
""));
        BtnAcerca->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(BtnAcerca);

        BtnSalir = new QPushButton(FrmToolBar);
        BtnSalir->setObjectName(QString::fromUtf8("BtnSalir"));
        BtnSalir->setCursor(QCursor(Qt::PointingHandCursor));
        BtnSalir->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 106, 208);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(BtnSalir);

        label = new QLabel(FrmToolBar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(23, 47, 58);\n"
"background-color: rgb(10, 67, 129);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8(":/general/iconos/menu/logo.png")));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        retranslateUi(FrmToolBar);

        QMetaObject::connectSlotsByName(FrmToolBar);
    } // setupUi

    void retranslateUi(QDialog *FrmToolBar)
    {
        FrmToolBar->setWindowTitle(QApplication::translate("FrmToolBar", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtnAux1->setToolTip(QApplication::translate("FrmToolBar", "Auxiliar 1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnAux2->setToolTip(QApplication::translate("FrmToolBar", "Auxiliar 2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnCunas->setToolTip(QApplication::translate("FrmToolBar", "Paleta de cu\303\261as", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnCunas->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnLogEmision->setToolTip(QApplication::translate("FrmToolBar", "Indicadores y log de emisi\303\263n", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnAcerca->setToolTip(QApplication::translate("FrmToolBar", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#343434;\">Acerca de...</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnAcerca->setText(QApplication::translate("FrmToolBar", "Acerca de..", 0, QApplication::UnicodeUTF8));
        BtnSalir->setText(QApplication::translate("FrmToolBar", "Salir", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmToolBar: public Ui_FrmToolBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMTOOLBAR_H
