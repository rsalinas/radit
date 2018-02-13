/********************************************************************************
** Form generated from reading UI file 'FrmAddEvento.ui'
**
** Created: Thu Mar 19 17:19:06 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMADDEVENTO_H
#define UI_FRMADDEVENTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrmAddEvento
{
public:
    QFrame *FrameDias;
    QLabel *label_7;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *BtnLunes;
    QCheckBox *BtnMartes;
    QCheckBox *BtnMiercoles;
    QCheckBox *BtnJueves;
    QCheckBox *BtnViernes;
    QCheckBox *BtnSabado;
    QCheckBox *BtnDomingo;
    QPushButton *BtnTodos;
    QFrame *FrameTipo;
    QLabel *label_8;
    QComboBox *ComboEvento;
    QFrame *FrameTipoFichero;
    QLabel *LUrl;
    QPushButton *BtnUrl;
    QFrame *FrameTipoRadio;
    QLabel *LUrlRadio;
    QPushButton *BtnAddRadio;
    QLabel *LNombreRadio;
    QLabel *LConexion;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QFrame *FramePrioridad;
    QRadioButton *RadioUnaVez;
    QRadioButton *RadioCadaHora;
    QRadioButton *RadioOtrasHoras;
    QLabel *label_2;
    QFrame *FrameComportamiento;
    QComboBox *ComboComportamiento;
    QCheckBox *ChecEspera;
    QSpinBox *SpinEspera;
    QLabel *label;
    QLabel *label_3;
    QFrame *FrameFecha;
    QDateEdit *DateFechaInicio;
    QDateEdit *DateExpiracion;
    QTimeEdit *TimeHoraInicio;
    QTimeEdit *TimeExpiracion;
    QLabel *label_5;
    QCheckBox *ChecExpiracion;
    QLabel *label_6;
    QFrame *FramePrioridad_2;
    QLabel *label_4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *RadioPrioridadAlta;
    QRadioButton *RadioPrioridadBaja;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnAceptar;
    QPushButton *BtnCancelar;

    void setupUi(QDialog *FrmAddEvento)
    {
        if (FrmAddEvento->objectName().isEmpty())
            FrmAddEvento->setObjectName(QString::fromUtf8("FrmAddEvento"));
        FrmAddEvento->resize(432, 492);
        FrmAddEvento->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 48, 58);\n"
""));
        FrameDias = new QFrame(FrmAddEvento);
        FrameDias->setObjectName(QString::fromUtf8("FrameDias"));
        FrameDias->setGeometry(QRect(330, 250, 97, 201));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(FrameDias->sizePolicy().hasHeightForWidth());
        FrameDias->setSizePolicy(sizePolicy);
        FrameDias->setStyleSheet(QString::fromUtf8("QFrame{\n"
"   background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
" }\n"
"\n"
""));
        FrameDias->setFrameShape(QFrame::StyledPanel);
        FrameDias->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(FrameDias);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 101, 16));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8(" background-color: rgb(27, 128, 217);\n"
"  border: 1px solid black;\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget = new QWidget(FrameDias);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 77, 172));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BtnLunes = new QCheckBox(layoutWidget);
        BtnLunes->setObjectName(QString::fromUtf8("BtnLunes"));
        BtnLunes->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnLunes);

        BtnMartes = new QCheckBox(layoutWidget);
        BtnMartes->setObjectName(QString::fromUtf8("BtnMartes"));
        BtnMartes->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnMartes);

        BtnMiercoles = new QCheckBox(layoutWidget);
        BtnMiercoles->setObjectName(QString::fromUtf8("BtnMiercoles"));
        BtnMiercoles->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnMiercoles);

        BtnJueves = new QCheckBox(layoutWidget);
        BtnJueves->setObjectName(QString::fromUtf8("BtnJueves"));
        BtnJueves->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnJueves);

        BtnViernes = new QCheckBox(layoutWidget);
        BtnViernes->setObjectName(QString::fromUtf8("BtnViernes"));
        BtnViernes->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnViernes);

        BtnSabado = new QCheckBox(layoutWidget);
        BtnSabado->setObjectName(QString::fromUtf8("BtnSabado"));
        BtnSabado->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnSabado);

        BtnDomingo = new QCheckBox(layoutWidget);
        BtnDomingo->setObjectName(QString::fromUtf8("BtnDomingo"));
        BtnDomingo->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(BtnDomingo);

        BtnTodos = new QPushButton(layoutWidget);
        BtnTodos->setObjectName(QString::fromUtf8("BtnTodos"));
        BtnTodos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(BtnTodos);

        FrameTipo = new QFrame(FrmAddEvento);
        FrameTipo->setObjectName(QString::fromUtf8("FrameTipo"));
        FrameTipo->setGeometry(QRect(0, 250, 321, 201));
        sizePolicy.setHeightForWidth(FrameTipo->sizePolicy().hasHeightForWidth());
        FrameTipo->setSizePolicy(sizePolicy);
        FrameTipo->setStyleSheet(QString::fromUtf8("QFrame{\n"
"  background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
""));
        FrameTipo->setFrameShape(QFrame::StyledPanel);
        FrameTipo->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(FrameTipo);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 441, 20));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8(" background-color: rgb(27, 128, 217);\n"
"  border: 1px solid black;\n"
"color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ComboEvento = new QComboBox(FrameTipo);
        ComboEvento->setObjectName(QString::fromUtf8("ComboEvento"));
        ComboEvento->setGeometry(QRect(10, 30, 301, 18));
        ComboEvento->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        FrameTipoFichero = new QFrame(FrameTipo);
        FrameTipoFichero->setObjectName(QString::fromUtf8("FrameTipoFichero"));
        FrameTipoFichero->setGeometry(QRect(10, 60, 301, 41));
        FrameTipoFichero->setStyleSheet(QString::fromUtf8("QFrame{\n"
"  background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
""));
        FrameTipoFichero->setFrameShape(QFrame::StyledPanel);
        FrameTipoFichero->setFrameShadow(QFrame::Raised);
        LUrl = new QLabel(FrameTipoFichero);
        LUrl->setObjectName(QString::fromUtf8("LUrl"));
        LUrl->setGeometry(QRect(10, 10, 241, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LUrl->sizePolicy().hasHeightForWidth());
        LUrl->setSizePolicy(sizePolicy1);
        LUrl->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        BtnUrl = new QPushButton(FrameTipoFichero);
        BtnUrl->setObjectName(QString::fromUtf8("BtnUrl"));
        BtnUrl->setGeometry(QRect(260, 10, 31, 16));
        BtnUrl->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        FrameTipoRadio = new QFrame(FrameTipo);
        FrameTipoRadio->setObjectName(QString::fromUtf8("FrameTipoRadio"));
        FrameTipoRadio->setGeometry(QRect(10, 60, 301, 61));
        FrameTipoRadio->setStyleSheet(QString::fromUtf8("QFrame{\n"
"  background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
""));
        FrameTipoRadio->setFrameShape(QFrame::StyledPanel);
        FrameTipoRadio->setFrameShadow(QFrame::Raised);
        LUrlRadio = new QLabel(FrameTipoRadio);
        LUrlRadio->setObjectName(QString::fromUtf8("LUrlRadio"));
        LUrlRadio->setGeometry(QRect(10, 10, 241, 16));
        sizePolicy1.setHeightForWidth(LUrlRadio->sizePolicy().hasHeightForWidth());
        LUrlRadio->setSizePolicy(sizePolicy1);
        LUrlRadio->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        BtnAddRadio = new QPushButton(FrameTipoRadio);
        BtnAddRadio->setObjectName(QString::fromUtf8("BtnAddRadio"));
        BtnAddRadio->setGeometry(QRect(260, 10, 31, 16));
        BtnAddRadio->setCursor(QCursor(Qt::PointingHandCursor));
        BtnAddRadio->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        LNombreRadio = new QLabel(FrameTipoRadio);
        LNombreRadio->setObjectName(QString::fromUtf8("LNombreRadio"));
        LNombreRadio->setGeometry(QRect(10, 30, 181, 16));
        sizePolicy1.setHeightForWidth(LNombreRadio->sizePolicy().hasHeightForWidth());
        LNombreRadio->setSizePolicy(sizePolicy1);
        LNombreRadio->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        LConexion = new QLabel(FrameTipoRadio);
        LConexion->setObjectName(QString::fromUtf8("LConexion"));
        LConexion->setGeometry(QRect(190, 30, 61, 16));
        sizePolicy1.setHeightForWidth(LConexion->sizePolicy().hasHeightForWidth());
        LConexion->setSizePolicy(sizePolicy1);
        LConexion->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        layoutWidget1 = new QWidget(FrmAddEvento);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 1, 431, 241));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        FramePrioridad = new QFrame(layoutWidget1);
        FramePrioridad->setObjectName(QString::fromUtf8("FramePrioridad"));
        sizePolicy.setHeightForWidth(FramePrioridad->sizePolicy().hasHeightForWidth());
        FramePrioridad->setSizePolicy(sizePolicy);
        FramePrioridad->setStyleSheet(QString::fromUtf8("QFrame{\n"
"   background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
" }\n"
"\n"
""));
        FramePrioridad->setFrameShape(QFrame::StyledPanel);
        FramePrioridad->setFrameShadow(QFrame::Raised);
        RadioUnaVez = new QRadioButton(FramePrioridad);
        RadioUnaVez->setObjectName(QString::fromUtf8("RadioUnaVez"));
        RadioUnaVez->setGeometry(QRect(11, 36, 181, 16));
        RadioUnaVez->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        RadioUnaVez->setChecked(true);
        RadioCadaHora = new QRadioButton(FramePrioridad);
        RadioCadaHora->setObjectName(QString::fromUtf8("RadioCadaHora"));
        RadioCadaHora->setGeometry(QRect(11, 62, 181, 16));
        RadioCadaHora->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        RadioOtrasHoras = new QRadioButton(FramePrioridad);
        RadioOtrasHoras->setObjectName(QString::fromUtf8("RadioOtrasHoras"));
        RadioOtrasHoras->setGeometry(QRect(11, 88, 181, 16));
        RadioOtrasHoras->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(FramePrioridad);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 271, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"\n"
" background-color: rgb(27, 128, 217);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(FramePrioridad, 0, 0, 1, 1);

        FrameComportamiento = new QFrame(layoutWidget1);
        FrameComportamiento->setObjectName(QString::fromUtf8("FrameComportamiento"));
        sizePolicy.setHeightForWidth(FrameComportamiento->sizePolicy().hasHeightForWidth());
        FrameComportamiento->setSizePolicy(sizePolicy);
        FrameComportamiento->setStyleSheet(QString::fromUtf8("QFrame{\n"
"   background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
" }\n"
"\n"
""));
        FrameComportamiento->setFrameShape(QFrame::StyledPanel);
        FrameComportamiento->setFrameShadow(QFrame::Raised);
        ComboComportamiento = new QComboBox(FrameComportamiento);
        ComboComportamiento->setObjectName(QString::fromUtf8("ComboComportamiento"));
        ComboComportamiento->setGeometry(QRect(11, 31, 181, 18));
        ComboComportamiento->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        ChecEspera = new QCheckBox(FrameComportamiento);
        ChecEspera->setObjectName(QString::fromUtf8("ChecEspera"));
        ChecEspera->setGeometry(QRect(10, 70, 181, 16));
        ChecEspera->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        SpinEspera = new QSpinBox(FrameComportamiento);
        SpinEspera->setObjectName(QString::fromUtf8("SpinEspera"));
        SpinEspera->setEnabled(false);
        SpinEspera->setGeometry(QRect(10, 90, 51, 18));
        SpinEspera->setStyleSheet(QString::fromUtf8("\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        SpinEspera->setMinimum(1);
        SpinEspera->setMaximum(60);
        SpinEspera->setValue(5);
        label = new QLabel(FrameComportamiento);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 90, 61, 20));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setStyleSheet(QString::fromUtf8("\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_3 = new QLabel(FrameComportamiento);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 271, 16));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"\n"
" background-color: rgb(27, 128, 217);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(FrameComportamiento, 1, 0, 1, 1);

        FrameFecha = new QFrame(layoutWidget1);
        FrameFecha->setObjectName(QString::fromUtf8("FrameFecha"));
        sizePolicy.setHeightForWidth(FrameFecha->sizePolicy().hasHeightForWidth());
        FrameFecha->setSizePolicy(sizePolicy);
        FrameFecha->setStyleSheet(QString::fromUtf8("QFrame{\n"
"  background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
" }\n"
"\n"
""));
        FrameFecha->setFrameShape(QFrame::StyledPanel);
        FrameFecha->setFrameShadow(QFrame::Raised);
        DateFechaInicio = new QDateEdit(FrameFecha);
        DateFechaInicio->setObjectName(QString::fromUtf8("DateFechaInicio"));
        DateFechaInicio->setGeometry(QRect(109, 58, 85, 18));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(DateFechaInicio->sizePolicy().hasHeightForWidth());
        DateFechaInicio->setSizePolicy(sizePolicy3);
        DateFechaInicio->setStyleSheet(QString::fromUtf8("\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        DateFechaInicio->setCalendarPopup(true);
        DateExpiracion = new QDateEdit(FrameFecha);
        DateExpiracion->setObjectName(QString::fromUtf8("DateExpiracion"));
        DateExpiracion->setEnabled(false);
        DateExpiracion->setGeometry(QRect(109, 138, 85, 18));
        sizePolicy3.setHeightForWidth(DateExpiracion->sizePolicy().hasHeightForWidth());
        DateExpiracion->setSizePolicy(sizePolicy3);
        DateExpiracion->setStyleSheet(QString::fromUtf8("\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        DateExpiracion->setCalendarPopup(true);
        TimeHoraInicio = new QTimeEdit(FrameFecha);
        TimeHoraInicio->setObjectName(QString::fromUtf8("TimeHoraInicio"));
        TimeHoraInicio->setGeometry(QRect(11, 58, 73, 18));
        sizePolicy3.setHeightForWidth(TimeHoraInicio->sizePolicy().hasHeightForWidth());
        TimeHoraInicio->setSizePolicy(sizePolicy3);
        TimeHoraInicio->setStyleSheet(QString::fromUtf8(" border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
"\n"
""));
        TimeExpiracion = new QTimeEdit(FrameFecha);
        TimeExpiracion->setObjectName(QString::fromUtf8("TimeExpiracion"));
        TimeExpiracion->setEnabled(false);
        TimeExpiracion->setGeometry(QRect(11, 138, 73, 18));
        sizePolicy3.setHeightForWidth(TimeExpiracion->sizePolicy().hasHeightForWidth());
        TimeExpiracion->setSizePolicy(sizePolicy3);
        TimeExpiracion->setStyleSheet(QString::fromUtf8("\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_5 = new QLabel(FrameFecha);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 271, 20));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8(" background-color: rgb(27, 128, 217);\n"
"  border: 1px solid black;\n"
"color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ChecExpiracion = new QCheckBox(FrameFecha);
        ChecExpiracion->setObjectName(QString::fromUtf8("ChecExpiracion"));
        ChecExpiracion->setGeometry(QRect(11, 114, 181, 16));
        ChecExpiracion->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        label_6 = new QLabel(FrameFecha);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(11, 34, 181, 16));
        label_6->setStyleSheet(QString::fromUtf8("\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        FramePrioridad_2 = new QFrame(FrameFecha);
        FramePrioridad_2->setObjectName(QString::fromUtf8("FramePrioridad_2"));
        FramePrioridad_2->setGeometry(QRect(0, 170, 211, 71));
        sizePolicy.setHeightForWidth(FramePrioridad_2->sizePolicy().hasHeightForWidth());
        FramePrioridad_2->setSizePolicy(sizePolicy);
        FramePrioridad_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"   background-color: rgb(32, 39, 47);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
" }\n"
"\n"
""));
        FramePrioridad_2->setFrameShape(QFrame::StyledPanel);
        FramePrioridad_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(FramePrioridad_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 271, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"\n"
" background-color: rgb(27, 128, 217);\n"
"   border: 1px solid black;\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget2 = new QWidget(FramePrioridad_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 191, 17));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        RadioPrioridadAlta = new QRadioButton(layoutWidget2);
        RadioPrioridadAlta->setObjectName(QString::fromUtf8("RadioPrioridadAlta"));
        RadioPrioridadAlta->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));

        horizontalLayout_2->addWidget(RadioPrioridadAlta);

        RadioPrioridadBaja = new QRadioButton(layoutWidget2);
        RadioPrioridadBaja->setObjectName(QString::fromUtf8("RadioPrioridadBaja"));
        RadioPrioridadBaja->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 39, 47);\n"
"   border: 1px solid rgb(27, 128, 217);\n"
"color: rgb(255, 255, 255);\n"
""));
        RadioPrioridadBaja->setChecked(true);

        horizontalLayout_2->addWidget(RadioPrioridadBaja);


        gridLayout->addWidget(FrameFecha, 0, 1, 2, 1);

        layoutWidget3 = new QWidget(FrmAddEvento);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(250, 460, 181, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnAceptar = new QPushButton(layoutWidget3);
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

        horizontalLayout->addWidget(BtnAceptar);

        BtnCancelar = new QPushButton(layoutWidget3);
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

        horizontalLayout->addWidget(BtnCancelar);

        layoutWidget->raise();
        layoutWidget->raise();
        FrameDias->raise();
        FrameTipo->raise();

        retranslateUi(FrmAddEvento);

        QMetaObject::connectSlotsByName(FrmAddEvento);
    } // setupUi

    void retranslateUi(QDialog *FrmAddEvento)
    {
        FrmAddEvento->setWindowTitle(QApplication::translate("FrmAddEvento", "A\303\261adir evento", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FrmAddEvento", "D\303\255as", 0, QApplication::UnicodeUTF8));
        BtnLunes->setText(QApplication::translate("FrmAddEvento", "Lunes", 0, QApplication::UnicodeUTF8));
        BtnMartes->setText(QApplication::translate("FrmAddEvento", "Martes", 0, QApplication::UnicodeUTF8));
        BtnMiercoles->setText(QApplication::translate("FrmAddEvento", "Miercoles", 0, QApplication::UnicodeUTF8));
        BtnJueves->setText(QApplication::translate("FrmAddEvento", "Jueves", 0, QApplication::UnicodeUTF8));
        BtnViernes->setText(QApplication::translate("FrmAddEvento", "Viernes", 0, QApplication::UnicodeUTF8));
        BtnSabado->setText(QApplication::translate("FrmAddEvento", "S\303\241bado", 0, QApplication::UnicodeUTF8));
        BtnDomingo->setText(QApplication::translate("FrmAddEvento", "Domingo", 0, QApplication::UnicodeUTF8));
        BtnTodos->setText(QApplication::translate("FrmAddEvento", "Invertir", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FrmAddEvento", "Tipo de evento", 0, QApplication::UnicodeUTF8));
        ComboEvento->clear();
        ComboEvento->insertItems(0, QStringList()
         << QApplication::translate("FrmAddEvento", "Fichero", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmAddEvento", "Carpeta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmAddEvento", "Locuci\303\263n Hora", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmAddEvento", "Locuci\303\263n Temperatura", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmAddEvento", "Locuci\303\263n Humedad", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmAddEvento", "Radio On-line", 0, QApplication::UnicodeUTF8)
        );
        LUrl->setText(QString());
        BtnUrl->setText(QApplication::translate("FrmAddEvento", "...", 0, QApplication::UnicodeUTF8));
        LUrlRadio->setText(QString());
        BtnAddRadio->setText(QApplication::translate("FrmAddEvento", "...", 0, QApplication::UnicodeUTF8));
        LNombreRadio->setText(QString());
        LConexion->setText(QString());
        RadioUnaVez->setText(QApplication::translate("FrmAddEvento", "Una vez al d\303\255a", 0, QApplication::UnicodeUTF8));
        RadioCadaHora->setText(QApplication::translate("FrmAddEvento", "Reproducir cada hora", 0, QApplication::UnicodeUTF8));
        RadioOtrasHoras->setText(QApplication::translate("FrmAddEvento", "Otras horas...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FrmAddEvento", "Periodicidad", 0, QApplication::UnicodeUTF8));
        ComboComportamiento->clear();
        ComboComportamiento->insertItems(0, QStringList()
         << QApplication::translate("FrmAddEvento", "Retardado", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FrmAddEvento", "Inmediato", 0, QApplication::UnicodeUTF8)
        );
        ChecEspera->setText(QApplication::translate("FrmAddEvento", "Espera m\303\241xima", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FrmAddEvento", "Minutos", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FrmAddEvento", "Comportamiento", 0, QApplication::UnicodeUTF8));
        TimeHoraInicio->setDisplayFormat(QApplication::translate("FrmAddEvento", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        TimeExpiracion->setDisplayFormat(QApplication::translate("FrmAddEvento", "HH:mm:ss", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FrmAddEvento", "Fecha y hora", 0, QApplication::UnicodeUTF8));
        ChecExpiracion->setText(QApplication::translate("FrmAddEvento", "Expiraci\303\263n", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FrmAddEvento", "Fecha y hora de inicio", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FrmAddEvento", "Prioridad", 0, QApplication::UnicodeUTF8));
        RadioPrioridadAlta->setText(QApplication::translate("FrmAddEvento", "Alta", 0, QApplication::UnicodeUTF8));
        RadioPrioridadBaja->setText(QApplication::translate("FrmAddEvento", "Baja", 0, QApplication::UnicodeUTF8));
        BtnAceptar->setText(QApplication::translate("FrmAddEvento", "Aceptar", 0, QApplication::UnicodeUTF8));
        BtnCancelar->setText(QApplication::translate("FrmAddEvento", "Cancelar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FrmAddEvento: public Ui_FrmAddEvento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMADDEVENTO_H
