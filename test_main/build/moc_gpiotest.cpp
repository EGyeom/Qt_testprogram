/****************************************************************************
** Meta object code from reading C++ file 'gpiotest.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gpiotest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpiotest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gpiotest[] = {

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
      10,    9,    9,    9, 0x08,
      30,    9,    9,    9, 0x08,
      59,   53,    9,    9, 0x08,
      90,   85,    9,    9, 0x08,
     107,    9,    9,    9, 0x08,
     129,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gpiotest[] = {
    "gpiotest\0\0on_Set_BT_clicked()\0"
    "on_Output_BT_clicked()\0event\0"
    "keyPressEvent(QKeyEvent*)\0data\0"
    "DataReceive(int)\0on_Input_BT_clicked()\0"
    "on_pushButton_clicked()\0"
};

void gpiotest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        gpiotest *_t = static_cast<gpiotest *>(_o);
        switch (_id) {
        case 0: _t->on_Set_BT_clicked(); break;
        case 1: _t->on_Output_BT_clicked(); break;
        case 2: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 3: _t->DataReceive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_Input_BT_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gpiotest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gpiotest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gpiotest,
      qt_meta_data_gpiotest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gpiotest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gpiotest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gpiotest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gpiotest))
        return static_cast<void*>(const_cast< gpiotest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int gpiotest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
