#include <QApplication>
#include "phenogene.h"
#include "NN.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Phenogene w;
    //Neural_Network network;
    w.show();
    return a.exec();
}
