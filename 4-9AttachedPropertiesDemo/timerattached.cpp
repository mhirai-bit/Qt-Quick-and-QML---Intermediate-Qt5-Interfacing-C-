#include "timerattached.h"
#include <QDebug>

TimerAttached::TimerAttached(QObject *parent)
    : QObject{parent},
      m_timer(new QTimer(this)),
      m_interval(2000),
      m_running(false)
{
    qDebug() << "Creating the timer attached object";
    connect(m_timer, &QTimer::timeout,[=](){
        qDebug() << "Timeout for interval : " << m_interval;
        emit timerOut();
    });
}

int TimerAttached::interval() const
{
    return m_interval;
}

void TimerAttached::setInterval(int newInterval)
{
    if (m_interval == newInterval)
        return;
    m_interval = newInterval;
    emit intervalChanged();
}

bool TimerAttached::running() const
{
    return m_running;
}

void TimerAttached::setRunning(bool newRunning)
{
    if (m_running == newRunning)
        return;
    m_running = newRunning;
    if(!m_running){
        m_timer->stop();
    }else{
        m_timer->start();
    }
    emit runningChanged();
}
