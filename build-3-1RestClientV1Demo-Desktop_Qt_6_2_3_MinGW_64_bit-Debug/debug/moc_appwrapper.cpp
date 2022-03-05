/****************************************************************************
** Meta object code from reading C++ file 'appwrapper.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../3-1RestClientV1Demo/appwrapper.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appwrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppWrapper_t {
    const uint offsetsAndSize[14];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AppWrapper_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AppWrapper_t qt_meta_stringdata_AppWrapper = {
    {
QT_MOC_LITERAL(0, 10), // "AppWrapper"
QT_MOC_LITERAL(11, 13), // "dataReadyRead"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 16), // "dataReadFinished"
QT_MOC_LITERAL(43, 11), // "fetchPoints"
QT_MOC_LITERAL(55, 6), // "number"
QT_MOC_LITERAL(62, 10) // "removeLast"

    },
    "AppWrapper\0dataReadyRead\0\0dataReadFinished\0"
    "fetchPoints\0number\0removeLast"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppWrapper[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x02,    3 /* Public */,
       6,    1,   43,    2, 0x02,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void AppWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppWrapper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReadyRead(); break;
        case 1: _t->dataReadFinished(); break;
        case 2: _t->fetchPoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->removeLast((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AppWrapper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppWrapper.offsetsAndSize,
    qt_meta_data_AppWrapper,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AppWrapper_t
, QtPrivate::TypeAndForceComplete<AppWrapper, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *AppWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
