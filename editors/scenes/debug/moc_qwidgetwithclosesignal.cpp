/****************************************************************************
** Meta object code from reading C++ file 'qwidgetwithclosesignal.h'
**
** Created: Fri 2. Nov 07:48:29 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwidgetwithclosesignal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidgetwithclosesignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QWidgetWithCloseSignal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   23,   24,   23, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QWidgetWithCloseSignal[] = {
    "QWidgetWithCloseSignal\0\0bool\0"
    "WindowClosed(QWidget*)\0"
};

void QWidgetWithCloseSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QWidgetWithCloseSignal *_t = static_cast<QWidgetWithCloseSignal *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->WindowClosed((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QWidgetWithCloseSignal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QWidgetWithCloseSignal::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QWidgetWithCloseSignal,
      qt_meta_data_QWidgetWithCloseSignal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QWidgetWithCloseSignal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QWidgetWithCloseSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QWidgetWithCloseSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWidgetWithCloseSignal))
        return static_cast<void*>(const_cast< QWidgetWithCloseSignal*>(this));
    return QWidget::qt_metacast(_clname);
}

int QWidgetWithCloseSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
bool QWidgetWithCloseSignal::WindowClosed(QWidget * _t1)
{
    bool _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE