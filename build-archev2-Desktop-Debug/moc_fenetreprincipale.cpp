/****************************************************************************
** Meta object code from reading C++ file 'fenetreprincipale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../archev2/gestionWindow/fenetreprincipale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fenetreprincipale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FenetrePrincipale_t {
    QByteArrayData data[16];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FenetrePrincipale_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FenetrePrincipale_t qt_meta_stringdata_FenetrePrincipale = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 6),
QT_MOC_LITERAL(4, 40, 11),
QT_MOC_LITERAL(5, 52, 11),
QT_MOC_LITERAL(6, 64, 1),
QT_MOC_LITERAL(7, 66, 8),
QT_MOC_LITERAL(8, 75, 2),
QT_MOC_LITERAL(9, 78, 14),
QT_MOC_LITERAL(10, 93, 8),
QT_MOC_LITERAL(11, 102, 12),
QT_MOC_LITERAL(12, 115, 12),
QT_MOC_LITERAL(13, 128, 9),
QT_MOC_LITERAL(14, 138, 11),
QT_MOC_LITERAL(15, 150, 15)
    },
    "FenetrePrincipale\0askDisplayFen\0\0"
    "fenInd\0askPersonCo\0std::string\0s\0"
    "askCours\0ss\0slotDisplayFen\0fenIndex\0"
    "slotPersonCo\0slotAddCours\0connecter\0"
    "deconnecter\0accueilRedirect\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FenetrePrincipale[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    1,   62,    2, 0x06,
       7,    2,   65,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    1,   70,    2, 0x0a,
      11,    1,   73,    2, 0x0a,
      12,    2,   76,    2, 0x0a,
      13,    0,   81,    2, 0x0a,
      14,    0,   82,    2, 0x0a,
      15,    0,   83,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FenetrePrincipale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FenetrePrincipale *_t = static_cast<FenetrePrincipale *>(_o);
        switch (_id) {
        case 0: _t->askDisplayFen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->askPersonCo((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->askCours((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 3: _t->slotDisplayFen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotPersonCo((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 5: _t->slotAddCours((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 6: _t->connecter(); break;
        case 7: _t->deconnecter(); break;
        case 8: _t->accueilRedirect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FenetrePrincipale::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FenetrePrincipale::askDisplayFen)) {
                *result = 0;
            }
        }
        {
            typedef void (FenetrePrincipale::*_t)(std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FenetrePrincipale::askPersonCo)) {
                *result = 1;
            }
        }
        {
            typedef void (FenetrePrincipale::*_t)(std::string , std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FenetrePrincipale::askCours)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject FenetrePrincipale::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FenetrePrincipale.data,
      qt_meta_data_FenetrePrincipale,  qt_static_metacall, 0, 0}
};


const QMetaObject *FenetrePrincipale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FenetrePrincipale::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FenetrePrincipale.stringdata))
        return static_cast<void*>(const_cast< FenetrePrincipale*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FenetrePrincipale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void FenetrePrincipale::askDisplayFen(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FenetrePrincipale::askPersonCo(std::string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FenetrePrincipale::askCours(std::string _t1, std::string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
