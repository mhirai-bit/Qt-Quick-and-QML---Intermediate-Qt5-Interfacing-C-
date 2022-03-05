import QtQuick 2.14
import QtQuick.Window 2.14
import com.blikoon.counter 1.0
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Rester Non Visual Type")

    Counter{
        id:mCounter
    }

    Column{
        anchors.centerIn: parent
        spacing:10
        Rectangle{
            width:200
            height:200
            radius:20
            color:mCounter.count >= 0 ? "green":"red"

            Text{
                id:mText
                text:mCounter.count
                anchors.centerIn:parent
                font.pointSize:40
                color:"white"
            }
        }

        Button{
            width:200
            text:"Start"
            onClicked:{
                mCounter.start()
            }
        }
        Button{
            width:200
            text:"Stop"
            onClicked:{
                mCounter.stop()
            }
        }
        Button{
            width:200
            text:"Up"
            onClicked:{
                mCounter.up = true;
            }
        }
        Button{
            width:200
            text:"Down"
            onClicked:{
                mCounter.up = false;
            }
        }
    }
}
