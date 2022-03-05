#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "player.h"
#include "footballteam.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    //Register Types
    qmlRegisterType<Player>("com.blikoon.FootBall",1,0,"Player");
    qmlRegisterType<FootBallTeam>("com.blikoon.FootBall",1,0,"FootBallTeam");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
