#include <QApplication>
#include <QTreeView>
#include <treeclass.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TreeClass *modelTree = new TreeClass(nullptr);

    QTreeView *MyTree = new QTreeView();
    MyTree->setModel(modelTree);
    MyTree->show();


    return a.exec();

}
