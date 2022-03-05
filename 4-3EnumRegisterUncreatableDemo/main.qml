import QtQuick 2.14
import QtQuick.Window 2.14
import com.blikoon.errorlevel 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Expose C++ Enums demo")

    Component.onCompleted:{
        console.log(ErrorLevel.DEBUG);
    }
}
