#include <QApplication>
#include <QTreeView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTreeView *MyTree = new QTreeView();
    MyTree->show();


    return a.exec();
}
