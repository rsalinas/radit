/********************************************************************************
** Form generated from reading UI file 'FrmGrupos.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMGRUPOS_H
#define UI_FRMGRUPOS_H

#include <ListaGrupos.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmGrupos
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    ListaGrupos *Lista;

    void setupUi(QMainWindow *FrmGrupos)
    {
        if (FrmGrupos->objectName().isEmpty())
            FrmGrupos->setObjectName(QString::fromUtf8("FrmGrupos"));
        FrmGrupos->resize(349, 131);
        FrmGrupos->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        centralwidget = new QWidget(FrmGrupos);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Lista = new ListaGrupos(centralwidget);
        if (Lista->columnCount() < 8)
            Lista->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        Lista->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignRight|Qt::AlignVCenter);
        Lista->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        Lista->setObjectName(QString::fromUtf8("Lista"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(7);
        sizePolicy.setHeightForWidth(Lista->sizePolicy().hasHeightForWidth());
        Lista->setSizePolicy(sizePolicy);
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
        Lista->setProperty("showDropIndicator", QVariant(false));
        Lista->setDragDropOverwriteMode(false);
        Lista->setSelectionMode(QAbstractItemView::ContiguousSelection);
        Lista->setSelectionBehavior(QAbstractItemView::SelectRows);
        Lista->verticalHeader()->setVisible(false);
        Lista->verticalHeader()->setDefaultSectionSize(16);
        Lista->verticalHeader()->setMinimumSectionSize(16);

        verticalLayout->addWidget(Lista);

        FrmGrupos->setCentralWidget(centralwidget);

        retranslateUi(FrmGrupos);

        QMetaObject::connectSlotsByName(FrmGrupos);
    } // setupUi

    void retranslateUi(QMainWindow *FrmGrupos)
    {
        FrmGrupos->setWindowTitle(QApplication::translate("FrmGrupos", "Rotaciones", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = Lista->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("FrmGrupos", "T\303\255tulo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = Lista->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("FrmGrupos", "Duraci\303\263n", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = Lista->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("FrmGrupos", "Segundos", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = Lista->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("FrmGrupos", "url", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = Lista->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("FrmGrupos", "PTiempo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = Lista->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("FrmGrupos", "PInUrl", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = Lista->horizontalHeaderItem(7);
        ___qtablewidgetitem6->setText(QApplication::translate("FrmGrupos", "POutUrl", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmGrupos: public Ui_FrmGrupos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMGRUPOS_H
