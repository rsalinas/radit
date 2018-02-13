/****************************************************************************
** Meta object code from reading C++ file 'EditorEventos.h'
**
** Created: Thu Mar 19 17:21:35 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditorEventos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorEventos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditorEventos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      28,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,
      53,   14,   14,   14, 0x08,
      66,   14,   14,   14, 0x08,
      78,   14,   14,   14, 0x08,
      93,   14,   14,   14, 0x08,
     113,  111,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditorEventos[] = {
    "EditorEventos\0\0AddPestana()\0DelPestana()\0"
    "AddEvento()\0EditEvento()\0DelEvento()\0"
    "DelExpirados()\0ClickPestana(int)\0,\0"
    "ChecCambio(int,int)\0"
};

void EditorEventos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditorEventos *_t = static_cast<EditorEventos *>(_o);
        switch (_id) {
        case 0: _t->AddPestana(); break;
        case 1: _t->DelPestana(); break;
        case 2: _t->AddEvento(); break;
        case 3: _t->EditEvento(); break;
        case 4: _t->DelEvento(); break;
        case 5: _t->DelExpirados(); break;
        case 6: _t->ClickPestana((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->ChecCambio((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditorEventos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditorEventos::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditorEventos,
      qt_meta_data_EditorEventos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditorEventos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditorEventos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditorEventos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditorEventos))
        return static_cast<void*>(const_cast< EditorEventos*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditorEventos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
