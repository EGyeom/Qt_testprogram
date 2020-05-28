/****************************************************************************
** Meta object code from reading C++ file 'usb_test.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usb_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usb_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_usb_test[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x08,
      51,   10,    9,    9, 0x08,
      81,   10,    9,    9, 0x08,
     112,    9,    9,    9, 0x08,
     138,   10,    9,    9, 0x08,
     175,    9,    9,    9, 0x08,
     201,    9,    9,    9, 0x08,
     227,    9,    9,    9, 0x08,
     253,    9,    9,    9, 0x08,
     276,   10,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_usb_test[] = {
    "usb_test\0\0index\0on_tree_doubleClicked(QModelIndex)\0"
    "on_tree_expanded(QModelIndex)\0"
    "on_tree_collapsed(QModelIndex)\0"
    "on_pushButton_3_clicked()\0"
    "on_comboBox_currentIndexChanged(int)\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "updateOutputTextEdit()\0"
    "on_tree_clicked(QModelIndex)\0"
};

void usb_test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        usb_test *_t = static_cast<usb_test *>(_o);
        switch (_id) {
        case 0: _t->on_tree_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_tree_expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_tree_collapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_5_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->updateOutputTextEdit(); break;
        case 9: _t->on_tree_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData usb_test::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject usb_test::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_usb_test,
      qt_meta_data_usb_test, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &usb_test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *usb_test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *usb_test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_usb_test))
        return static_cast<void*>(const_cast< usb_test*>(this));
    return QWidget::qt_metacast(_clname);
}

int usb_test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
