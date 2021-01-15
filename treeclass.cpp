#include "treeclass.h"

TreeClass::TreeClass(QObject *parent): QAbstractItemModel(parent) {

    _rootItem = new QObject(this);
}
//TreeClass::TreeClass(): QAbstractItemModel {  }
//------------------------------------------
int TreeClass::rowCount(const QModelIndex &parent) const
{
    return 3;
}
//---------------------------------------
int TreeClass::columnCount(const QModelIndex &parent) const
{
    return 3;
}
//--------------------------------------------
QVariant TreeClass::data(const QModelIndex &index, int role) const
{

    qDebug() << "data: index row " + QString::number(index.row()) + " column " + QString::number(index.column()) + " role " + QString::number(role); //exit(1);

    if (!index.isValid()) return QVariant();
    if (role == Qt::DisplayRole) {
        QObject* yy = new QObject;
        yy = static_cast<QObject*>(index.internalPointer());
        return yy->property(colu.at(index.column()).toUtf8());
    }
    return QVariant();

}
//-----------------------------------------------
QModelIndex TreeClass::index(int row, int column, const QModelIndex &parent) const
{
      if (!hasIndex(row, column, parent)) return QModelIndex();

      QObject* parentObj = new QObject;
      parentObj = static_cast<QObject*>(parent.internalPointer());


      return createIndex(row, column, parentObj->children().at(row));
}
//-------------------------------------------------
QModelIndex TreeClass::parent(const QModelIndex &child) const
{
    QObject* childObj = new QObject;
    childObj = static_cast<QObject*>(child.internalPointer());
    QObject* parentObj = childObj->parent();

    if (parentObj == _rootItem) return QModelIndex();

    QObject* grandParentObj = parentObj->parent();
    int row = grandParentObj->children().indexOf(parentObj);
    return createIndex(row, 3, parentObj);
}
//-----------------------------------------------------------
void TreeClass::setColumns(QStringList columns)
{

 colu = columns;

}


