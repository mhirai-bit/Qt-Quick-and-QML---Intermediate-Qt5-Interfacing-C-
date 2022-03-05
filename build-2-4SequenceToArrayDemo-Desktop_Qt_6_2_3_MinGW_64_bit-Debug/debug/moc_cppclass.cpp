/****************************************************************************
** Meta object code from reading C++ file 'cppclass.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../2-4SequenceToArrayDemo/cppclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cppclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CppClass_t {
    const uint offsetsAndSize[10];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CppClass_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CppClass_t qt_meta_stringdata_CppClass = {
    {
QT_MOC_LITERAL(0, 8), // "CppClass"
QT_MOC_LITERAL(9, 13), // "qmlArrayToCpp"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 6), // "vector"
QT_MOC_LITERAL(31, 15) // "retrieveStrings"

    },
    "CppClass\0qmlArrayToCpp\0\0vector\0"
    "retrieveStrings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CppClass[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x02,    1 /* Public */,
       4,    0,   29,    2, 0x02,    3 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::QStringList,

       0        // eod
};

void CppClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CppClass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->qmlArrayToCpp((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 1: { QList<QString> _r = _t->retrieveStrings();
            if (_a[0]) *reinterpret_cast< QList<QString>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject CppClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CppClass.offsetsAndSize,
    qt_meta_data_CppClass,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CppClass_t
, QtPrivate::TypeAndForceComplete<CppClass, std::true_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>

>,
    nullptr
} };


const QMetaObject *CppClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CppClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CppClass.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CppClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
