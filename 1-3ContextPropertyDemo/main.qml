import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Call C++ from QML")

    Column {
        spacing: 10
        Button {
            text: "Call C++ Method";
            onClicked:{
                BWorker.regularMethod()
                BWorker.cppSlot()
            }
        }
        Rectangle {
            width: textToShowId.implicitWidth + 20;
            height: 50
            color: "beige"
            Text{
                id: textToShowId
                text: BWorker.regularMethodWithReturn("John", 25)
            }
        }
    }

    Other {

    }
}
