/****************************************************************************
** Meta object code from reading C++ file 'test_main.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../test_main.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_test_main[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      29,   10,   10,   10, 0x08,
      55,   10,   10,   10, 0x08,
      77,   10,   10,   10, 0x08,
      94,   10,   10,   10, 0x08,
     111,   10,   10,   10, 0x08,
     129,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_test_main[] = {
    "test_main\0\0on_gpio_clicked()\0"
    "on_pushButton_9_clicked()\0"
    "on_ethernet_clicked()\0on_iic_clicked()\0"
    "on_spi_clicked()\0on_uart_clicked()\0"
    "on_usb_clicked()\0"
};

void test_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        test_main *_t = static_cast<test_main *>(_o);
        switch (_id) {
        case 0: _t->on_gpio_clicked(); break;
        case 1: _t->on_pushButton_9_clicked(); break;
        case 2: _t->on_ethernet_clicked(); break;
        case 3: _t->on_iic_clicked(); break;
        case 4: _t->on_spi_clicked(); break;
        case 5: _t->on_uart_clicked(); break;
        case 6: _t->on_usb_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData test_main::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject test_main::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_test_main,
      qt_meta_data_test_main, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &test_main::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *test_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *test_main::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_test_main))
        return static_cast<void*>(const_cast< test_main*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int test_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
