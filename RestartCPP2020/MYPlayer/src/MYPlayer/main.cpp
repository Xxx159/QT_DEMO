#include <QCoreApplication>
#include <qquickwindow.h>
#include "MainApp.h"


extern MainApp* g_pApp;


int main(int argc, char *argv[])
{
    //用软件来渲染，防止硬件渲染bug
    QQuickWindow::setSceneGraphBackend(QSGRendererInterface::Software);
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    MainApp app(argc, argv);

    g_pApp = &app;
    int nRet = app.Main(argc, argv);
    g_pApp = nullptr;

    return nRet;
}
