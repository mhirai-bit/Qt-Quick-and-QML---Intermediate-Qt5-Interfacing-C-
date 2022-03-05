#include "qmljscaller.h"

QmlJSCaller::QmlJSCaller(QObject *parent)
    : QObject{parent}
{

}

void QmlJSCaller::cppMethod(QString parameter)
{
    qDebug() << "Thisis C++ talking, calling QML Javascript function";
    callJSMethod(parameter);
}

QObject *QmlJSCaller::getQmlRootObject() const
{
    return qmlRootObject;
}

void QmlJSCaller::setQmlRootObject(QObject *newQmlRootObject)
{
    qmlRootObject = newQmlRootObject;
}

void QmlJSCaller::callJSMethod(QString param)
{
    QVariant returnedValue;
    QVariant cppParameter = QVariant::fromValue(param);

    QMetaObject::invokeMethod(qmlRootObject, "qmlJSFunction",
                              Q_RETURN_ARG(QVariant,returnedValue),
                              Q_ARG(QVariant, cppParameter));

    qDebug() << "C++ talking, done calling QML Javascript, the return value is : " << returnedValue.toString();
}
