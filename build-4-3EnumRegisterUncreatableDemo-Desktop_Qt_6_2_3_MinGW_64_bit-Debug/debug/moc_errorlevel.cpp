/****************************************************************************
** Meta object code from reading C++ file 'errorlevel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../4-3EnumRegisterUncreatableDemo/errorlevel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'errorlevel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ErrorLevel_t {
    const uint offsetsAndSize[12];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ErrorLevel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ErrorLevel_t qt_meta_stringdata_ErrorLevel = {
    {
QT_MOC_LITERAL(0, 10), // "ErrorLevel"
QT_MOC_LITERAL(11, 10), // "ErrorValue"
QT_MOC_LITERAL(22, 11), // "INFORMATION"
QT_MOC_LITERAL(34, 7), // "WARNING"
QT_MOC_LITERAL(42, 5), // "DEBUG"
QT_MOC_LITERAL(48, 7) // "MESSAGE"

    },
    "ErrorLevel\0ErrorValue\0INFORMATION\0"
    "WARNING\0DEBUG\0MESSAGE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ErrorLevel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(ErrorLevel::INFORMATION),
       3, uint(ErrorLevel::WARNING),
       4, uint(ErrorLevel::DEBUG),
       5, uint(ErrorLevel::MESSAGE),

       0        // eod
};

const QMetaObject ErrorLevel::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_ErrorLevel.offsetsAndSize,
    qt_meta_data_ErrorLevel,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ErrorLevel_t
, QtPrivate::TypeAndForceComplete<ErrorLevel, std::true_type>



>,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
