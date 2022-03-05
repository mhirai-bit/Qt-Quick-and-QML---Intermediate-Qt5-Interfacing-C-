#ifndef APPWRAPPER_H
#define APPWRAPPER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>

class AppWrapper : public QObject
{
    Q_OBJECT
public:
    explicit AppWrapper(QObject *parent = nullptr);

    Q_INVOKABLE void fetchPoints(int number);
    Q_INVOKABLE void removeLast(int number);

    QStringList jokes() const;

    bool initialize();
    QQmlApplicationEngine mEngine;
signals:

public slots:


private slots:
    void dataReadyRead();
    void dataReadFinished();


private:
    QNetworkAccessManager *mNetManager;
    QNetworkReply *mNetReply;
    QByteArray *mDataBuffer;
    QStringList mJokes;



};

#endif // APPWRAPPER_H
