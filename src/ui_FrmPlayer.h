/********************************************************************************
** Form generated from reading UI file 'FrmPlayer.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMPLAYER_H
#define UI_FRMPLAYER_H

#include <Lista.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qvumeter.h"

QT_BEGIN_NAMESPACE

class Ui_FrmPlayer
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_Como;
    QAction *actionCortar;
    QAction *actionCopiar;
    QAction *actionRecent;
    QAction *actionSalir;
    QAction *actionPegar;
    QAction *actionBorrar;
    QAction *actionAddPista;
    QAction *actionAddStop;
    QAction *actionAddHora;
    QAction *actionAddTemperatura;
    QAction *actionAddHumedad;
    QAction *actionFichero;
    QAction *actionLista;
    QAction *actionPreferencias;
    QAction *actionActualizarSeleccion;
    QAction *actionActualizar_duraci_n;
    QAction *actionActualizar_todas_las_duraciones;
    QAction *actionAddPisadores;
    QAction *actionAddRadioInternet;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QComboBox *ComboModo;
    QVUMeter *Vumeter;
    QLabel *Label;
    QLabel *LSiguiente;
    QLabel *LTitulo;
    QSpacerItem *horizontalSpacer;
    QSlider *Slider;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_2;
    QPushButton *BtnPlay;
    QPushButton *BtnPause;
    QPushButton *BtnStop;
    QPushButton *BtnStopPlay;
    QPushButton *BtnAtras;
    QPushButton *BtnAlante;
    QPushButton *BtnParar;
    QPushButton *BtnPisador;
    QSpacerItem *horizontalSpacer_2;
    Lista *w_Lista;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuLista;
    QMenu *menuComandos;
    QMenu *menuHTH;
    QMenu *menuVer;
    QMenu *menuBarraHerramientas;
    QMenu *menuHerramientas;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar2;

    void setupUi(QMainWindow *FrmPlayer)
    {
        if (FrmPlayer->objectName().isEmpty())
            FrmPlayer->setObjectName(QString::fromUtf8("FrmPlayer"));
        FrmPlayer->resize(498, 811);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/player/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        FrmPlayer->setWindowIcon(icon);
        FrmPlayer->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        actionNuevo = new QAction(FrmPlayer);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/general/iconos/menu/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo->setIcon(icon1);
        actionAbrir = new QAction(FrmPlayer);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/general/iconos/menu/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon2);
        actionGuardar = new QAction(FrmPlayer);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/general/iconos/menu/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon3);
        actionGuardar_Como = new QAction(FrmPlayer);
        actionGuardar_Como->setObjectName(QString::fromUtf8("actionGuardar_Como"));
        actionCortar = new QAction(FrmPlayer);
        actionCortar->setObjectName(QString::fromUtf8("actionCortar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/general/iconos/menu/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCortar->setIcon(icon4);
        actionCopiar = new QAction(FrmPlayer);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/general/iconos/menu/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionRecent = new QAction(FrmPlayer);
        actionRecent->setObjectName(QString::fromUtf8("actionRecent"));
        actionSalir = new QAction(FrmPlayer);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionPegar = new QAction(FrmPlayer);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/general/iconos/menu/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon6);
        actionBorrar = new QAction(FrmPlayer);
        actionBorrar->setObjectName(QString::fromUtf8("actionBorrar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/general/iconos/menu/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBorrar->setIcon(icon7);
        actionAddPista = new QAction(FrmPlayer);
        actionAddPista->setObjectName(QString::fromUtf8("actionAddPista"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/general/iconos/menu/a\303\261adir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddPista->setIcon(icon8);
        actionAddStop = new QAction(FrmPlayer);
        actionAddStop->setObjectName(QString::fromUtf8("actionAddStop"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/general/iconos/player/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddStop->setIcon(icon9);
        actionAddHora = new QAction(FrmPlayer);
        actionAddHora->setObjectName(QString::fromUtf8("actionAddHora"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/general/iconos/menu/relog.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddHora->setIcon(icon10);
        actionAddTemperatura = new QAction(FrmPlayer);
        actionAddTemperatura->setObjectName(QString::fromUtf8("actionAddTemperatura"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/general/iconos/menu/sol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddTemperatura->setIcon(icon11);
        actionAddHumedad = new QAction(FrmPlayer);
        actionAddHumedad->setObjectName(QString::fromUtf8("actionAddHumedad"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/general/iconos/menu/nube.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddHumedad->setIcon(icon12);
        actionFichero = new QAction(FrmPlayer);
        actionFichero->setObjectName(QString::fromUtf8("actionFichero"));
        actionFichero->setCheckable(true);
        actionFichero->setChecked(true);
        actionLista = new QAction(FrmPlayer);
        actionLista->setObjectName(QString::fromUtf8("actionLista"));
        actionLista->setCheckable(true);
        actionLista->setChecked(true);
        actionPreferencias = new QAction(FrmPlayer);
        actionPreferencias->setObjectName(QString::fromUtf8("actionPreferencias"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/general/iconos/menu/preferencias.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferencias->setIcon(icon13);
        actionActualizarSeleccion = new QAction(FrmPlayer);
        actionActualizarSeleccion->setObjectName(QString::fromUtf8("actionActualizarSeleccion"));
        actionActualizar_duraci_n = new QAction(FrmPlayer);
        actionActualizar_duraci_n->setObjectName(QString::fromUtf8("actionActualizar_duraci_n"));
        actionActualizar_todas_las_duraciones = new QAction(FrmPlayer);
        actionActualizar_todas_las_duraciones->setObjectName(QString::fromUtf8("actionActualizar_todas_las_duraciones"));
        actionAddPisadores = new QAction(FrmPlayer);
        actionAddPisadores->setObjectName(QString::fromUtf8("actionAddPisadores"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/general/iconos/menu/voice.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddPisadores->setIcon(icon14);
        actionAddRadioInternet = new QAction(FrmPlayer);
        actionAddRadioInternet->setObjectName(QString::fromUtf8("actionAddRadioInternet"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/ficheros/iconos/ficheros/online.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddRadioInternet->setIcon(icon15);
        centralwidget = new QWidget(FrmPlayer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        verticalLayout->setContentsMargins(9, 9, 9, 9);
#endif
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setMinimumSize(QSize(284, 0));
        frame_2->setMaximumSize(QSize(297, 16777215));
        frame_2->setSizeIncrement(QSize(0, 0));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"\n"
"     border-radius:6px;\n"
"   border: 1px solid #000000;\n"
"\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(3);
        frame_2->setMidLineWidth(0);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 9, 9, 9);
        ComboModo = new QComboBox(frame_2);
        ComboModo->setObjectName(QString::fromUtf8("ComboModo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ComboModo->sizePolicy().hasHeightForWidth());
        ComboModo->setSizePolicy(sizePolicy2);
        ComboModo->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"     background-color: rgb(34, 34, 34);\n"
"    color: rgb(7, 250, 242);\n"
"	selection-color: rgb(7, 250, 242);\n"
"\n"
"   selection-background-color: rgb(34, 34, 34);\n"
"	\n"
" }\n"
"\n"
" QComboBox QAbstractItemView {\n"
"     \n"
"	background-color: rgb(34, 34, 34);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"	\n"
"	selection-color: rgb(255, 255, 255);\n"
"\n"
"	selection-background-color: #5d83bf;\n"
"\n"
" }"));

        gridLayout->addWidget(ComboModo, 0, 2, 1, 1);

        Vumeter = new QVUMeter(frame_2);
        Vumeter->setObjectName(QString::fromUtf8("Vumeter"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Vumeter->sizePolicy().hasHeightForWidth());
        Vumeter->setSizePolicy(sizePolicy3);
        Vumeter->setMinimumSize(QSize(0, 0));
        Vumeter->setMaximumSize(QSize(33, 100));
        Vumeter->setColorBg(QColor(121, 136, 177));
        Vumeter->setColorLow(QColor(55, 188, 177));
        Vumeter->setColorHigh(QColor(55, 188, 177));
        Vumeter->setLeftValue(0);
        Vumeter->setRightValue(0);
        Vumeter->setMinValue(0);
        Vumeter->setMaxValue(120);
        Vumeter->setProperty("dimValue", QVariant(9));

        gridLayout->addWidget(Vumeter, 0, 1, 4, 1);

        Label = new QLabel(frame_2);
        Label->setObjectName(QString::fromUtf8("Label"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Label->sizePolicy().hasHeightForWidth());
        Label->setSizePolicy(sizePolicy4);
        Label->setMinimumSize(QSize(100, 0));
        Label->setStyleSheet(QString::fromUtf8("color: rgb(7, 250, 242);\n"
"font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(32, 39, 47);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
""));
        Label->setFrameShape(QFrame::Box);
        Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Label, 1, 2, 1, 1);

        LSiguiente = new QLabel(frame_2);
        LSiguiente->setObjectName(QString::fromUtf8("LSiguiente"));
        sizePolicy1.setHeightForWidth(LSiguiente->sizePolicy().hasHeightForWidth());
        LSiguiente->setSizePolicy(sizePolicy1);
        LSiguiente->setMaximumSize(QSize(235, 16777215));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        LSiguiente->setFont(font);
        LSiguiente->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 128, 0);"));
        LSiguiente->setFrameShape(QFrame::Box);
        LSiguiente->setTextFormat(Qt::AutoText);
        LSiguiente->setScaledContents(true);
        LSiguiente->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        LSiguiente->setWordWrap(false);
        LSiguiente->setMargin(0);
        LSiguiente->setIndent(0);

        gridLayout->addWidget(LSiguiente, 3, 2, 1, 1);

        LTitulo = new QLabel(frame_2);
        LTitulo->setObjectName(QString::fromUtf8("LTitulo"));
        LTitulo->setMaximumSize(QSize(235, 16777215));
        LTitulo->setFont(font);
        LTitulo->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 0);"));
        LTitulo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(LTitulo, 2, 2, 1, 1);


        horizontalLayout->addWidget(frame_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        Slider = new QSlider(centralwidget);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(Slider->sizePolicy().hasHeightForWidth());
        Slider->setSizePolicy(sizePolicy5);
        Slider->setStyleSheet(QString::fromUtf8(" QSlider::groove:horizontal {\n"
"     border: 1px solid #999999;\n"
"     height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background-color: qlineargradient(spread:pad, x1:0.98, y1:0.642, x2:1, y2:0.0113636, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(187, 221, 255, 255));\n"
"   \n"
"     margin: 2px 0;\n"
" }\n"
"\n"
" QSlider::handle:horizontal {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #5aa3fd, stop: 1 #1f406a);\n"
"     border: 1px solid #5c5c5c;\n"
"     width: 18px;\n"
"     margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"     border-radius: 3px;\n"
" }\n"
""));
        Slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(Slider);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy6);
        frame_3->setBaseSize(QSize(0, 0));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(1);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        BtnPlay = new QPushButton(frame_3);
        BtnPlay->setObjectName(QString::fromUtf8("BtnPlay"));
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(BtnPlay->sizePolicy().hasHeightForWidth());
        BtnPlay->setSizePolicy(sizePolicy7);
        BtnPlay->setCursor(QCursor(Qt::PointingHandCursor));
        BtnPlay->setAutoFillBackground(false);
        BtnPlay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"    "));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/general/iconos/player/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPlay->setIcon(icon16);
        BtnPlay->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnPlay, 1, 1, 1, 1);

        BtnPause = new QPushButton(frame_3);
        BtnPause->setObjectName(QString::fromUtf8("BtnPause"));
        sizePolicy7.setHeightForWidth(BtnPause->sizePolicy().hasHeightForWidth());
        BtnPause->setSizePolicy(sizePolicy7);
        BtnPause->setCursor(QCursor(Qt::PointingHandCursor));
        BtnPause->setAutoFillBackground(false);
        BtnPause->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"    "));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/general/iconos/player/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPause->setIcon(icon17);
        BtnPause->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnPause, 1, 2, 1, 1);

        BtnStop = new QPushButton(frame_3);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        sizePolicy7.setHeightForWidth(BtnStop->sizePolicy().hasHeightForWidth());
        BtnStop->setSizePolicy(sizePolicy7);
        BtnStop->setCursor(QCursor(Qt::PointingHandCursor));
        BtnStop->setAutoFillBackground(false);
        BtnStop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
" }"));
        BtnStop->setIcon(icon9);
        BtnStop->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnStop, 1, 3, 1, 1);

        BtnStopPlay = new QPushButton(frame_3);
        BtnStopPlay->setObjectName(QString::fromUtf8("BtnStopPlay"));
        sizePolicy7.setHeightForWidth(BtnStopPlay->sizePolicy().hasHeightForWidth());
        BtnStopPlay->setSizePolicy(sizePolicy7);
        BtnStopPlay->setCursor(QCursor(Qt::PointingHandCursor));
        BtnStopPlay->setAutoFillBackground(false);
        BtnStopPlay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"\n"
"    "));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/general/iconos/player/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStopPlay->setIcon(icon18);
        BtnStopPlay->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnStopPlay, 1, 4, 1, 1);

        BtnAtras = new QPushButton(frame_3);
        BtnAtras->setObjectName(QString::fromUtf8("BtnAtras"));
        sizePolicy7.setHeightForWidth(BtnAtras->sizePolicy().hasHeightForWidth());
        BtnAtras->setSizePolicy(sizePolicy7);
        BtnAtras->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAtras->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
" }"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/general/iconos/player/retroceso.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAtras->setIcon(icon19);
        BtnAtras->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnAtras, 2, 1, 1, 1);

        BtnAlante = new QPushButton(frame_3);
        BtnAlante->setObjectName(QString::fromUtf8("BtnAlante"));
        sizePolicy7.setHeightForWidth(BtnAlante->sizePolicy().hasHeightForWidth());
        BtnAlante->setSizePolicy(sizePolicy7);
        BtnAlante->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAlante->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
" }"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/general/iconos/player/avance.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAlante->setIcon(icon20);
        BtnAlante->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnAlante, 2, 2, 1, 1);

        BtnParar = new QPushButton(frame_3);
        BtnParar->setObjectName(QString::fromUtf8("BtnParar"));
        sizePolicy7.setHeightForWidth(BtnParar->sizePolicy().hasHeightForWidth());
        BtnParar->setSizePolicy(sizePolicy7);
        BtnParar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnParar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/general/iconos/player/parar.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnParar->setIcon(icon21);
        BtnParar->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnParar, 2, 3, 1, 1);

        BtnPisador = new QPushButton(frame_3);
        BtnPisador->setObjectName(QString::fromUtf8("BtnPisador"));
        sizePolicy7.setHeightForWidth(BtnPisador->sizePolicy().hasHeightForWidth());
        BtnPisador->setSizePolicy(sizePolicy7);
        BtnPisador->setCursor(QCursor(Qt::PointingHandCursor));
        BtnPisador->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
" }"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/general/iconos/player/pisador.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPisador->setIcon(icon22);
        BtnPisador->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnPisador, 2, 4, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_3);

        w_Lista = new Lista(centralwidget);
        if (w_Lista->columnCount() < 8)
            w_Lista->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        w_Lista->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignRight|Qt::AlignVCenter);
        w_Lista->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        w_Lista->setObjectName(QString::fromUtf8("w_Lista"));
        QSizePolicy sizePolicy8(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(7);
        sizePolicy8.setHeightForWidth(w_Lista->sizePolicy().hasHeightForWidth());
        w_Lista->setSizePolicy(sizePolicy8);
        w_Lista->setStyleSheet(QString::fromUtf8("QTableView {\n"
"background-color: rgb(32, 39, 47);\n"
"\n"
"	\n"
"	color: rgb(7, 250, 242);\n"
"	\n"
"	gridline-color: rgb(117, 125, 164);\n"
"\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"spacing: 10px;\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #5aa3fd, stop: 1 #1f406a);\n"
"color: white;\n"
"border: 1px solid black;\n"
"margin: 1px;\n"
"text-align: right;\n"
"font-family: arial;\n"
"font-size:12px;\n"
"}\n"
""));
        w_Lista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        w_Lista->setSelectionMode(QAbstractItemView::ContiguousSelection);
        w_Lista->setSelectionBehavior(QAbstractItemView::SelectRows);
        w_Lista->verticalHeader()->setVisible(false);
        w_Lista->verticalHeader()->setDefaultSectionSize(16);
        w_Lista->verticalHeader()->setMinimumSectionSize(16);

        verticalLayout->addWidget(w_Lista);

        FrmPlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FrmPlayer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 498, 18));
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"  \n"
"	background-color: rgb(34, 34, 34);\n"
"	color: rgb(255, 255, 255);\n"
" }\n"
"\n"
" QMenuBar::item {\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"     padding: 1px 4px;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
" }\n"
"\n"
" QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"     background: #5d83bf;\n"
" }\n"
"\n"
" QMenuBar::item:pressed {\n"
"     background: #5d83bf;\n"
" }\n"
"Customiz"));
        menubar->setNativeMenuBar(true);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setStyleSheet(QString::fromUtf8("\n"
" QMenu {\n"
"  background-color: rgb(34, 34, 34);\n"
"color: rgb(255, 255, 255);\n"
"     border: 1px solid black;\n"
" }\n"
"\n"
" QMenu::item {\n"
"  \n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QMenu::item:selected { \n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }\n"
"\n"
"este"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuEdit->setStyleSheet(QString::fromUtf8("\n"
" QMenu {\n"
"  background-color: rgb(34, 34, 34);\n"
"color: rgb(255, 255, 255);\n"
"     border: 1px solid black;\n"
" }\n"
"\n"
" QMenu::item {\n"
"     /* sets background of menu item. set this to something non-transparent\n"
"         if you want menu color and menu item color to be different */\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QMenu::item:selected { /* when user selects item using mouse or keyboard */\n"
"   /*  background-color: #654321;*/\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }\n"
"For a mor\n"
" "));
        menuLista = new QMenu(menubar);
        menuLista->setObjectName(QString::fromUtf8("menuLista"));
        menuLista->setStyleSheet(QString::fromUtf8("\n"
" QMenu {\n"
"  background-color: rgb(34, 34, 34);\n"
"color: rgb(255, 255, 255);\n"
"     border: 1px solid black;\n"
" }\n"
"\n"
" QMenu::item {\n"
"     /* sets background of menu item. set this to something non-transparent\n"
"         if you want menu color and menu item color to be different */\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QMenu::item:selected { /* when user selects item using mouse or keyboard */\n"
"   /*  background-color: #654321;*/\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }\n"
"\n"
" "));
        menuComandos = new QMenu(menuLista);
        menuComandos->setObjectName(QString::fromUtf8("menuComandos"));
        menuHTH = new QMenu(menuLista);
        menuHTH->setObjectName(QString::fromUtf8("menuHTH"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/newPrefix/iconos/menu/hth.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuHTH->setIcon(icon23);
        menuVer = new QMenu(menubar);
        menuVer->setObjectName(QString::fromUtf8("menuVer"));
        menuVer->setStyleSheet(QString::fromUtf8("\n"
" QMenu {\n"
"  background-color: rgb(34, 34, 34);\n"
"color: rgb(255, 255, 255);\n"
"     border: 1px solid black;\n"
" }\n"
"\n"
" QMenu::item {\n"
"     /* sets background of menu item. set this to something non-transparent\n"
"         if you want menu color and menu item color to be different */\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QMenu::item:selected { /* when user selects item using mouse or keyboard */\n"
"   /*  background-color: #654321;*/\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }\n"
"For a mor\n"
" "));
        menuBarraHerramientas = new QMenu(menuVer);
        menuBarraHerramientas->setObjectName(QString::fromUtf8("menuBarraHerramientas"));
        menuHerramientas = new QMenu(menubar);
        menuHerramientas->setObjectName(QString::fromUtf8("menuHerramientas"));
        menuHerramientas->setStyleSheet(QString::fromUtf8("\n"
" QMenu {\n"
"  background-color: rgb(34, 34, 34);\n"
"color: rgb(255, 255, 255);\n"
"     border: 1px solid black;\n"
" }\n"
"\n"
" QMenu::item {\n"
"     /* sets background of menu item. set this to something non-transparent\n"
"         if you want menu color and menu item color to be different */\n"
"     background-color: transparent;\n"
" }\n"
"\n"
" QMenu::item:selected { /* when user selects item using mouse or keyboard */\n"
"   /*  background-color: #654321;*/\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }\n"
"For a mor\n"
" "));
        FrmPlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(FrmPlayer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        FrmPlayer->setStatusBar(statusbar);
        toolBar = new QToolBar(FrmPlayer);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::CustomContextMenu);
        toolBar->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QToolBar {\n"
"      background-color: rgb(32, 39, 47);\n"
"\n"
"      \n"
"     }\n"
"\n"
"\n"
"QToolButton { /* all types of tool button */\n"
"     background-color: rgb(32, 39, 47);\n"
"\n"
"     }\n"
"\n"
"QToolButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }\n"
"\n"
" "));
        toolBar->setFloatable(false);
        FrmPlayer->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar2 = new QToolBar(FrmPlayer);
        toolBar2->setObjectName(QString::fromUtf8("toolBar2"));
        toolBar2->setContextMenuPolicy(Qt::CustomContextMenu);
        toolBar2->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QToolBar {\n"
"      background-color: rgb(32, 39, 47);\n"
"\n"
"      \n"
"     }\n"
"\n"
"\n"
"QToolButton { /* all types of tool button */\n"
"     background-color: rgb(32, 39, 47);\n"
"\n"
"     }\n"
"\n"
"QToolButton:hover {\n"
"  background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(129, 166, 226, 255), stop:1 rgba(93, 131, 190, 255));\n"
" }"));
        toolBar2->setFloatable(false);
        FrmPlayer->addToolBar(Qt::TopToolBarArea, toolBar2);
        FrmPlayer->insertToolBarBreak(toolBar2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuVer->menuAction());
        menubar->addAction(menuLista->menuAction());
        menubar->addAction(menuHerramientas->menuAction());
        menuFile->addAction(actionNuevo);
        menuFile->addAction(actionAbrir);
        menuFile->addAction(actionGuardar);
        menuFile->addAction(actionGuardar_Como);
        menuFile->addSeparator();
        menuFile->addAction(actionRecent);
        menuEdit->addAction(actionCortar);
        menuEdit->addAction(actionCopiar);
        menuEdit->addAction(actionPegar);
        menuEdit->addAction(actionBorrar);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAddPisadores);
        menuLista->addAction(actionAddPista);
        menuLista->addAction(menuComandos->menuAction());
        menuLista->addAction(menuHTH->menuAction());
        menuLista->addAction(actionAddRadioInternet);
        menuLista->addSeparator();
        menuLista->addAction(actionActualizarSeleccion);
        menuLista->addAction(actionActualizar_duraci_n);
        menuLista->addAction(actionActualizar_todas_las_duraciones);
        menuComandos->addAction(actionAddStop);
        menuHTH->addAction(actionAddHora);
        menuHTH->addAction(actionAddTemperatura);
        menuHTH->addAction(actionAddHumedad);
        menuVer->addAction(menuBarraHerramientas->menuAction());
        menuBarraHerramientas->addAction(actionFichero);
        menuBarraHerramientas->addAction(actionLista);
        menuHerramientas->addAction(actionPreferencias);
        toolBar->addAction(actionNuevo);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionGuardar);
        toolBar->addSeparator();
        toolBar->addAction(actionBorrar);
        toolBar->addAction(actionCortar);
        toolBar->addAction(actionCopiar);
        toolBar->addAction(actionPegar);
        toolBar->addAction(actionAddPisadores);
        toolBar2->addAction(actionAddPista);
        toolBar2->addAction(actionAddHora);
        toolBar2->addAction(actionAddTemperatura);
        toolBar2->addAction(actionAddHumedad);

        retranslateUi(FrmPlayer);

        QMetaObject::connectSlotsByName(FrmPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *FrmPlayer)
    {
        FrmPlayer->setWindowTitle(QApplication::translate("FrmPlayer", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNuevo->setText(QApplication::translate("FrmPlayer", "Nuevo", 0, QApplication::UnicodeUTF8));
        actionNuevo->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionAbrir->setText(QApplication::translate("FrmPlayer", "Abrir", 0, QApplication::UnicodeUTF8));
        actionAbrir->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionGuardar->setText(QApplication::translate("FrmPlayer", "Guardar", 0, QApplication::UnicodeUTF8));
        actionGuardar->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionGuardar_Como->setText(QApplication::translate("FrmPlayer", "Guardar Como...", 0, QApplication::UnicodeUTF8));
        actionCortar->setText(QApplication::translate("FrmPlayer", "Cortar", 0, QApplication::UnicodeUTF8));
        actionCortar->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopiar->setText(QApplication::translate("FrmPlayer", "Copiar", 0, QApplication::UnicodeUTF8));
        actionCopiar->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionRecent->setText(QApplication::translate("FrmPlayer", "Recent", 0, QApplication::UnicodeUTF8));
        actionSalir->setText(QApplication::translate("FrmPlayer", "Salir", 0, QApplication::UnicodeUTF8));
        actionPegar->setText(QApplication::translate("FrmPlayer", "Pegar", 0, QApplication::UnicodeUTF8));
        actionPegar->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionBorrar->setText(QApplication::translate("FrmPlayer", "Borrar", 0, QApplication::UnicodeUTF8));
        actionBorrar->setShortcut(QApplication::translate("FrmPlayer", "Del", 0, QApplication::UnicodeUTF8));
        actionAddPista->setText(QApplication::translate("FrmPlayer", "A\303\261adir pista...", 0, QApplication::UnicodeUTF8));
        actionAddPista->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionAddStop->setText(QApplication::translate("FrmPlayer", "A\303\261adir comando stop", 0, QApplication::UnicodeUTF8));
        actionAddHora->setText(QApplication::translate("FrmPlayer", "A\303\261adir locuci\303\263n de hora", 0, QApplication::UnicodeUTF8));
        actionAddHora->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionAddTemperatura->setText(QApplication::translate("FrmPlayer", "A\303\261adir locuci\303\263n de temperatura", 0, QApplication::UnicodeUTF8));
        actionAddHumedad->setText(QApplication::translate("FrmPlayer", "A\303\261adir locuci\303\263n humedad", 0, QApplication::UnicodeUTF8));
        actionFichero->setText(QApplication::translate("FrmPlayer", "Fichero", 0, QApplication::UnicodeUTF8));
        actionLista->setText(QApplication::translate("FrmPlayer", "Lista", 0, QApplication::UnicodeUTF8));
        actionPreferencias->setText(QApplication::translate("FrmPlayer", "Preferencias", 0, QApplication::UnicodeUTF8));
        actionActualizarSeleccion->setText(QApplication::translate("FrmPlayer", "Ver la duraci\303\263n de la selecci\303\263n...", 0, QApplication::UnicodeUTF8));
        actionActualizarSeleccion->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionActualizar_duraci_n->setText(QApplication::translate("FrmPlayer", "Actualizar duraci\303\263n ", 0, QApplication::UnicodeUTF8));
        actionActualizar_duraci_n->setShortcut(QApplication::translate("FrmPlayer", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionActualizar_todas_las_duraciones->setText(QApplication::translate("FrmPlayer", "Actualizar todas las duraciones", 0, QApplication::UnicodeUTF8));
        actionAddPisadores->setText(QApplication::translate("FrmPlayer", "A\303\261adir Pisadores", 0, QApplication::UnicodeUTF8));
        actionAddRadioInternet->setText(QApplication::translate("FrmPlayer", "A\303\261adir radio de internet...", 0, QApplication::UnicodeUTF8));
        ComboModo->clear();
        ComboModo->insertItems(0, QStringList()
         << QApplication::translate("FrmPlayer", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmPlayer", "Manual", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        Vumeter->setWhatsThis(QApplication::translate("FrmPlayer", "VU Meter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        Label->setText(QApplication::translate("FrmPlayer", "00:00:00:0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtnPlay->setToolTip(QApplication::translate("FrmPlayer", "Play", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnPlay->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnPause->setToolTip(QApplication::translate("FrmPlayer", "Pause", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnPause->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnStop->setToolTip(QApplication::translate("FrmPlayer", "Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnStop->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnStopPlay->setToolTip(QApplication::translate("FrmPlayer", "Siguiente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtnStopPlay->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnAtras->setToolTip(QApplication::translate("FrmPlayer", "Rewind", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnAlante->setToolTip(QApplication::translate("FrmPlayer", "Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnParar->setToolTip(QApplication::translate("FrmPlayer", "Stop tras finalizar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnPisador->setToolTip(QApplication::translate("FrmPlayer", "Pisador", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = w_Lista->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("FrmPlayer", "T\303\255tulo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = w_Lista->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("FrmPlayer", "Duraci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = w_Lista->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("FrmPlayer", "Segundos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = w_Lista->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("FrmPlayer", "url", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = w_Lista->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("FrmPlayer", "PTiempo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = w_Lista->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("FrmPlayer", "PInUrl", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = w_Lista->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("FrmPlayer", "POutUrl", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("FrmPlayer", "&Fichero", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("FrmPlayer", "&Editar", 0, QApplication::UnicodeUTF8));
        menuLista->setTitle(QApplication::translate("FrmPlayer", "Lista", 0, QApplication::UnicodeUTF8));
        menuComandos->setTitle(QApplication::translate("FrmPlayer", "Comandos", 0, QApplication::UnicodeUTF8));
        menuHTH->setTitle(QApplication::translate("FrmPlayer", "HTH", 0, QApplication::UnicodeUTF8));
        menuVer->setTitle(QApplication::translate("FrmPlayer", "Ver", 0, QApplication::UnicodeUTF8));
        menuBarraHerramientas->setTitle(QApplication::translate("FrmPlayer", "Barra de herramientas", 0, QApplication::UnicodeUTF8));
        menuHerramientas->setTitle(QApplication::translate("FrmPlayer", "Herramientas", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmPlayer: public Ui_FrmPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMPLAYER_H
