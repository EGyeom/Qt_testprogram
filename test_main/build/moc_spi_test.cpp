/****************************************************************************
** Meta object code from reading C++ file 'spi_test.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spi_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spi_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_spi_test[] = {

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
      13,   10,    9,    9, 0x08,
      47,    9,    9,    9, 0x08,
      68,    9,    9,    9, 0x08,
      98,   92,    9,    9, 0x08,
     131,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_spi_test[] = {
    "spi_test\0\0id\0on_buttonGroup_buttonClicked(int)\0"
    "on_send_bt_clicked()\0on_pushButton_clicked()\0"
    "index\0on_Port_currentIndexChanged(int)\0"
    "on_read_bt_clicked()\0"
};

void spi_test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        spi_test *_t = static_cast<spi_test *>(_o);
        switch (_id) {
        case 0: _t->on_buttonGroup_buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_send_bt_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_Port_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_read_bt_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData spi_test::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject spi_test::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_spi_test,
      qt_meta_data_spi_test, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &spi_test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *spi_test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *spi_test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_spi_test))
        return static_cast<void*>(const_cast< spi_test*>(this));
    return QWidget::qt_metacast(_clname);
}

int spi_test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
