import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Q_PROPERTY Demo")

    Column {
        spacing: 20
        Text {
            id: titleId
            width: 500
            text: Movie.title
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            id: mainCharacter
            width: 500
            text: Movie.mainCharacter
            font.pointSize: 20
            anchors.horizontalCenter: parent.horizontalCenter
        }
        Row{
            anchors.horizontalCenter: parent.horizontalCenter
            TextField{
                id: titleTextFieldId
                width: 300
            }
            Button {
                width: 200
                id: button1
                text: "Change Title"
                onClicked: {
                    Movie.title = titleTextFieldId.text
                }
            }
        }
        Row{
            TextField{
                id: mainCharTextFieldId
                width: 300
            }
            Button {
                width: 200
                id: button2
                text: "Change Character"
                onClicked: {
                    Movie.mainCharacter = mainCharTextFieldId.text
                }
            }
        }
    }
}

