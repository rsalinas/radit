/********************************************************************************
** Form generated from reading UI file 'FrmGeneral.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMGENERAL_H
#define UI_FRMGENERAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmGeneral
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnSalir;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *Dispositivo;
    QLabel *label_4;
    QWidget *page_2;

    void setupUi(QDialog *FrmGeneral)
    {
        if (FrmGeneral->objectName().isEmpty())
            FrmGeneral->setObjectName(QString::fromUtf8("FrmGeneral"));
        FrmGeneral->resize(655, 483);
        FrmGeneral->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout = new QVBoxLayout(FrmGeneral);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        BtnSalir = new QPushButton(FrmGeneral);
        BtnSalir->setObjectName(QString::fromUtf8("BtnSalir"));
        BtnSalir->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_2->addWidget(BtnSalir);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(FrmGeneral);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 62, 62);\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(250, 128, 28, 255), stop:0.98 rgba(255, 255, 255, 255), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(0, 0, 0);\n"
"\n"
"\n"
"  border: 2px solid #000000;"));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(label_2, 0, 1, 1, 2);

        listWidget = new QListWidget(FrmGeneral);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/general/iconos/menu/prefer.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        listWidget->setFont(font1);
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 62, 62);\n"
"color: rgb(255, 255, 255);\n"
"  border: 2px solid #000000;"));
        listWidget->setFrameShape(QFrame::WinPanel);
        listWidget->setIconSize(QSize(20, 20));

        gridLayout->addWidget(listWidget, 0, 0, 2, 1);

        stackedWidget = new QStackedWidget(FrmGeneral);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 62, 62);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"  border: 1px solid #000000;"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 20, 481, 41));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);"));
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        Dispositivo = new QComboBox(frame_3);
        Dispositivo->setObjectName(QString::fromUtf8("Dispositivo"));

        horizontalLayout_5->addWidget(Dispositivo);


        verticalLayout_5->addLayout(horizontalLayout_5);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 5, 111, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 1, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(FrmGeneral);
        QObject::connect(listWidget, SIGNAL(currentTextChanged(QString)), label_2, SLOT(setText(QString)));
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        listWidget->setCurrentRow(-1);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FrmGeneral);
    } // setupUi

    void retranslateUi(QDialog *FrmGeneral)
    {
        FrmGeneral->setWindowTitle(QApplication::translate("FrmGeneral", "Preferencias Generales", 0, QApplication::UnicodeUTF8));
        BtnSalir->setText(QApplication::translate("FrmGeneral", "Salir", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmGeneral", "Preferencias", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("FrmGeneral", "Cue", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("FrmGeneral", "Other", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_4->setText(QApplication::translate("FrmGeneral", "Dispositivo", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmGeneral: public Ui_FrmGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMGENERAL_H
