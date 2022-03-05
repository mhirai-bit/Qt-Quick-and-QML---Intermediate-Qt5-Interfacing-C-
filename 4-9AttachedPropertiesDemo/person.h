#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)


public:
    explicit Person(QObject *parent = nullptr);

    const QString &name() const;
    int age() const;
    void setName(const QString &newName);
    void setAge(int newAge);

signals:

    void nameChanged();
    void ageChanged();

private:
    QString m_name;
    int m_age;
};

#endif // PERSON_H
