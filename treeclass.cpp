#include "treeclass.h"

TreeClass::TreeClass(QObject *parent): QAbstractItemModel(parent)
{
                            }
//------------------------------------------
int TreeClass::rowCount(const QModelIndex &parent) const
{
    return 3;
}
//---------------------------------------
int TreeClass::columnCount(const QModelIndex &parent) const
{
    return 1;
}
//--------------------------------------------
QVariant TreeClass::data(const QModelIndex &index, int role) const
{

    return 667;
}
//-----------------------------------------------
QModelIndex TreeClass::index(int row, int column, const QModelIndex &parent) const
{

    return QModelIndex();
}
//-------------------------------------------------
QModelIndex TreeClass::parent(const QModelIndex &child) const
{

    return QModelIndex();
}



