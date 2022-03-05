#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "propertywrapper.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

//    QString lastName = "Doe";
//    QString firstName = "John";

    PropertyWrapper propWrapper;
    propWrapper.setLastname("Doe");
    propWrapper.setFirstname("John");

    QQmlApplicationEngine engine;

//    engine.rootContext()->setContextProperty("mLastname",QVariant::fromValue(lastName));
//    engine.rootContext()->setContextProperty("mFirstname",QVariant::fromValue(firstName));

    engine.rootContext()->setContextObject(&propWrapper);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
