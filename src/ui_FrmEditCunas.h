/********************************************************************************
** Form generated from reading UI file 'FrmEditCunas.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMEDITCUNAS_H
#define UI_FRMEDITCUNAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmEditCunas
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnModificar;
    QPushButton *BtnEliminar;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnCue;
    QPushButton *BtnStop;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *ComboPagina;
    QPushButton *BtnRenombrar;
    QTableWidget *Lista;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnAplicar;
    QPushButton *BtnAceptar;

    void setupUi(QDialog *FrmEditCunas)
    {
        if (FrmEditCunas->objectName().isEmpty())
            FrmEditCunas->setObjectName(QString::fromUtf8("FrmEditCunas"));
        FrmEditCunas->resize(472, 356);
        FrmEditCunas->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        layoutWidget = new QWidget(FrmEditCunas);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 451, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BtnModificar = new QPushButton(layoutWidget);
        BtnModificar->setObjectName(QString::fromUtf8("BtnModificar"));
        BtnModificar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnModificar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon.addFile(QString::fromUtf8(":/general/iconos/menu/a\303\261adir.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnModificar->setIcon(icon);
        BtnModificar->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(BtnModificar);

        BtnEliminar = new QPushButton(layoutWidget);
        BtnEliminar->setObjectName(QString::fromUtf8("BtnEliminar"));
        BtnEliminar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnEliminar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/general/iconos/menu/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnEliminar->setIcon(icon1);
        BtnEliminar->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(BtnEliminar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnCue = new QPushButton(layoutWidget);
        BtnCue->setObjectName(QString::fromUtf8("BtnCue"));
        BtnCue->setCursor(QCursor(Qt::PointingHandCursor));
        BtnCue->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/general/iconos/player/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnCue->setIcon(icon2);
        BtnCue->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(BtnCue);

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
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/general/iconos/player/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon3);
        BtnStop->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(BtnStop);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
" \n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_3->addWidget(label);

        ComboPagina = new QComboBox(layoutWidget);
        ComboPagina->setObjectName(QString::fromUtf8("ComboPagina"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComboPagina->sizePolicy().hasHeightForWidth());
        ComboPagina->setSizePolicy(sizePolicy);
        ComboPagina->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        ComboPagina->setEditable(true);

        horizontalLayout_3->addWidget(ComboPagina);

        BtnRenombrar = new QPushButton(layoutWidget);
        BtnRenombrar->setObjectName(QString::fromUtf8("BtnRenombrar"));
        BtnRenombrar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnRenombrar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(BtnRenombrar);


        verticalLayout->addLayout(horizontalLayout_3);

        Lista = new QTableWidget(layoutWidget);
        if (Lista->columnCount() < 3)
            Lista->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Lista->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (Lista->rowCount() < 9)
            Lista->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        Lista->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n1.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setIcon(icon4);
        Lista->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        Lista->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        Lista->setItem(0, 2, __qtablewidgetitem14);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n2.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setIcon(icon5);
        Lista->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        Lista->setItem(1, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        Lista->setItem(1, 2, __qtablewidgetitem17);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setIcon(icon6);
        Lista->setItem(2, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        Lista->setItem(2, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        Lista->setItem(2, 2, __qtablewidgetitem20);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n4.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setIcon(icon7);
        Lista->setItem(3, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        Lista->setItem(3, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        Lista->setItem(3, 2, __qtablewidgetitem23);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n5.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setIcon(icon8);
        Lista->setItem(4, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        Lista->setItem(4, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        Lista->setItem(4, 2, __qtablewidgetitem26);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n6.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setIcon(icon9);
        Lista->setItem(5, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        Lista->setItem(5, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        Lista->setItem(5, 2, __qtablewidgetitem29);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n7.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setIcon(icon10);
        Lista->setItem(6, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        Lista->setItem(6, 1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        Lista->setItem(6, 2, __qtablewidgetitem32);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n8.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setIcon(icon11);
        Lista->setItem(7, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        Lista->setItem(7, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        Lista->setItem(7, 2, __qtablewidgetitem35);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/numeros/iconos/numeros/n9.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setIcon(icon12);
        Lista->setItem(8, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        Lista->setItem(8, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        Lista->setItem(8, 2, __qtablewidgetitem38);
        Lista->setObjectName(QString::fromUtf8("Lista"));
        QFont font;
        font.setPointSize(10);
        Lista->setFont(font);
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
        Lista->setLineWidth(1);
        Lista->setProperty("showDropIndicator", QVariant(false));
        Lista->setDragDropOverwriteMode(false);
        Lista->setSelectionMode(QAbstractItemView::ContiguousSelection);
        Lista->setSelectionBehavior(QAbstractItemView::SelectRows);
        Lista->setIconSize(QSize(32, 20));
        Lista->setShowGrid(false);
        Lista->horizontalHeader()->setVisible(true);
        Lista->horizontalHeader()->setDefaultSectionSize(100);
        Lista->horizontalHeader()->setHighlightSections(true);
        Lista->horizontalHeader()->setMinimumSectionSize(26);
        Lista->verticalHeader()->setVisible(false);
        Lista->verticalHeader()->setDefaultSectionSize(22);
        Lista->verticalHeader()->setHighlightSections(true);
        Lista->verticalHeader()->setMinimumSectionSize(16);
        Lista->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout->addWidget(Lista);

        layoutWidget1 = new QWidget(FrmEditCunas);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(290, 320, 171, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnAplicar = new QPushButton(layoutWidget1);
        BtnAplicar->setObjectName(QString::fromUtf8("BtnAplicar"));
        BtnAplicar->setEnabled(true);
        BtnAplicar->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAplicar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(BtnAplicar);

        BtnAceptar = new QPushButton(layoutWidget1);
        BtnAceptar->setObjectName(QString::fromUtf8("BtnAceptar"));
        BtnAceptar->setCursor(QCursor(Qt::PointingHandCursor));
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


        retranslateUi(FrmEditCunas);

        QMetaObject::connectSlotsByName(FrmEditCunas);
    } // setupUi

    void retranslateUi(QDialog *FrmEditCunas)
    {
        FrmEditCunas->setWindowTitle(QApplication::translate("FrmEditCunas", "Cu\303\261as", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtnModificar->setToolTip(QApplication::translate("FrmEditCunas", "Modificar cu\303\261a", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnEliminar->setToolTip(QApplication::translate("FrmEditCunas", "Eliminar cu\303\261a", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnCue->setToolTip(QApplication::translate("FrmEditCunas", "Cue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStop->setToolTip(QApplication::translate("FrmEditCunas", "Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("FrmEditCunas", "P\303\241gina:", 0, QApplication::UnicodeUTF8));
        ComboPagina->clear();
        ComboPagina->insertItems(0, QStringList()
         << QApplication::translate("FrmEditCunas", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmEditCunas", "9", 0, QApplication::UnicodeUTF8)
        );
        BtnRenombrar->setText(QApplication::translate("FrmEditCunas", "Renombrar", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = Lista->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FrmEditCunas", "Cu\303\261as", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = Lista->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FrmEditCunas", "Modo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = Lista->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FrmEditCunas", "Url", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = Lista->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("FrmEditCunas", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = Lista->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("FrmEditCunas", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = Lista->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("FrmEditCunas", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = Lista->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("FrmEditCunas", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = Lista->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("FrmEditCunas", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = Lista->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("FrmEditCunas", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = Lista->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("FrmEditCunas", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = Lista->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("FrmEditCunas", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = Lista->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("FrmEditCunas", "9", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = Lista->isSortingEnabled();
        Lista->setSortingEnabled(false);
        Lista->setSortingEnabled(__sortingEnabled);

        BtnAplicar->setText(QApplication::translate("FrmEditCunas", "Aplicar...", 0, QApplication::UnicodeUTF8));
        BtnAceptar->setText(QApplication::translate("FrmEditCunas", "Aceptar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmEditCunas: public Ui_FrmEditCunas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMEDITCUNAS_H
