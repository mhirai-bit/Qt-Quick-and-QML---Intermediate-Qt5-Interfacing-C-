/****************************************************************************
** Meta object code from reading C++ file 'counter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../4-4CounterDemoEnumVersion/counter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'counter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Counter_t {
    const uint offsetsAndSize[22];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Counter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Counter_t qt_meta_stringdata_Counter = {
    {
QT_MOC_LITERAL(0, 7), // "Counter"
QT_MOC_LITERAL(8, 12), // "countChanged"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 5), // "count"
QT_MOC_LITERAL(28, 9), // "upChanged"
QT_MOC_LITERAL(38, 2), // "up"
QT_MOC_LITERAL(41, 15), // "countingChanged"
QT_MOC_LITERAL(57, 5), // "start"
QT_MOC_LITERAL(63, 4), // "stop"
QT_MOC_LITERAL(68, 8), // "counting"
QT_MOC_LITERAL(77, 24) // "Counting::CountDirection"

    },
    "Counter\0countChanged\0\0count\0upChanged\0"
    "up\0countingChanged\0start\0stop\0counting\0"
    "Counting::CountDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Counter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   53, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    3 /* Public */,
       4,    1,   47,    2, 0x06,    5 /* Public */,
       6,    0,   50,    2, 0x06,    7 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   51,    2, 0x02,    8 /* Public */,
       8,    0,   52,    2, 0x02,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015103, uint(0), 0,
       9, 0x80000000 | 10, 0x0001510b, uint(2), 0,

       0        // eod
};

void Counter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Counter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->upChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->countingChanged(); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Counter::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Counter::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Counter::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Counter::upChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Counter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Counter::countingChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Counter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< Counting::CountDirection*>(_v) = _t->counting(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Counter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCount(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCounting(*reinterpret_cast< Counting::CountDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_Counter[] = {
    QMetaObject::SuperData::link<Counting::staticMetaObject>(),
    nullptr
};

const QMetaObject Counter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Counter.offsetsAndSize,
    qt_meta_data_Counter,
    qt_static_metacall,
    qt_meta_extradata_Counter,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Counter_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<Counting::CountDirection, std::true_type>, QtPrivate::TypeAndForceComplete<Counter, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

>,
    nullptr
} };


const QMetaObject *Counter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Counter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Counter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Counter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Counter::countChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Counter::upChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Counter::countingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
