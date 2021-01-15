#include <QApplication>
#include <QTreeView>
#include <treeclass.h>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TreeClass *modelTree = new TreeClass(nullptr);

    QStringList columns;
    columns << "ii" << "oo" << "jj";
    modelTree->setColumns(columns);

    QObject item1;
    item1.setObjectName("yy");

    QTreeView *MyTree = new QTreeView();
    MyTree->setModel(modelTree);
    MyTree->show();


    return a.exec();

}
