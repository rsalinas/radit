/****************************************************************************
** Meta object code from reading C++ file 'Stream.h'
**
** Created: Thu Mar 19 17:21:13 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "engine/Stream.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Stream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Stream[] = {

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
       8,    7,    7,    7, 0x05,
      17,    7,    7,    7, 0x05,
      29,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      46,   42,    7,    7, 0x08,
      62,    7,    7,    7, 0x08,
      71,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Stream[] = {
    "Stream\0\0Finish()\0PisadorIn()\0PisadorOut()\0"
    "pos\0slot_Barra(int)\0Update()\0"
    "ActualizarContadores()\0"
};

void Stream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Stream *_t = static_cast<Stream *>(_o);
        switch (_id) {
        case 0: _t->Finish(); break;
        case 1: _t->PisadorIn(); break;
        case 2: _t->PisadorOut(); break;
        case 3: _t->slot_Barra((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Update(); break;
        case 5: _t->ActualizarContadores(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Stream::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Stream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Stream,
      qt_meta_data_Stream, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Stream::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Stream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Stream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Stream))
        return static_cast<void*>(const_cast< Stream*>(this));
    return QObject::qt_metacast(_clname);
}

int Stream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Stream::Finish()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Stream::PisadorIn()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Stream::PisadorOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
