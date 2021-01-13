#ifndef TREECLASS_H
#define TREECLASS_H
#include <QAbstractItemModel>
#include <QModelIndex>

class TreeClass : QAbstractItemModel
{
    Q_OBJECT

public:
    TreeClass();
    void rowCount(const QModelIndex &parent) const;
    void columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QModelIndex parent(const QModelIndex &child) const;
    QModelIndex index(int row, int column, const QModelIndex &parent) const;





};

#endif // TREECLASS_H
