/********************************************************************************
** Form generated from reading UI file 'FrmEventos.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMEVENTOS_H
#define UI_FRMEVENTOS_H

#include <ListaEventos.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmEventos
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *LFecha;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnHora;
    QLabel *LHora;
    QPushButton *BtnTemp;
    QLabel *LTemperatura;
    QPushButton *BtnHume;
    QLabel *LHumedad;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QPushButton *BtnActualizar;
    QPushButton *BtnStart;
    QPushButton *BtnEventos;
    QSpacerItem *horizontalSpacer;
    QLabel *LAviso;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    ListaEventos *w_Lista;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *LUrl;
    QTreeView *TExplore;

    void setupUi(QMainWindow *FrmEventos)
    {
        if (FrmEventos->objectName().isEmpty())
            FrmEventos->setObjectName(QString::fromUtf8("FrmEventos"));
        FrmEventos->resize(450, 892);
        FrmEventos->setMinimumSize(QSize(400, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/player/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        FrmEventos->setWindowIcon(icon);
        FrmEventos->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        centralwidget = new QWidget(FrmEventos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setSizeIncrement(QSize(0, 0));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"\n"
"     border-radius:6px;\n"
"   border: 1px solid #000000;"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(3);
        frame_2->setMidLineWidth(0);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        LFecha = new QLabel(frame_2);
        LFecha->setObjectName(QString::fromUtf8("LFecha"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LFecha->sizePolicy().hasHeightForWidth());
        LFecha->setSizePolicy(sizePolicy1);
        LFecha->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        LFecha->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(LFecha);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BtnHora = new QPushButton(frame_2);
        BtnHora->setObjectName(QString::fromUtf8("BtnHora"));
        BtnHora->setCursor(QCursor(Qt::PointingHandCursor));
        BtnHora->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-color: rgb(255, 255, 255);\n"
"     border-radius:4px;\n"
"     background-color: rgb(92, 135, 206);\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/general/iconos/menu/relog.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnHora->setIcon(icon1);
        BtnHora->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(BtnHora);

        LHora = new QLabel(frame_2);
        LHora->setObjectName(QString::fromUtf8("LHora"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(LHora->sizePolicy().hasHeightForWidth());
        LHora->setSizePolicy(sizePolicy2);
        LHora->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"border-color: rgb(255, 255, 255);\n"
"  border-radius:4px;"));
        LHora->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(LHora);

        BtnTemp = new QPushButton(frame_2);
        BtnTemp->setObjectName(QString::fromUtf8("BtnTemp"));
        BtnTemp->setCursor(QCursor(Qt::PointingHandCursor));
        BtnTemp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-color: rgb(255, 255, 255);\n"
"     border-radius:4px;\n"
"     background-color: rgb(92, 135, 206);\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/general/iconos/menu/sol.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnTemp->setIcon(icon2);
        BtnTemp->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(BtnTemp);

        LTemperatura = new QLabel(frame_2);
        LTemperatura->setObjectName(QString::fromUtf8("LTemperatura"));
        sizePolicy2.setHeightForWidth(LTemperatura->sizePolicy().hasHeightForWidth());
        LTemperatura->setSizePolicy(sizePolicy2);
        LTemperatura->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"border-color: rgb(255, 255, 255);\n"
"  border-radius:4px;"));
        LTemperatura->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(LTemperatura);

        BtnHume = new QPushButton(frame_2);
        BtnHume->setObjectName(QString::fromUtf8("BtnHume"));
        BtnHume->setCursor(QCursor(Qt::PointingHandCursor));
        BtnHume->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-color: rgb(255, 255, 255);\n"
"     border-radius:4px;\n"
"     background-color: rgb(92, 135, 206);\n"
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/general/iconos/menu/nube.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnHume->setIcon(icon3);
        BtnHume->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(BtnHume);

        LHumedad = new QLabel(frame_2);
        LHumedad->setObjectName(QString::fromUtf8("LHumedad"));
        sizePolicy2.setHeightForWidth(LHumedad->sizePolicy().hasHeightForWidth());
        LHumedad->setSizePolicy(sizePolicy2);
        LHumedad->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"border-color: rgb(255, 255, 255);\n"
"  border-radius:4px;"));
        LHumedad->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(LHumedad);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(frame_2);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setBaseSize(QSize(0, 0));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(1);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        BtnActualizar = new QPushButton(frame_3);
        BtnActualizar->setObjectName(QString::fromUtf8("BtnActualizar"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BtnActualizar->sizePolicy().hasHeightForWidth());
        BtnActualizar->setSizePolicy(sizePolicy3);
        BtnActualizar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnActualizar->setAutoFillBackground(false);
        BtnActualizar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/general/iconos/player/loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnActualizar->setIcon(icon4);
        BtnActualizar->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnActualizar, 0, 2, 1, 1);

        BtnStart = new QPushButton(frame_3);
        BtnStart->setObjectName(QString::fromUtf8("BtnStart"));
        sizePolicy3.setHeightForWidth(BtnStart->sizePolicy().hasHeightForWidth());
        BtnStart->setSizePolicy(sizePolicy3);
        BtnStart->setCursor(QCursor(Qt::PointingHandCursor));
        BtnStart->setAutoFillBackground(false);
        BtnStart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"\n"
"\n"
"QPushButton:checked {\n"
"      background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
" }\n"
"\n"
"\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/general/iconos/menu/eventos.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStart->setIcon(icon5);
        BtnStart->setIconSize(QSize(50, 30));
        BtnStart->setCheckable(true);
        BtnStart->setChecked(true);

        gridLayout_2->addWidget(BtnStart, 0, 3, 1, 1);

        BtnEventos = new QPushButton(frame_3);
        BtnEventos->setObjectName(QString::fromUtf8("BtnEventos"));
        BtnEventos->setCursor(QCursor(Qt::PointingHandCursor));
        BtnEventos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        BtnEventos->setIcon(icon1);
        BtnEventos->setIconSize(QSize(50, 30));

        gridLayout_2->addWidget(BtnEventos, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        LAviso = new QLabel(frame_3);
        LAviso->setObjectName(QString::fromUtf8("LAviso"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        LAviso->setFont(font);
        LAviso->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(33, 48, 58);"));
        LAviso->setFrameShape(QFrame::Box);
        LAviso->setLineWidth(0);
        LAviso->setPixmap(QPixmap(QString::fromUtf8(":/general/iconos/eventos/onair.png")));

        gridLayout_2->addWidget(LAviso, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);


        verticalLayout_4->addWidget(frame_3);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(92, 135, 206);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        w_Lista = new ListaEventos(layoutWidget);
        if (w_Lista->columnCount() < 9)
            w_Lista->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        w_Lista->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignRight|Qt::AlignVCenter);
        w_Lista->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        w_Lista->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        w_Lista->setObjectName(QString::fromUtf8("w_Lista"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(w_Lista->sizePolicy().hasHeightForWidth());
        w_Lista->setSizePolicy(sizePolicy4);
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

        verticalLayout_3->addWidget(w_Lista);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        LUrl = new QLineEdit(layoutWidget1);
        LUrl->setObjectName(QString::fromUtf8("LUrl"));
        LUrl->setStyleSheet(QString::fromUtf8("  border: 2px solid #000000;\n"
"\n"
"     border-radius:8px;\n"
"background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(14, 45, 158);"));

        verticalLayout_2->addWidget(LUrl);

        TExplore = new QTreeView(layoutWidget1);
        TExplore->setObjectName(QString::fromUtf8("TExplore"));
        sizePolicy4.setHeightForWidth(TExplore->sizePolicy().hasHeightForWidth());
        TExplore->setSizePolicy(sizePolicy4);
        TExplore->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"\n"
"	\n"
"	color: rgb(7, 250, 242);\n"
"color: rgb(250, 250, 250);\n"
"	\n"
"	gridline-color: rgb(117, 125, 164);\n"
"\n"
""));
        TExplore->setDragEnabled(true);
        TExplore->setDragDropMode(QAbstractItemView::DragOnly);
        TExplore->setSelectionMode(QAbstractItemView::ContiguousSelection);
        TExplore->header()->setVisible(false);

        verticalLayout_2->addWidget(TExplore);

        splitter->addWidget(layoutWidget1);

        verticalLayout_4->addWidget(splitter);

        FrmEventos->setCentralWidget(centralwidget);

        retranslateUi(FrmEventos);

        QMetaObject::connectSlotsByName(FrmEventos);
    } // setupUi

    void retranslateUi(QMainWindow *FrmEventos)
    {
        FrmEventos->setWindowTitle(QApplication::translate("FrmEventos", "Eventos", 0, QApplication::UnicodeUTF8));
        LHora->setText(QString());
        LTemperatura->setText(QApplication::translate("FrmEventos", "0 C", 0, QApplication::UnicodeUTF8));
        LHumedad->setText(QApplication::translate("FrmEventos", "0 %", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtnActualizar->setToolTip(QApplication::translate("FrmEventos", "Actualizar eventos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BtnActualizar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        BtnActualizar->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnStart->setToolTip(QApplication::translate("FrmEventos", "Activar eventos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BtnStart->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        BtnStart->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnEventos->setToolTip(QApplication::translate("FrmEventos", "Planificar eventos", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        BtnEventos->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        LAviso->setText(QString());
        label->setText(QApplication::translate("FrmEventos", "Eventos pr\303\263ximos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = w_Lista->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("FrmEventos", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = w_Lista->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("FrmEventos", "Comienzo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = w_Lista->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("FrmEventos", "T\303\255tulo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = w_Lista->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("FrmEventos", "Duraci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = w_Lista->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("FrmEventos", "Segundos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = w_Lista->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("FrmEventos", "url", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = w_Lista->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("FrmEventos", "cod", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = w_Lista->horizontalHeaderItem(8);
        ___qtablewidgetitem7->setText(QApplication::translate("FrmEventos", "fechahora", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmEventos: public Ui_FrmEventos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMEVENTOS_H
