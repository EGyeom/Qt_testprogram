/****************************************************************************
** Meta object code from reading C++ file 'direction.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../direction.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'direction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Direction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      21,   10,   10,   10, 0x08,
      39,   10,   10,   10, 0x08,
      56,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Direction[] = {
    "Direction\0\0data(int)\0on_HIGH_clicked()\0"
    "on_LOW_clicked()\0keyPressEvent(QKeyEvent*)\0"
};

void Direction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Direction *_t = static_cast<Direction *>(_o);
        switch (_id) {
        case 0: _t->data((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_HIGH_clicked(); break;
        case 2: _t->on_LOW_clicked(); break;
        case 3: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Direction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Direction::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Direction,
      qt_meta_data_Direction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Direction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Direction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Direction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Direction))
        return static_cast<void*>(const_cast< Direction*>(this));
    return QWidget::qt_metacast(_clname);
}

int Direction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Direction::data(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
