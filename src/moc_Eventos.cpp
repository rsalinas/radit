/****************************************************************************
** Meta object code from reading C++ file 'Eventos.h'
**
** Created: Thu Mar 19 17:21:08 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Eventos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Eventos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Eventos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,    9,    8,    8, 0x05,
      45,    8,    8,    8, 0x05,
      63,    8,    8,    8, 0x05,
      74,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      85,    8,    8,    8, 0x08,
      98,    8,    8,    8, 0x08,
     109,    8,    8,    8, 0x08,
     117,    8,    8,    8, 0x08,
     131,    8,    8,    8, 0x08,
     143,    8,    8,    8, 0x08,
     162,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Eventos[] = {
    "Eventos\0\0,,\0startEvento(QString,int,QString)\0"
    "descartarEvento()\0startHth()\0finalHth()\0"
    "UpdateHora()\0ClickHtm()\0Final()\0"
    "ClickEditor()\0ClickPlay()\0setUpdateEventos()\0"
    "BorrarEvento()\0"
};

void Eventos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Eventos *_t = static_cast<Eventos *>(_o);
        switch (_id) {
        case 0: _t->startEvento((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->descartarEvento(); break;
        case 2: _t->startHth(); break;
        case 3: _t->finalHth(); break;
        case 4: _t->UpdateHora(); break;
        case 5: _t->ClickHtm(); break;
        case 6: _t->Final(); break;
        case 7: _t->ClickEditor(); break;
        case 8: _t->ClickPlay(); break;
        case 9: _t->setUpdateEventos(); break;
        case 10: _t->BorrarEvento(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Eventos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Eventos::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Eventos,
      qt_meta_data_Eventos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Eventos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Eventos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Eventos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Eventos))
        return static_cast<void*>(const_cast< Eventos*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Eventos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Eventos::startEvento(QString _t1, int _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Eventos::descartarEvento()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Eventos::startHth()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Eventos::finalHth()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
