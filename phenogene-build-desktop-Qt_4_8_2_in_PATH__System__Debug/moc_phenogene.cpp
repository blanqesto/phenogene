/****************************************************************************
** Meta object code from reading C++ file 'phenogene.h'
**
** Created: Tue Jun 18 21:23:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../phenogene/phenogene.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'phenogene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phenogene[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      35,   10,   10,   10, 0x08,
      59,   10,   10,   10, 0x08,
      85,   10,   10,   10, 0x08,
     111,   10,   10,   10, 0x08,
     137,   10,   10,   10, 0x08,
     163,   10,   10,   10, 0x08,
     193,   10,   10,   10, 0x08,
     225,   10,   10,   10, 0x08,
     257,   10,   10,   10, 0x08,
     289,   10,   10,   10, 0x08,
     321,   10,   10,   10, 0x08,
     360,  349,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Phenogene[] = {
    "Phenogene\0\0on_quitButton_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_6_clicked()\0"
    "on_lineEdit_editingFinished()\0"
    "on_lineEdit_2_editingFinished()\0"
    "on_lineEdit_3_editingFinished()\0"
    "on_lineEdit_4_editingFinished()\0"
    "on_lineEdit_5_editingFinished()\0"
    "on_textEdit_4_textChanged()\0currentRow\0"
    "on_listWidget_currentRowChanged(int)\0"
};

void Phenogene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Phenogene *_t = static_cast<Phenogene *>(_o);
        switch (_id) {
        case 0: _t->on_quitButton_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_pushButton_5_clicked(); break;
        case 5: _t->on_pushButton_6_clicked(); break;
        case 6: _t->on_lineEdit_editingFinished(); break;
        case 7: _t->on_lineEdit_2_editingFinished(); break;
        case 8: _t->on_lineEdit_3_editingFinished(); break;
        case 9: _t->on_lineEdit_4_editingFinished(); break;
        case 10: _t->on_lineEdit_5_editingFinished(); break;
        case 11: _t->on_textEdit_4_textChanged(); break;
        case 12: _t->on_listWidget_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phenogene::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phenogene::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Phenogene,
      qt_meta_data_Phenogene, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phenogene::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phenogene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phenogene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phenogene))
        return static_cast<void*>(const_cast< Phenogene*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Phenogene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
