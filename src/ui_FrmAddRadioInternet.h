/********************************************************************************
** Form generated from reading UI file 'FrmAddRadioInternet.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMADDRADIOINTERNET_H
#define UI_FRMADDRADIOINTERNET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmAddRadioInternet
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *BtnPlay;
    QPushButton *BtnStop;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnAceptar;
    QPushButton *BtnCancelar;
    QFrame *frame;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *EditNombre;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTimeEdit *TimeDuracion;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *EditUrl;

    void setupUi(QDialog *FrmAddRadioInternet)
    {
        if (FrmAddRadioInternet->objectName().isEmpty())
            FrmAddRadioInternet->setObjectName(QString::fromUtf8("FrmAddRadioInternet"));
        FrmAddRadioInternet->resize(360, 146);
        FrmAddRadioInternet->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(FrmAddRadioInternet);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(53, 100, 301, 36));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        BtnPlay = new QPushButton(layoutWidget);
        BtnPlay->setObjectName(QString::fromUtf8("BtnPlay"));
        BtnPlay->setCursor(QCursor(Qt::PointingHandCursor));
        BtnPlay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color: rgb(32, 39, 47);\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/player/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPlay->setIcon(icon);
        BtnPlay->setIconSize(QSize(24, 24));

        horizontalLayout_5->addWidget(BtnPlay);

        BtnStop = new QPushButton(layoutWidget);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        BtnStop->setCursor(QCursor(Qt::PointingHandCursor));
        BtnStop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"  background-color: rgb(32, 39, 47);\n"
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
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/general/iconos/player/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon1);
        BtnStop->setIconSize(QSize(24, 24));

        horizontalLayout_5->addWidget(BtnStop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        BtnAceptar = new QPushButton(layoutWidget);
        BtnAceptar->setObjectName(QString::fromUtf8("BtnAceptar"));
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

        horizontalLayout_4->addWidget(BtnAceptar);

        BtnCancelar = new QPushButton(layoutWidget);
        BtnCancelar->setObjectName(QString::fromUtf8("BtnCancelar"));
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

        horizontalLayout_4->addWidget(BtnCancelar);

        frame = new QFrame(FrmAddRadioInternet);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 100, 31, 31));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/ficheros/iconos/ficheros/online.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(FrmAddRadioInternet);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 341, 74));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));

        horizontalLayout_3->addWidget(label_3);

        EditNombre = new QLineEdit(widget);
        EditNombre->setObjectName(QString::fromUtf8("EditNombre"));
        EditNombre->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_3->addWidget(EditNombre);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));

        horizontalLayout->addWidget(label);

        TimeDuracion = new QTimeEdit(widget);
        TimeDuracion->setObjectName(QString::fromUtf8("TimeDuracion"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TimeDuracion->sizePolicy().hasHeightForWidth());
        TimeDuracion->setSizePolicy(sizePolicy1);
        TimeDuracion->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        TimeDuracion->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(TimeDuracion);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));

        horizontalLayout_2->addWidget(label_2);

        EditUrl = new QLineEdit(widget);
        EditUrl->setObjectName(QString::fromUtf8("EditUrl"));
        EditUrl->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(EditUrl);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FrmAddRadioInternet);

        QMetaObject::connectSlotsByName(FrmAddRadioInternet);
    } // setupUi

    void retranslateUi(QDialog *FrmAddRadioInternet)
    {
        FrmAddRadioInternet->setWindowTitle(QApplication::translate("FrmAddRadioInternet", "Radio en Internet", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtnPlay->setToolTip(QApplication::translate("FrmAddRadioInternet", "Cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStop->setToolTip(QApplication::translate("FrmAddRadioInternet", "Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnAceptar->setText(QApplication::translate("FrmAddRadioInternet", "Aceptar", 0, QApplication::UnicodeUTF8));
        BtnCancelar->setText(QApplication::translate("FrmAddRadioInternet", "Cancelar", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrmAddRadioInternet", "Nombre de la estaci\303\263n", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrmAddRadioInternet", "Introduzca la duraci\303\263n de la conexi\303\263n:", 0, QApplication::UnicodeUTF8));
        TimeDuracion->setDisplayFormat(QApplication::translate("FrmAddRadioInternet", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmAddRadioInternet", "Inserte la URL:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmAddRadioInternet: public Ui_FrmAddRadioInternet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMADDRADIOINTERNET_H
