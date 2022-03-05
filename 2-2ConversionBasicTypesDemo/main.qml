import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Data Conversion : Basic Types")


    Connections {
        target:CppClass
        onSendInt:{
            console.log("Received int : " + param + " , type is :" + typeof param)
        }

        onSendDouble:{
            console.log("Received double : " + doubleParam + " , type is :" + typeof doubleParam)
        }

        onSendBoolRealFloat: {
            console.log("Received bool: " + boolparam + " , type is : " + typeof boolparam)
            console.log("Received real: " + realparam + " , type is : " + typeof realparam)
            console.log("Received float: " + floatparam + " , type is : " + typeof floatparam)
        }
    }

    Button{
        id: mButton
        text: "Click Me"
        onClicked: {
            CppClass.cppSlot()
        }
    }
}
