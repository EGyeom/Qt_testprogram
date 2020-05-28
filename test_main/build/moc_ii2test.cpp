/****************************************************************************
** Meta object code from reading C++ file 'ii2test.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ii2test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ii2test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ii2test[] = {

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
       9,    8,    8,    8, 0x08,
      33,    8,    8,    8, 0x08,
      54,    8,    8,    8, 0x08,
      78,   75,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ii2test[] = {
    "ii2test\0\0on_pushButton_clicked()\0"
    "on_send_bt_clicked()\0on_read_bt_clicked()\0"
    "id\0on_buttonGroup_buttonClicked(int)\0"
};

void ii2test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ii2test *_t = static_cast<ii2test *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_send_bt_clicked(); break;
        case 2: _t->on_read_bt_clicked(); break;
        case 3: _t->on_buttonGroup_buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ii2test::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ii2test::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ii2test,
      qt_meta_data_ii2test, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ii2test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ii2test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ii2test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ii2test))
        return static_cast<void*>(const_cast< ii2test*>(this));
    return QWidget::qt_metacast(_clname);
}

int ii2test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
