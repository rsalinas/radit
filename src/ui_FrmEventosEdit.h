/********************************************************************************
** Form generated from reading UI file 'FrmEventosEdit.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMEVENTOSEDIT_H
#define UI_FRMEVENTOSEDIT_H

#include <ListaEventosEdit.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FrmEventosEdit
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnAddEvento;
    QPushButton *BtnEditEvento;
    QPushButton *BtnDelEvento;
    QPushButton *BtnDelExp;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_10;
    QPushButton *pushButton_14;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *BtnAddPestana;
    QPushButton *BtnDelPestana;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTabWidget *Pestanas;
    ListaEventosEdit *Lista;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *BtnAceptar;

    void setupUi(QDialog *FrmEventosEdit)
    {
        if (FrmEventosEdit->objectName().isEmpty())
            FrmEventosEdit->setObjectName(QString::fromUtf8("FrmEventosEdit"));
        FrmEventosEdit->resize(623, 521);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/menu/relog.png"), QSize(), QIcon::Normal, QIcon::Off);
        FrmEventosEdit->setWindowIcon(icon);
        FrmEventosEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        FrmEventosEdit->setModal(false);
        verticalLayout_2 = new QVBoxLayout(FrmEventosEdit);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(FrmEventosEdit);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 60));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 86, 113);"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BtnAddEvento = new QPushButton(frame_2);
        BtnAddEvento->setObjectName(QString::fromUtf8("BtnAddEvento"));
        BtnAddEvento->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAddEvento->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"\n"
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
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/Add.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAddEvento->setIcon(icon1);
        BtnAddEvento->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(BtnAddEvento);

        BtnEditEvento = new QPushButton(frame_2);
        BtnEditEvento->setObjectName(QString::fromUtf8("BtnEditEvento"));
        BtnEditEvento->setCursor(QCursor(Qt::PointingHandCursor));
        BtnEditEvento->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEditEvento->setIcon(icon2);
        BtnEditEvento->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(BtnEditEvento);

        BtnDelEvento = new QPushButton(frame_2);
        BtnDelEvento->setObjectName(QString::fromUtf8("BtnDelEvento"));
        BtnDelEvento->setCursor(QCursor(Qt::PointingHandCursor));
        BtnDelEvento->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDelEvento->setIcon(icon3);
        BtnDelEvento->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(BtnDelEvento);

        BtnDelExp = new QPushButton(frame_2);
        BtnDelExp->setObjectName(QString::fromUtf8("BtnDelExp"));
        BtnDelExp->setCursor(QCursor(Qt::PointingHandCursor));
        BtnDelExp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/expirados.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDelExp->setIcon(icon4);
        BtnDelExp->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(BtnDelExp);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_10 = new QPushButton(frame_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon5);
        pushButton_10->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(pushButton_10);

        pushButton_14 = new QPushButton(frame_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/export .png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon6);
        pushButton_14->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(pushButton_14);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        BtnAddPestana = new QPushButton(frame_2);
        BtnAddPestana->setObjectName(QString::fromUtf8("BtnAddPestana"));
        BtnAddPestana->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAddPestana->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/tabadd.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAddPestana->setIcon(icon7);
        BtnAddPestana->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(BtnAddPestana);

        BtnDelPestana = new QPushButton(frame_2);
        BtnDelPestana->setObjectName(QString::fromUtf8("BtnDelPestana"));
        BtnDelPestana->setCursor(QCursor(Qt::PointingHandCursor));
        BtnDelPestana->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
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
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Eventos/iconos/eventos/tabdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDelPestana->setIcon(icon8);
        BtnDelPestana->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(BtnDelPestana);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(frame_2);

        frame = new QFrame(FrmEventosEdit);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Pestanas = new QTabWidget(frame);
        Pestanas->setObjectName(QString::fromUtf8("Pestanas"));
        Pestanas->setCursor(QCursor(Qt::PointingHandCursor));
        Pestanas->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 1px solid rgb(0, 0, 0);\n"
" }\n"
"\n"
" QTabWidget::tab-bar {\n"
"     left: 5px; /* move to the right by 5px */\n"
" }\n"
"\n"
" /* Style the tab using the tab sub-control. Note that\n"
"     it reads QTabBar _not_ QTabWidget */\n"
" QTabBar::tab {\n"
"     \n"
"     border: 1px solid rgb(0, 0, 0);\n"
"\n"
"    \n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #5aa3fd, stop: 1 #1f406a);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"     border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 12ex;\n"
"     padding: 4px;\n"
"\n"
" }\n"
"\n"
" QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f5b14e, stop: 1 #fff9ef);\n"
"	color: rgb(0, 0, 0);\n"
" }\n"
"\n"
" QTabBar::ta"
                        "b:selected {\n"
"     border-color: #9B9B9B;\n"
"     border-bottom-color: #C2C7CB; /* same as pane color */\n"
" }\n"
"\n"
" QTabBar::tab:!selected {\n"
"     margin-top: 2px; /* make non-selected tabs look smaller */\n"
" }"));

        verticalLayout->addWidget(Pestanas);

        Lista = new ListaEventosEdit(frame);
        if (Lista->columnCount() < 9)
            Lista->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        Lista->setObjectName(QString::fromUtf8("Lista"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(7);
        sizePolicy1.setHeightForWidth(Lista->sizePolicy().hasHeightForWidth());
        Lista->setSizePolicy(sizePolicy1);
        Lista->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
        Lista->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        Lista->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        Lista->setProperty("showDropIndicator", QVariant(false));
        Lista->setDragDropOverwriteMode(false);
        Lista->setSelectionMode(QAbstractItemView::ContiguousSelection);
        Lista->setSelectionBehavior(QAbstractItemView::SelectRows);
        Lista->verticalHeader()->setVisible(false);
        Lista->verticalHeader()->setDefaultSectionSize(16);
        Lista->verticalHeader()->setMinimumSectionSize(16);

        verticalLayout->addWidget(Lista);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        BtnAceptar = new QPushButton(FrmEventosEdit);
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

        horizontalLayout_2->addWidget(BtnAceptar);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(FrmEventosEdit);

        Pestanas->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(FrmEventosEdit);
    } // setupUi

    void retranslateUi(QDialog *FrmEventosEdit)
    {
        FrmEventosEdit->setWindowTitle(QApplication::translate("FrmEventosEdit", "Eventos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        frame_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnAddEvento->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">A\303\261adir evento</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnEditEvento->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">Modificar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnDelEvento->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">Eliminar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnDelExp->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">Eliminar expirados</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">Importar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_14->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">Exportar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnAddPestana->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">A\303\261adir solapa</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnDelPestana->setToolTip(QApplication::translate("FrmEventosEdit", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#0055ff;\">Eliminar solapa</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = Lista->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FrmEventosEdit", "Hora", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = Lista->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FrmEventosEdit", "Comienzo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = Lista->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FrmEventosEdit", "Fichero", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = Lista->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FrmEventosEdit", "Prioridad", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = Lista->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("FrmEventosEdit", "Espera...", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = Lista->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("FrmEventosEdit", "D\303\255as de la semana", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = Lista->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("FrmEventosEdit", "Horas", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = Lista->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("FrmEventosEdit", "Expiraci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = Lista->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("FrmEventosEdit", "Cod", 0, QApplication::UnicodeUTF8));
        BtnAceptar->setText(QApplication::translate("FrmEventosEdit", "Aceptar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmEventosEdit: public Ui_FrmEventosEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMEVENTOSEDIT_H
