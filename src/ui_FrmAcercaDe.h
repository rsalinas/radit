/********************************************************************************
** Form generated from reading UI file 'FrmAcercaDe.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMACERCADE_H
#define UI_FRMACERCADE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_FrmAcercaDe
{
public:
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QPushButton *BtnCerrar;

    void setupUi(QDialog *FrmAcercaDe)
    {
        if (FrmAcercaDe->objectName().isEmpty())
            FrmAcercaDe->setObjectName(QString::fromUtf8("FrmAcercaDe"));
        FrmAcercaDe->resize(340, 500);
        FrmAcercaDe->setStyleSheet(QString::fromUtf8("  background-color: rgb(32, 39, 47);"));
        label = new QLabel(FrmAcercaDe);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 41, 31));
        label->setStyleSheet(QString::fromUtf8("image: url(:/general/iconos/cubo copy.png);"));
        label_2 = new QLabel(FrmAcercaDe);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 20, 261, 41));
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 0);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textBrowser = new QTextBrowser(FrmAcercaDe);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 60, 338, 396));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(46, 187, 247);\n"
"background-color: rgb(0, 0, 0);"));
        textBrowser->setOpenExternalLinks(true);
        BtnCerrar = new QPushButton(FrmAcercaDe);
        BtnCerrar->setObjectName(QString::fromUtf8("BtnCerrar"));
        BtnCerrar->setGeometry(QRect(250, 470, 75, 23));
        BtnCerrar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnCerrar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(FrmAcercaDe);
        QObject::connect(BtnCerrar, SIGNAL(clicked()), FrmAcercaDe, SLOT(close()));

        QMetaObject::connectSlotsByName(FrmAcercaDe);
    } // setupUi

    void retranslateUi(QDialog *FrmAcercaDe)
    {
        FrmAcercaDe->setWindowTitle(QApplication::translate("FrmAcercaDe", "Acerca de...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmAcercaDe", " Radit ver. 1.0.4 beta", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("FrmAcercaDe", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Copyright (C) 2010 Victor Algaba </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Este programa es software libre: usted puede redistribuirlo y/o modificarlo bajo los t\303\251rminos de la Licencia P\303\272blica General GNU publicada por la Fundaci\303\263n para el Software Libre, ya sea la versi\303\263n 3 de la Licencia, o (a su elecci\303\263n) cualquier versi\303\263n posterior. "
                        "Este programa se distribuye con la esperanza de que sea \303\272til, pero SIN GARANT\303\215A ALGUNA; ni siquiera la garant\303\255a impl\303\255cita MERCANTIL o de APTITUD PARA UN PROP\303\223SITO DETERMINADO. Consulte los detalles de la Licencia P\303\272blica General GNU para obtener una informaci\303\263n m\303\241s detallada. Deber\303\255a haber recibido una copia de la Licencia P\303\272blica General GNU junto a este programa. En caso contrario, consulte </span><a href=\"http://www.gnu.org/licenses/\"><span style=\" font-size:8pt; text-decoration: underline; color:#f0f0f0;\">http://www.gnu.org/licenses</span></a><span style=\" font-size:8pt; color:#f0f0f0;\">.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">EL PROGRAMA NO TIENE GARANT\303\215A ALGUNA, HASTA LOS L\303\215MITES PERMITIDOS POR LAS LEYES APLICABLES. SALVO CUANDO SE ESTABLEZCA LO CONTRARIO POR ESCRITO, EL POSEEDOR DEL COP"
                        "YRIGHT Y/O TERCEROS PROPORCIONAR\303\201N EL PROGRAMA &quot;TAL CUAL&quot; SIN GARANT\303\215A DE NING\303\232N TIPO, YA SEA EXPL\303\215CITA O IMPL\303\215CITA, INCLUYENDO, PERO SIN LIMITARSE A, LAS GARANT\303\215AS IMPL\303\215CITAS MERCANTILES Y DE APTITUD PARA UN PROP\303\223SITO DETERMINADO. USTED ASUMIR\303\201 CUALQUIER RIESGO RELATIVO A LA CALIDAD Y RENDIMIENTO DEL PROGRAMA. SI EL PROGRAMA FUESE DEFECTUOSO, USTED ASUMIR\303\201 CUALQUIER COSTE DE SERVICIO, REPARACI\303\223N O CORRECCI\303\223N. </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.radit.org\"><span style=\" font-size:8pt; text-decoration: underline; color:#ffffff;\">www.radit.org</span></a><span style=\" font-size:8pt; color:#ffffff;\"> </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        BtnCerrar->setText(QApplication::translate("FrmAcercaDe", "Cerrar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmAcercaDe: public Ui_FrmAcercaDe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMACERCADE_H
