/****************************************************************************
** Meta object code from reading C++ file 'listecours.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../archev2/gestionCours/listecours.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listecours.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ListeCours_t {
    QByteArrayData data[7];
    char stringdata[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListeCours_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListeCours_t qt_meta_stringdata_ListeCours = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ListeCours"
QT_MOC_LITERAL(1, 11, 13), // "askDisplayFen"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "fenInd"
QT_MOC_LITERAL(4, 33, 12), // "handleButton"
QT_MOC_LITERAL(5, 46, 11), // "inscription"
QT_MOC_LITERAL(6, 58, 1) // "s"

    },
    "ListeCours\0askDisplayFen\0\0fenInd\0"
    "handleButton\0inscription\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListeCours[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void ListeCours::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ListeCours *_t = static_cast<ListeCours *>(_o);
        switch (_id) {
        case 0: _t->askDisplayFen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleButton(); break;
        case 2: _t->inscription((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ListeCours::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ListeCours::askDisplayFen)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ListeCours::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ListeCours.data,
      qt_meta_data_ListeCours,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ListeCours::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListeCours::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ListeCours.stringdata))
        return static_cast<void*>(const_cast< ListeCours*>(this));
    return QWidget::qt_metacast(_clname);
}

int ListeCours::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ListeCours::askDisplayFen(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
