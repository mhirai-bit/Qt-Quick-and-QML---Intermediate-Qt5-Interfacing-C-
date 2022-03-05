#ifndef TIMERATTACHED_H
#define TIMERATTACHED_H

#include <QObject>
#include <QTimer>

class TimerAttached : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int interval READ interval WRITE setInterval NOTIFY intervalChanged)
    Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runningChanged)


public:
    explicit TimerAttached(QObject *parent = nullptr);

    int interval() const;
    void setInterval(int newInterval);

    bool running() const;
    void setRunning(bool newRunning);

signals:
    void timerOut();
    void intervalChanged();
    void runningChanged();

private:
    QTimer *m_timer;
    int m_interval;
    bool m_running;
};

#endif // TIMERATTACHED_H
