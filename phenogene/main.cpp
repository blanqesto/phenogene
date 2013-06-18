#include <QApplication>
#include <GUI.h>
#include <NeuralNetwork.h>
#include <FileManager.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GUI w;
    //Neural_Network network;
    w.show();
    return a.exec();
}
