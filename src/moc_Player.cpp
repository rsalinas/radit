/****************************************************************************
** Meta object code from reading C++ file 'Player.h'
**
** Created: Thu Mar 19 17:21:03 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Player.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Player[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   23,    7,    7, 0x0a,
      69,    7,    7,    7, 0x0a,
      87,    7,    7,    7, 0x0a,
     106,    7,    7,    7, 0x08,
     120,    7,    7,    7, 0x08,
     132,    7,    7,    7, 0x08,
     144,    7,    7,    7, 0x08,
     157,    7,    7,    7, 0x08,
     170,    7,    7,    7, 0x08,
     184,    7,    7,    7, 0x08,
     197,    7,    7,    7, 0x08,
     210,    7,    7,    7, 0x08,
     225,    7,    7,    7, 0x08,
     237,    7,    7,    7, 0x08,
     245,    7,    7,    7, 0x08,
     258,    7,    7,    7, 0x08,
     272,    7,    7,    7, 0x08,
     292,    7,    7,    7, 0x08,
     305,    7,    7,    7, 0x08,
     318,    7,    7,    7, 0x08,
     337,    7,    7,    7, 0x08,
     352,    7,    7,    7, 0x08,
     369,    7,    7,    7, 0x08,
     387,    7,    7,    7, 0x08,
     403,    7,    7,    7, 0x08,
     418,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Player[] = {
    "Player\0\0borrarEvento()\0Url,tipo,Duracion\0"
    "Evento(QString,int,QString)\0"
    "DescartarEvento()\0ClickBtnStopPlay()\0"
    "ShowToolBar()\0ClickPlay()\0ClickStop()\0"
    "ClickPause()\0ClickAtras()\0ClickAlante()\0"
    "ClickParar()\0ClickLista()\0ClickPisador()\0"
    "ClickModo()\0Final()\0FinalGrupo()\0"
    "ClickBorrar()\0ClickPreferencias()\0"
    "ClickNuevo()\0ClickAbrir()\0ClickGuardarComo()\0"
    "ClickGuardar()\0ClickPisadorIn()\0"
    "ClickPisadorOut()\0ClickFaderOut()\0"
    "ClickFaderIn()\0AddRadio()\0"
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Player *_t = static_cast<Player *>(_o);
        switch (_id) {
        case 0: _t->borrarEvento(); break;
        case 1: _t->Evento((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->DescartarEvento(); break;
        case 3: _t->ClickBtnStopPlay(); break;
        case 4: _t->ShowToolBar(); break;
        case 5: _t->ClickPlay(); break;
        case 6: _t->ClickStop(); break;
        case 7: _t->ClickPause(); break;
        case 8: _t->ClickAtras(); break;
        case 9: _t->ClickAlante(); break;
        case 10: _t->ClickParar(); break;
        case 11: _t->ClickLista(); break;
        case 12: _t->ClickPisador(); break;
        case 13: _t->ClickModo(); break;
        case 14: _t->Final(); break;
        case 15: _t->FinalGrupo(); break;
        case 16: _t->ClickBorrar(); break;
        case 17: _t->ClickPreferencias(); break;
        case 18: _t->ClickNuevo(); break;
        case 19: _t->ClickAbrir(); break;
        case 20: _t->ClickGuardarComo(); break;
        case 21: _t->ClickGuardar(); break;
        case 22: _t->ClickPisadorIn(); break;
        case 23: _t->ClickPisadorOut(); break;
        case 24: _t->ClickFaderOut(); break;
        case 25: _t->ClickFaderIn(); break;
        case 26: _t->AddRadio(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Player::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Player::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Player,
      qt_meta_data_Player, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Player::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Player))
        return static_cast<void*>(const_cast< Player*>(this));
    if (!strcmp(_clname, "Ui::FrmPlayer"))
        return static_cast< Ui::FrmPlayer*>(const_cast< Player*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void Player::borrarEvento()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
