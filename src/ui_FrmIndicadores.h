/********************************************************************************
** Form generated from reading UI file 'FrmIndicadores.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMINDICADORES_H
#define UI_FRMINDICADORES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FrmIndicadores
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *TOnAir;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTextEdit *TSiguiente;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton;
    QTextEdit *TLog;

    void setupUi(QDialog *FrmIndicadores)
    {
        if (FrmIndicadores->objectName().isEmpty())
            FrmIndicadores->setObjectName(QString::fromUtf8("FrmIndicadores"));
        FrmIndicadores->resize(450, 545);
        FrmIndicadores->setMinimumSize(QSize(300, 0));
        FrmIndicadores->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout_4 = new QVBoxLayout(FrmIndicadores);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame = new QFrame(FrmIndicadores);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"\n"
"     border-radius:6px;\n"
"   border: 1px solid #000000;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(249, 10, 14, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(label);

        TOnAir = new QTextEdit(frame);
        TOnAir->setObjectName(QString::fromUtf8("TOnAir"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TOnAir->sizePolicy().hasHeightForWidth());
        TOnAir->setSizePolicy(sizePolicy1);
        TOnAir->setMaximumSize(QSize(16777215, 50));
        TOnAir->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        TOnAir->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        TOnAir->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(TOnAir);


        verticalLayout_4->addWidget(frame);

        frame_2 = new QFrame(FrmIndicadores);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"\n"
"     border-radius:6px;\n"
"   border: 1px solid #000000;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(4, 126, 25, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout_2->addWidget(label_2);

        TSiguiente = new QTextEdit(frame_2);
        TSiguiente->setObjectName(QString::fromUtf8("TSiguiente"));
        sizePolicy1.setHeightForWidth(TSiguiente->sizePolicy().hasHeightForWidth());
        TSiguiente->setSizePolicy(sizePolicy1);
        TSiguiente->setMaximumSize(QSize(16777215, 50));
        TSiguiente->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        TSiguiente->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        TSiguiente->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_2->addWidget(TSiguiente);


        verticalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(FrmIndicadores);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"\n"
"     border-radius:6px;\n"
"   border: 1px solid #000000;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(2, 52, 126, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_3);

        pushButton = new QPushButton(frame_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border: 1px solid #000000;\n"
"     border-radius:4px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     min-width: 30px;\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
" }\n"
"\n"
"\n"
"QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }\n"
"    "));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/player/purge.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 18));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        TLog = new QTextEdit(frame_3);
        TLog->setObjectName(QString::fromUtf8("TLog"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(TLog->sizePolicy().hasHeightForWidth());
        TLog->setSizePolicy(sizePolicy4);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        TLog->setFont(font);
        TLog->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        TLog->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        TLog->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_3->addWidget(TLog);


        verticalLayout_4->addWidget(frame_3);


        retranslateUi(FrmIndicadores);
        QObject::connect(pushButton, SIGNAL(clicked()), TLog, SLOT(clear()));

        QMetaObject::connectSlotsByName(FrmIndicadores);
    } // setupUi

    void retranslateUi(QDialog *FrmIndicadores)
    {
        FrmIndicadores->setWindowTitle(QApplication::translate("FrmIndicadores", "Indicadores", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrmIndicadores", "On Air", 0, QApplication::UnicodeUTF8));
        TOnAir->setHtml(QApplication::translate("FrmIndicadores", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmIndicadores", "Siguiente", 0, QApplication::UnicodeUTF8));
        TSiguiente->setHtml(QApplication::translate("FrmIndicadores", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:14pt; font-weight:72; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrmIndicadores", "Log de Emisi\303\263n", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("FrmIndicadores", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#7bf409;\">Borrar Historial</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TLog->setHtml(QApplication::translate("FrmIndicadores", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:72;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmIndicadores: public Ui_FrmIndicadores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMINDICADORES_H
