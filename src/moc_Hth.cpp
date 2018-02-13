/****************************************************************************
** Meta object code from reading C++ file 'Hth.h'
**
** Created: Thu Mar 19 17:21:23 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "engine/Hth.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Hth[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,
      15,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Hth[] = {
    "Hth\0\0Iniciar()\0Finish()\0Update()\0"
};

void Hth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Hth *_t = static_cast<Hth *>(_o);
        switch (_id) {
        case 0: _t->Iniciar(); break;
        case 1: _t->Finish(); break;
        case 2: _t->Update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Hth::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Hth::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Hth,
      qt_meta_data_Hth, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Hth::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Hth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Hth::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Hth))
        return static_cast<void*>(const_cast< Hth*>(this));
    return QObject::qt_metacast(_clname);
}

int Hth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Hth::Iniciar()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Hth::Finish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
