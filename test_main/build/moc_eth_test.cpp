/****************************************************************************
** Meta object code from reading C++ file 'eth_test.h'
**
** Created: Thu Apr 16 18:57:16 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eth_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eth_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Eth_test[] = {

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
      10,    9,    9,    9, 0x08,
      53,   33,    9,    9, 0x08,
      95,    9,    9,    9, 0x08,
     115,    9,    9,    9, 0x08,
     135,    9,    9,    9, 0x08,
     155,    9,    9,    9, 0x08,
     189,    9,    9,    9, 0x08,
     211,    9,    9,    9, 0x08,
     247,  237,  232,    9, 0x08,
     283,  277,    9,    9, 0x08,
     320,    9,    9,    9, 0x08,
     342,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Eth_test[] = {
    "Eth_test\0\0updateOutputTextEdit()\0"
    "exitCode,exitStatus\0"
    "processFinished(int,QProcess::ExitStatus)\0"
    "on_IP_Set_clicked()\0on_NM_Set_clicked()\0"
    "on_GW_Set_clicked()\0"
    "on_buttonGroup_buttonPressed(int)\0"
    "on_DA_Start_clicked()\0on_DA_Stop_clicked()\0"
    "bool\0obj,event\0eventFilter(QObject*,QEvent*)\0"
    "error\0processError(QProcess::ProcessError)\0"
    "updateErrorTextEdit()\0on_pushButton_clicked()\0"
};

void Eth_test::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Eth_test *_t = static_cast<Eth_test *>(_o);
        switch (_id) {
        case 0: _t->updateOutputTextEdit(); break;
        case 1: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 2: _t->on_IP_Set_clicked(); break;
        case 3: _t->on_NM_Set_clicked(); break;
        case 4: _t->on_GW_Set_clicked(); break;
        case 5: _t->on_buttonGroup_buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_DA_Start_clicked(); break;
        case 7: _t->on_DA_Stop_clicked(); break;
        case 8: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 10: _t->updateErrorTextEdit(); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Eth_test::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Eth_test::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Eth_test,
      qt_meta_data_Eth_test, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Eth_test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Eth_test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Eth_test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Eth_test))
        return static_cast<void*>(const_cast< Eth_test*>(this));
    return QWidget::qt_metacast(_clname);
}

int Eth_test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
