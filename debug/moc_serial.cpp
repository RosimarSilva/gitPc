/****************************************************************************
** Meta object code from reading C++ file 'serial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PCUsb/serial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Serial_t {
    QByteArrayData data[54];
    char stringdata0[510];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Serial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Serial_t qt_meta_stringdata_Serial = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Serial"
QT_MOC_LITERAL(1, 7, 10), // "diaChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "mesChanged"
QT_MOC_LITERAL(4, 30, 10), // "anoChanged"
QT_MOC_LITERAL(5, 41, 11), // "horaChanged"
QT_MOC_LITERAL(6, 53, 13), // "minutoChanged"
QT_MOC_LITERAL(7, 67, 12), // "sens1Changed"
QT_MOC_LITERAL(8, 80, 12), // "sens2Changed"
QT_MOC_LITERAL(9, 93, 12), // "sens3Changed"
QT_MOC_LITERAL(10, 106, 12), // "sens4Changed"
QT_MOC_LITERAL(11, 119, 12), // "sens5Changed"
QT_MOC_LITERAL(12, 132, 16), // "tempDormichanged"
QT_MOC_LITERAL(13, 149, 17), // "tempAcordachanged"
QT_MOC_LITERAL(14, 167, 13), // "esperaChanged"
QT_MOC_LITERAL(15, 181, 11), // "funcChanged"
QT_MOC_LITERAL(16, 193, 12), // "readBytesCam"
QT_MOC_LITERAL(17, 206, 10), // "QList<int>"
QT_MOC_LITERAL(18, 217, 13), // "atualizaHoras"
QT_MOC_LITERAL(19, 231, 11), // "atualizaMed"
QT_MOC_LITERAL(20, 243, 7), // "funcPai"
QT_MOC_LITERAL(21, 251, 6), // "espMae"
QT_MOC_LITERAL(22, 258, 6), // "setDia"
QT_MOC_LITERAL(23, 265, 5), // "value"
QT_MOC_LITERAL(24, 271, 6), // "setMes"
QT_MOC_LITERAL(25, 278, 6), // "setAno"
QT_MOC_LITERAL(26, 285, 7), // "setHora"
QT_MOC_LITERAL(27, 293, 9), // "setMinuto"
QT_MOC_LITERAL(28, 303, 6), // "dataOk"
QT_MOC_LITERAL(29, 310, 8), // "setSens1"
QT_MOC_LITERAL(30, 319, 8), // "setSens2"
QT_MOC_LITERAL(31, 328, 8), // "setSens3"
QT_MOC_LITERAL(32, 337, 8), // "setSens4"
QT_MOC_LITERAL(33, 346, 6), // "setLed"
QT_MOC_LITERAL(34, 353, 6), // "comand"
QT_MOC_LITERAL(35, 360, 10), // "initSerail"
QT_MOC_LITERAL(36, 371, 10), // "setTemDorm"
QT_MOC_LITERAL(37, 382, 5), // "sinal"
QT_MOC_LITERAL(38, 388, 11), // "setTempAcor"
QT_MOC_LITERAL(39, 400, 8), // "alarmeOk"
QT_MOC_LITERAL(40, 409, 9), // "setEspera"
QT_MOC_LITERAL(41, 419, 1), // "c"
QT_MOC_LITERAL(42, 421, 11), // "setFunciona"
QT_MOC_LITERAL(43, 433, 5), // "myDia"
QT_MOC_LITERAL(44, 439, 5), // "myMes"
QT_MOC_LITERAL(45, 445, 5), // "myAno"
QT_MOC_LITERAL(46, 451, 6), // "myHora"
QT_MOC_LITERAL(47, 458, 8), // "myMinuto"
QT_MOC_LITERAL(48, 467, 5), // "sens1"
QT_MOC_LITERAL(49, 473, 5), // "sens2"
QT_MOC_LITERAL(50, 479, 5), // "sens3"
QT_MOC_LITERAL(51, 485, 5), // "sens4"
QT_MOC_LITERAL(52, 491, 8), // "tempDorm"
QT_MOC_LITERAL(53, 500, 9) // "tempAcord"

    },
    "Serial\0diaChanged\0\0mesChanged\0anoChanged\0"
    "horaChanged\0minutoChanged\0sens1Changed\0"
    "sens2Changed\0sens3Changed\0sens4Changed\0"
    "sens5Changed\0tempDormichanged\0"
    "tempAcordachanged\0esperaChanged\0"
    "funcChanged\0readBytesCam\0QList<int>\0"
    "atualizaHoras\0atualizaMed\0funcPai\0"
    "espMae\0setDia\0value\0setMes\0setAno\0"
    "setHora\0setMinuto\0dataOk\0setSens1\0"
    "setSens2\0setSens3\0setSens4\0setLed\0"
    "comand\0initSerail\0setTemDorm\0sinal\0"
    "setTempAcor\0alarmeOk\0setEspera\0c\0"
    "setFunciona\0myDia\0myMes\0myAno\0myHora\0"
    "myMinuto\0sens1\0sens2\0sens3\0sens4\0"
    "tempDorm\0tempAcord"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Serial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
      11,  258, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    0,  195,    2, 0x06 /* Public */,
       4,    0,  196,    2, 0x06 /* Public */,
       5,    0,  197,    2, 0x06 /* Public */,
       6,    0,  198,    2, 0x06 /* Public */,
       7,    0,  199,    2, 0x06 /* Public */,
       8,    0,  200,    2, 0x06 /* Public */,
       9,    0,  201,    2, 0x06 /* Public */,
      10,    0,  202,    2, 0x06 /* Public */,
      11,    0,  203,    2, 0x06 /* Public */,
      12,    0,  204,    2, 0x06 /* Public */,
      13,    0,  205,    2, 0x06 /* Public */,
      14,    0,  206,    2, 0x06 /* Public */,
      15,    0,  207,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  208,    2, 0x0a /* Public */,
      18,    0,  209,    2, 0x0a /* Public */,
      19,    0,  210,    2, 0x0a /* Public */,
      20,    0,  211,    2, 0x0a /* Public */,
      21,    0,  212,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      22,    1,  213,    2, 0x02 /* Public */,
      24,    1,  216,    2, 0x02 /* Public */,
      25,    1,  219,    2, 0x02 /* Public */,
      26,    1,  222,    2, 0x02 /* Public */,
      27,    1,  225,    2, 0x02 /* Public */,
      28,    0,  228,    2, 0x02 /* Public */,
      29,    1,  229,    2, 0x02 /* Public */,
      30,    1,  232,    2, 0x02 /* Public */,
      31,    1,  235,    2, 0x02 /* Public */,
      32,    1,  238,    2, 0x02 /* Public */,
      33,    1,  241,    2, 0x02 /* Public */,
      35,    0,  244,    2, 0x02 /* Public */,
      36,    1,  245,    2, 0x02 /* Public */,
      38,    1,  248,    2, 0x02 /* Public */,
      39,    0,  251,    2, 0x02 /* Public */,
      40,    1,  252,    2, 0x02 /* Public */,
      42,    1,  255,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,   37,
    QMetaType::Void, QMetaType::Char,   37,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   41,

 // properties: name, type, flags
      43, QMetaType::Int, 0x00495003,
      44, QMetaType::Int, 0x00495003,
      45, QMetaType::Int, 0x00495003,
      46, QMetaType::Int, 0x00495003,
      47, QMetaType::Int, 0x00495003,
      48, QMetaType::Int, 0x00495103,
      49, QMetaType::Int, 0x00495103,
      50, QMetaType::Int, 0x00495103,
      51, QMetaType::Int, 0x00495103,
      52, QMetaType::Int, 0x00495003,
      53, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
      10,
      11,

       0        // eod
};

void Serial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Serial *_t = static_cast<Serial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->diaChanged(); break;
        case 1: _t->mesChanged(); break;
        case 2: _t->anoChanged(); break;
        case 3: _t->horaChanged(); break;
        case 4: _t->minutoChanged(); break;
        case 5: _t->sens1Changed(); break;
        case 6: _t->sens2Changed(); break;
        case 7: _t->sens3Changed(); break;
        case 8: _t->sens4Changed(); break;
        case 9: _t->sens5Changed(); break;
        case 10: _t->tempDormichanged(); break;
        case 11: _t->tempAcordachanged(); break;
        case 12: _t->esperaChanged(); break;
        case 13: _t->funcChanged(); break;
        case 14: { QList<int> _r = _t->readBytesCam();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->atualizaHoras(); break;
        case 16: _t->atualizaMed(); break;
        case 17: _t->funcPai(); break;
        case 18: _t->espMae(); break;
        case 19: _t->setDia((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 20: _t->setMes((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 21: _t->setAno((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 22: _t->setHora((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 23: _t->setMinuto((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->dataOk(); break;
        case 25: _t->setSens1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->setSens2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setSens3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setSens4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setLed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->initSerail(); break;
        case 31: _t->setTemDorm((*reinterpret_cast< const char(*)>(_a[1]))); break;
        case 32: _t->setTempAcor((*reinterpret_cast< const char(*)>(_a[1]))); break;
        case 33: _t->alarmeOk(); break;
        case 34: _t->setEspera((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->setFunciona((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::diaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::mesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::anoChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::horaChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::minutoChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::sens1Changed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::sens2Changed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::sens3Changed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::sens4Changed)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::sens5Changed)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::tempDormichanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::tempAcordachanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::esperaChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (Serial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Serial::funcChanged)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Serial *_t = static_cast<Serial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->myDia(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->myMes(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->myAno(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->myHora(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->myMinuto(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->sens1(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->sens2(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->sens3(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->sens4(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->tempDorm(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->tempAcord(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Serial *_t = static_cast<Serial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDia(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMes(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAno(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setHora(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMinuto(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSens1(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setSens2(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setSens3(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setSens4(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setTemDorm(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setTempAcor(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Serial::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Serial.data,
      qt_meta_data_Serial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Serial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Serial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Serial.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Serial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 36;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Serial::diaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Serial::mesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Serial::anoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Serial::horaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Serial::minutoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Serial::sens1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Serial::sens2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Serial::sens3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Serial::sens4Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Serial::sens5Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Serial::tempDormichanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Serial::tempAcordachanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Serial::esperaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Serial::funcChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
