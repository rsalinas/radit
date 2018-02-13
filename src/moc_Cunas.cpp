/****************************************************************************
** Meta object code from reading C++ file 'Cunas.h'
**
** Created: Thu Mar 19 17:21:49 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Cunas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cunas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Cunas[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      25,    6,    6,    6, 0x08,
      44,   38,    6,    6, 0x08,
      76,   64,    6,    6, 0x08,
     106,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Cunas[] = {
    "Cunas\0\0ShowEditorCunas()\0clickBoton()\0"
    "boton\0Final(QPushButton*)\0boton,verde\0"
    "BotonColor(QPushButton*,bool)\0"
    "ShowNombre()\0"
};

void Cunas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Cunas *_t = static_cast<Cunas *>(_o);
        switch (_id) {
        case 0: _t->ShowEditorCunas(); break;
        case 1: _t->clickBoton(); break;
        case 2: _t->Final((*reinterpret_cast< QPushButton*(*)>(_a[1]))); break;
        case 3: _t->BotonColor((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->ShowNombre(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Cunas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Cunas::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Cunas,
      qt_meta_data_Cunas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Cunas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Cunas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Cunas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cunas))
        return static_cast<void*>(const_cast< Cunas*>(this));
    if (!strcmp(_clname, "Ui::FrmCunas"))
        return static_cast< Ui::FrmCunas*>(const_cast< Cunas*>(this));
    return QDialog::qt_metacast(_clname);
}

int Cunas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
