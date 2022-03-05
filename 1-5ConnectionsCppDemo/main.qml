import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Connections C++ Demo")

    Connections {
        target: CppSignalSender
        onCallQml : {
            console.log("This is QML : callQml signal caught")
            mText.text = parameter
        }

        onCppTimer: {
            mRectText.text = value
        }
    }

    Column {
        Rectangle {
            width: 200
            height: 200
            color: "red"
            radius: 20
            Text {
                id: mRectText
                text: "0"
                anchors.centerIn: parent
                color: "white"
                font.pointSize: 30
            }
        }

        Button {
            text: "Call C++ Method"
            onClicked: {
                CppSignalSender.cppSlot()
            }

        }

        Text {
            id: mText
            text: qsTr("Default")
        }
    }
}
