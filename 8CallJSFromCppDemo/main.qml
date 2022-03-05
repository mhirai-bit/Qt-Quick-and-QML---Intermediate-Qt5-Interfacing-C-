import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Call JS from C++")

    function qmlJSFunction(param){
        console.log("QML Talkin, C++ called me with parameter : " + param + "returning back")
        return "This is QML,over to you C++. Thanks for the call."
    }

    Button {
        id: mButton
        text: "Call QML function from C++"
        onClicked: {
            QmlJsCaller.cppMethod("QML Calling...")
        }
    }
}
