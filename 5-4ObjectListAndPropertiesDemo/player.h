#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(bool playing READ playing WRITE setPlaying NOTIFY playingChanged)
    Q_PROPERTY(QString position READ position WRITE setPosition NOTIFY positionChanged)

public:
    explicit Player(QObject *parent = nullptr);
    const QString &name() const;
    void setName(const QString &newName);
    bool playing() const;
    void setPlaying(bool newPlaying);
    const QString &position() const;
    void setPosition(const QString &newPosition);

signals:
    void nameChanged();
    void playingChanged();
    void positionChanged();

private:
    QString m_name;
    bool m_playing;
    QString m_position;
};

#endif // PLAYER_H
