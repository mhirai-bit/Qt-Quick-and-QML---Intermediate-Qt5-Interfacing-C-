#include "appwrapper.h"
#include <QNetworkRequest>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>


AppWrapper::AppWrapper(QObject *parent)
    : QObject{parent},
      mNetManager(new QNetworkAccessManager(this)),
      mNetReply(nullptr),
      mEngine(this),
      mDataBuffer(new QByteArray)

{

}

void AppWrapper::fetchPoints(int number)
{
    //Initialize our API data
    const QUrl API_ENDPOINT("http://api.icndb.com/jokes/random/"+QString::number(number));
    QNetworkRequest request;
    request.setUrl(API_ENDPOINT);

    mNetReply = mNetManager->get(request);
    connect(mNetReply, &QIODevice::readyRead, this, &AppWrapper::dataReadyRead);
    connect(mNetReply, &QNetworkReply::finished, this,&AppWrapper::dataReadFinished);
}

void AppWrapper::removeLast(int number)
{

}

QStringList AppWrapper::jokes() const
{
    return mJokes;
}

bool AppWrapper::initialize()
{
//    AppWrapper wrapper;

//    QQmlApplicationEngine engine;



    qInfo() << "Initialization done";


}

void AppWrapper::dataReadyRead()
{
    mDataBuffer->append(mNetReply->readAll());
}

void AppWrapper::dataReadFinished()
{
    if(mNetReply->error())
    {
        qDebug() << "There was some error:" << mNetReply->errorString();
    }else{
        //Turn the data into a json document
        QJsonDocument doc = QJsonDocument::fromJson(*mDataBuffer);
        //Grab the value array
        QJsonObject data = doc.object();

        QJsonArray array = data["value"].toArray();

        qDebug() << "Number of jokes : " <<  array.size();

        for(int i = 0; i < array.size(); i++)
        {
            QJsonObject object = array.at(i).toObject();

            QString joke = object["joke"].toString();

            mJokes.append(joke);

//            qDebug() << joke;
        }

        if(array.size() != 0){
            mEngine.rootContext()->setContextProperty("myModel", QVariant::fromValue(mJokes));
        }
        //Clear the buffer
        mDataBuffer->clear();
    }
}
