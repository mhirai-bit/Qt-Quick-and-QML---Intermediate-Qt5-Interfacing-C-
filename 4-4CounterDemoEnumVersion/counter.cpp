#include "counter.h"
#include <QDebug>

Counter::Counter(QObject *parent)
    : QObject{parent},
      m_count(0),
      m_up(Counting::CountDirection::DOWN),
      m_timer(new QTimer)
{
    qDebug() << "Created Counter instance";
    m_timer->setInterval(500);
    connect(m_timer, &QTimer::timeout, [=](){
        if(m_counting == Counting::CountDirection::UP)
        {
            ++m_count;
        }else
        {
            --m_count;
        }
        emit countChanged(m_count);
    });
}

int Counter::count() const
{
    return m_count;
}

void Counter::setCount(int newCounter)
{
    if (m_count == newCounter)
        return;
    m_count = newCounter;
    emit countChanged(m_count);
}

//bool Counter::up() const
//{
//    return m_up;
//}

//void Counter::setUp(bool newUp)
//{
//    if (m_up == newUp)
//        return;
//    m_up = newUp;
//    emit upChanged(m_up);
//}

void Counter::start()
{
    m_timer->start();
}

void Counter::stop()
{
    m_timer->stop();
}

const Counting::CountDirection &Counter::counting() const
{
    return m_counting;
}

void Counter::setCounting(const Counting::CountDirection &newCounting)
{
    if (m_counting == newCounting)
        return;
    m_counting = newCounting;
    emit countingChanged();
}
