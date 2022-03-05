#ifndef QMLJSCALLER_H
#define QMLJSCALLER_H

#include <QObject>
#include <QDebug>
#include <QVariant>

class QmlJSCaller : public QObject
{
    Q_OBJECT
public:
    explicit QmlJSCaller(QObject *parent = nullptr);

    Q_INVOKABLE void cppMethod(QString parameter);

    QObject *getQmlRootObject() const;
    void setQmlRootObject(QObject *newQmlRootObject);

signals:
private:
    void callJSMethod(QString param);
    QObject * qmlRootObject;
};

#endif // QMLJSCALLER_H
