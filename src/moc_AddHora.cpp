/****************************************************************************
** Meta object code from reading C++ file 'AddHora.h'
**
** Created: Thu Mar 19 17:21:41 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AddHora.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddHora.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddHora[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      17,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AddHora[] = {
    "AddHora\0\0Todos()\0Ninguna()\0"
};

void AddHora::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddHora *_t = static_cast<AddHora *>(_o);
        switch (_id) {
        case 0: _t->Todos(); break;
        case 1: _t->Ninguna(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddHora::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddHora::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddHora,
      qt_meta_data_AddHora, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddHora::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddHora::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddHora::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddHora))
        return static_cast<void*>(const_cast< AddHora*>(this));
    if (!strcmp(_clname, "Ui::FrmHora"))
        return static_cast< Ui::FrmHora*>(const_cast< AddHora*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddHora::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
