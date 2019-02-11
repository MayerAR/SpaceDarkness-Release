/****************************************************************************
** Meta object code from reading C++ file 'gameoptionstab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../C++/QtCreator/SpaceDarkness/mainController/optionsDialog/gameoptionstab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameoptionstab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameOptionsTab_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameOptionsTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameOptionsTab_t qt_meta_stringdata_GameOptionsTab = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GameOptionsTab"
QT_MOC_LITERAL(1, 15, 13), // "signalChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "acceptCurrentChanges"
QT_MOC_LITERAL(4, 51, 11) // "slotChanged"

    },
    "GameOptionsTab\0signalChanged\0\0"
    "acceptCurrentChanges\0slotChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameOptionsTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameOptionsTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameOptionsTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalChanged(); break;
        case 1: _t->acceptCurrentChanges(); break;
        case 2: _t->slotChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameOptionsTab::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameOptionsTab::signalChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GameOptionsTab::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_GameOptionsTab.data,
    qt_meta_data_GameOptionsTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameOptionsTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameOptionsTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameOptionsTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameOptionsTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GameOptionsTab::signalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ObjectOptionsTab_t {
    QByteArrayData data[12];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ObjectOptionsTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ObjectOptionsTab_t qt_meta_stringdata_ObjectOptionsTab = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ObjectOptionsTab"
QT_MOC_LITERAL(1, 17, 13), // "signalChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "signalGoodName"
QT_MOC_LITERAL(4, 47, 19), // "checkNameOfSettings"
QT_MOC_LITERAL(5, 67, 4), // "name"
QT_MOC_LITERAL(6, 72, 11), // "slotChanged"
QT_MOC_LITERAL(7, 84, 11), // "currentName"
QT_MOC_LITERAL(8, 96, 20), // "acceptCurrentChanges"
QT_MOC_LITERAL(9, 117, 27), // "on_deletePushButton_clicked"
QT_MOC_LITERAL(10, 145, 27), // "on_createPushButton_clicked"
QT_MOC_LITERAL(11, 173, 27) // "on_changePushButton_clicked"

    },
    "ObjectOptionsTab\0signalChanged\0\0"
    "signalGoodName\0checkNameOfSettings\0"
    "name\0slotChanged\0currentName\0"
    "acceptCurrentChanges\0on_deletePushButton_clicked\0"
    "on_createPushButton_clicked\0"
    "on_changePushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ObjectOptionsTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   56,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ObjectOptionsTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ObjectOptionsTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalChanged(); break;
        case 1: _t->signalGoodName(); break;
        case 2: _t->checkNameOfSettings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->acceptCurrentChanges(); break;
        case 5: _t->on_deletePushButton_clicked(); break;
        case 6: _t->on_createPushButton_clicked(); break;
        case 7: _t->on_changePushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ObjectOptionsTab::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectOptionsTab::signalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ObjectOptionsTab::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ObjectOptionsTab::signalGoodName)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ObjectOptionsTab::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ObjectOptionsTab.data,
    qt_meta_data_ObjectOptionsTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ObjectOptionsTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ObjectOptionsTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ObjectOptionsTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ObjectOptionsTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ObjectOptionsTab::signalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ObjectOptionsTab::signalGoodName()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
