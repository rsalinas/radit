/****************************************************************************
** Meta object code from reading C++ file 'Lista.h'
**
** Created: Thu Mar 19 17:21:01 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Lista.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lista.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Lista[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      21,    6,    6,    6, 0x08,
      35,    6,    6,    6, 0x08,
      48,    6,    6,    6, 0x08,
      66,    6,    6,    6, 0x08,
      76,    6,    6,    6, 0x08,
      93,    6,    6,    6, 0x08,
     106,    6,    6,    6, 0x08,
     117,    6,    6,    6, 0x08,
     128,    6,    6,    6, 0x08,
     149,    6,    6,    6, 0x08,
     169,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Lista[] = {
    "Lista\0\0ClickCortar()\0ClickCopiar()\0"
    "ClickPegar()\0ClickAddPisador()\0AddHora()\0"
    "AddTemperatura()\0AddHumedad()\0AddPista()\0"
    "AddRadio()\0DuracionActualizar()\0"
    "DuracionSeleccion()\0DuracionActualizarTodas()\0"
};

void Lista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Lista *_t = static_cast<Lista *>(_o);
        switch (_id) {
        case 0: _t->ClickCortar(); break;
        case 1: _t->ClickCopiar(); break;
        case 2: _t->ClickPegar(); break;
        case 3: _t->ClickAddPisador(); break;
        case 4: _t->AddHora(); break;
        case 5: _t->AddTemperatura(); break;
        case 6: _t->AddHumedad(); break;
        case 7: _t->AddPista(); break;
        case 8: _t->AddRadio(); break;
        case 9: _t->DuracionActualizar(); break;
        case 10: _t->DuracionSeleccion(); break;
        case 11: _t->DuracionActualizarTodas(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Lista::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Lista::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_Lista,
      qt_meta_data_Lista, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Lista::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Lista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Lista::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Lista))
        return static_cast<void*>(const_cast< Lista*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int Lista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
