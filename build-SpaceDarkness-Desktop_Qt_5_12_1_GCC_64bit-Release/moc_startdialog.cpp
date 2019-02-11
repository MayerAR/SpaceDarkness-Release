/****************************************************************************
** Meta object code from reading C++ file 'startdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../C++/QtCreator/SpaceDarkness/mainController/startDialog/startdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_startDialog_t {
    QByteArrayData data[12];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_startDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_startDialog_t qt_meta_stringdata_startDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "startDialog"
QT_MOC_LITERAL(1, 12, 15), // "signalStartGame"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "signalEndProgramm"
QT_MOC_LITERAL(4, 47, 26), // "on_startPushButton_clicked"
QT_MOC_LITERAL(5, 74, 28), // "on_optionsPushButton_clicked"
QT_MOC_LITERAL(6, 103, 25), // "on_keysPushButton_clicked"
QT_MOC_LITERAL(7, 129, 27), // "on_leaderPushButton_clicked"
QT_MOC_LITERAL(8, 157, 26), // "on_aboutPushButton_clicked"
QT_MOC_LITERAL(9, 184, 28), // "on_aboutQtPushButton_clicked"
QT_MOC_LITERAL(10, 213, 15), // "slotCreateStage"
QT_MOC_LITERAL(11, 229, 10) // "pixmapPath"

    },
    "startDialog\0signalStartGame\0\0"
    "signalEndProgramm\0on_startPushButton_clicked\0"
    "on_optionsPushButton_clicked\0"
    "on_keysPushButton_clicked\0"
    "on_leaderPushButton_clicked\0"
    "on_aboutPushButton_clicked\0"
    "on_aboutQtPushButton_clicked\0"
    "slotCreateStage\0pixmapPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_startDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   63,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void startDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<startDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalStartGame((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->signalEndProgramm(); break;
        case 2: _t->on_startPushButton_clicked(); break;
        case 3: _t->on_optionsPushButton_clicked(); break;
        case 4: _t->on_keysPushButton_clicked(); break;
        case 5: _t->on_leaderPushButton_clicked(); break;
        case 6: _t->on_aboutPushButton_clicked(); break;
        case 7: _t->on_aboutQtPushButton_clicked(); break;
        case 8: _t->slotCreateStage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (startDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&startDialog::signalStartGame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (startDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&startDialog::signalEndProgramm)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject startDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_startDialog.data,
    qt_meta_data_startDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *startDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *startDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_startDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int startDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void startDialog::signalStartGame(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void startDialog::signalEndProgramm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
