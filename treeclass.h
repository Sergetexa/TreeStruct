#ifndef TREECLASS_H
#define TREECLASS_H
#include <QAbstractItemModel>
#include <QModelIndex>
#include <QDebug>

class TreeClass : public QAbstractItemModel
{
    Q_OBJECT

public:
    TreeClass(QObject *parent);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QModelIndex parent(const QModelIndex &child) const;
    QModelIndex index(int row, int column, const QModelIndex &parent) const;

    void setColumns(QStringList colu);

private:
    QObject itemTreeCell;

protected:
    QStringList colu;
    QObject* _rootItem;


};

#endif // TREECLASS_H
