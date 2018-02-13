/****************************************************************************
** Meta object code from reading C++ file 'PlayerPisadores.h'
**
** Created: Thu Mar 19 17:21:25 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PlayerPisadores.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerPisadores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlayerPisadores[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      32,   16,   16,   16, 0x08,
      47,   16,   16,   16, 0x08,
      63,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlayerPisadores[] = {
    "PlayerPisadores\0\0ClickFichero()\0"
    "EstablecerIn()\0EstablecerOut()\0"
    "ClickSalir()\0"
};

void PlayerPisadores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayerPisadores *_t = static_cast<PlayerPisadores *>(_o);
        switch (_id) {
        case 0: _t->ClickFichero(); break;
        case 1: _t->EstablecerIn(); break;
        case 2: _t->EstablecerOut(); break;
        case 3: _t->ClickSalir(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlayerPisadores::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayerPisadores::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlayerPisadores,
      qt_meta_data_PlayerPisadores, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayerPisadores::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayerPisadores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayerPisadores::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerPisadores))
        return static_cast<void*>(const_cast< PlayerPisadores*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlayerPisadores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
