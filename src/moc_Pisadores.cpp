/****************************************************************************
** Meta object code from reading C++ file 'Pisadores.h'
**
** Created: Thu Mar 19 17:21:24 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "engine/Pisadores.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pisadores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pisadores[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      20,   10,   10,   10, 0x05,
      30,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   10,   10,   10, 0x08,
      64,   10,   10,   10, 0x08,
      77,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Pisadores[] = {
    "Pisadores\0\0Finish()\0Iniciar()\0"
    "FinishCuna(QPushButton*)\0Update()\0"
    "EmitInicio()\0EmitFinal()\0"
};

void Pisadores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Pisadores *_t = static_cast<Pisadores *>(_o);
        switch (_id) {
        case 0: _t->Finish(); break;
        case 1: _t->Iniciar(); break;
        case 2: _t->FinishCuna((*reinterpret_cast< QPushButton*(*)>(_a[1]))); break;
        case 3: _t->Update(); break;
        case 4: _t->EmitInicio(); break;
        case 5: _t->EmitFinal(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Pisadores::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pisadores::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Pisadores,
      qt_meta_data_Pisadores, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pisadores::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pisadores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pisadores::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pisadores))
        return static_cast<void*>(const_cast< Pisadores*>(this));
    return QObject::qt_metacast(_clname);
}

int Pisadores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Pisadores::Finish()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Pisadores::Iniciar()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Pisadores::FinishCuna(QPushButton * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
