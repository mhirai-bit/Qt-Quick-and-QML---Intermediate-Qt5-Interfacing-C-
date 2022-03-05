import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Sequence Demo")

    Button{
        id:mButton1
        text: "Send to C++"
        onClicked:{
            var arr = ['Apple', 'Banana', 'Avocado', 'Pear', 'Orange'];
            CppClass.qmlArrayToCpp(arr)
        }
    }

    Button{
        id:mButton2
        anchors.top:mButton1.bottom
        text:"Read from C++"
        onClicked:{
            var arr = CppClass.retrieveStrings();
            print("The length is : " + arr.length)

            arr.forEach(function(element){
                console.log(element)
            })
        }
    }
}
