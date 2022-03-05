#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{

}

const QString &Person::name() const
{
    return m_name;
}

void Person::setName(const QString &newName)
{
    if (m_name == newName)
        return;
    m_name = newName;
    emit nameChanged();
}

int Person::age() const
{
    return m_age;
}

void Person::setAge(int newAge)
{
    if (m_age == newAge)
        return;
    m_age = newAge;
    emit ageChanged();
}
