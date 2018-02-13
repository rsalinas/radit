/****************************************************************************
** Meta object code from reading C++ file 'PlayerGrupos.h'
**
** Created: Thu Mar 19 17:21:30 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PlayerGrupos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlayerGrupos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlayerGrupos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,   13,   13,   13, 0x0a,
      31,   13,   13,   13, 0x0a,
      44,   13,   13,   13, 0x0a,
      61,   13,   13,   13, 0x0a,
      79,   13,   13,   13, 0x0a,
      95,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PlayerGrupos[] = {
    "PlayerGrupos\0\0Finish()\0Final()\0"
    "FinalGrupo()\0ClickPisadorIn()\0"
    "ClickPisadorOut()\0ClickFaderOut()\0"
    "ClickFaderIn()\0"
};

void PlayerGrupos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayerGrupos *_t = static_cast<PlayerGrupos *>(_o);
        switch (_id) {
        case 0: _t->Finish(); break;
        case 1: _t->Final(); break;
        case 2: _t->FinalGrupo(); break;
        case 3: _t->ClickPisadorIn(); break;
        case 4: _t->ClickPisadorOut(); break;
        case 5: _t->ClickFaderOut(); break;
        case 6: _t->ClickFaderIn(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PlayerGrupos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayerGrupos::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PlayerGrupos,
      qt_meta_data_PlayerGrupos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayerGrupos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayerGrupos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayerGrupos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerGrupos))
        return static_cast<void*>(const_cast< PlayerGrupos*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PlayerGrupos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PlayerGrupos::Finish()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
