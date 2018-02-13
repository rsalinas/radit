/****************************************************************************
** Meta object code from reading C++ file 'AddEventos.h'
**
** Created: Thu Mar 19 17:21:37 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AddEventos.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddEventos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddEventos[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      25,   11,   11,   11, 0x08,
      40,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      66,   11,   11,   11, 0x08,
      83,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddEventos[] = {
    "AddEventos\0\0OtrasHoras()\0ClickAceptar()\0"
    "ClickTipo(int)\0ClickUrl()\0HoratoCheckBox()\0"
    "AddRadio()\0"
};

void AddEventos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddEventos *_t = static_cast<AddEventos *>(_o);
        switch (_id) {
        case 0: _t->OtrasHoras(); break;
        case 1: _t->ClickAceptar(); break;
        case 2: _t->ClickTipo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ClickUrl(); break;
        case 4: _t->HoratoCheckBox(); break;
        case 5: _t->AddRadio(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AddEventos::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddEventos::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddEventos,
      qt_meta_data_AddEventos, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddEventos::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddEventos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddEventos::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddEventos))
        return static_cast<void*>(const_cast< AddEventos*>(this));
    if (!strcmp(_clname, "Ui::FrmAddEvento"))
        return static_cast< Ui::FrmAddEvento*>(const_cast< AddEventos*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddEventos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
