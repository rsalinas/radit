/****************************************************************************
** Meta object code from reading C++ file 'AddRadioInternet.h'
**
** Created: Mon Feb 12 16:00:17 2018
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AddRadioInternet.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddRadioInternet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddRadioInternet[] = {

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
      18,   17,   17,   17, 0x0a,
      33,   17,   17,   17, 0x08,
      45,   17,   17,   17, 0x08,
      57,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddRadioInternet[] = {
    "AddRadioInternet\0\0ClickAceptar()\0"
    "ClickPlay()\0ClickStop()\0ClickCancelar()\0"
};

void AddRadioInternet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AddRadioInternet *_t = static_cast<AddRadioInternet *>(_o);
        switch (_id) {
        case 0: _t->ClickAceptar(); break;
        case 1: _t->ClickPlay(); break;
        case 2: _t->ClickStop(); break;
        case 3: _t->ClickCancelar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AddRadioInternet::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AddRadioInternet::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddRadioInternet,
      qt_meta_data_AddRadioInternet, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddRadioInternet::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddRadioInternet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddRadioInternet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddRadioInternet))
        return static_cast<void*>(const_cast< AddRadioInternet*>(this));
    if (!strcmp(_clname, "Ui::FrmAddRadioInternet"))
        return static_cast< Ui::FrmAddRadioInternet*>(const_cast< AddRadioInternet*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddRadioInternet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
