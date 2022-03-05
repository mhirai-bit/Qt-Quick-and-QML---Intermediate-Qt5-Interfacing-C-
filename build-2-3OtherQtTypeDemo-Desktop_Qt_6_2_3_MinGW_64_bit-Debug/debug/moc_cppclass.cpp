/****************************************************************************
** Meta object code from reading C++ file 'cppclass.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../2-3OtherQtTypeDemo/cppclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
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
    const uint offsetsAndSize[22];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CppClass_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CppClass_t qt_meta_stringdata_CppClass = {
    {
QT_MOC_LITERAL(0, 8), // "CppClass"
QT_MOC_LITERAL(9, 12), // "sendDateTime"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 13), // "datetimeparam"
QT_MOC_LITERAL(37, 8), // "sendTime"
QT_MOC_LITERAL(46, 9), // "timeparam"
QT_MOC_LITERAL(56, 7), // "cppSlot"
QT_MOC_LITERAL(64, 8), // "timeSlot"
QT_MOC_LITERAL(73, 4), // "time"
QT_MOC_LITERAL(78, 12), // "dateTimeSlot"
QT_MOC_LITERAL(91, 8) // "datetime"

    },
    "CppClass\0sendDateTime\0\0datetimeparam\0"
    "sendTime\0timeparam\0cppSlot\0timeSlot\0"
    "time\0dateTimeSlot\0datetime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CppClass[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   50,    2, 0x0a,    5 /* Public */,
       7,    1,   51,    2, 0x0a,    6 /* Public */,
       9,    1,   54,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,
    QMetaType::Void, QMetaType::QTime,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,    8,
    QMetaType::Void, QMetaType::QDateTime,   10,

       0        // eod
};

void CppClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CppClass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendDateTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->sendTime((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 2: _t->cppSlot(); break;
        case 3: _t->timeSlot((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 4: _t->dateTimeSlot((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CppClass::*)(QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CppClass::sendDateTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CppClass::*)(QTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CppClass::sendTime)) {
                *result = 1;
                return;
            }
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
, QtPrivate::TypeAndForceComplete<CppClass, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QDateTime, std::false_type>


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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CppClass::sendDateTime(QDateTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CppClass::sendTime(QTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
