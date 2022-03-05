import QtQuick 2.14
import QtQuick.Window 2.14
import QtQuick.Controls 2.4

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("String, Date and Time")

    property string mValue: "Clicked %1 times, double is %2"
    property int clickCount: 0

    Connections{
        target:CppClass
        onSendDateTime:
        {
            console.log("Received datetime :" + datetimeparam)
            console.log("Year :" + datetimeparam.getFullYear())
            console.log("...", datetimeparam.toGMTString())
        }

        onSendTime:{
            console.log("Received time :" + timeparam);
        }
    }


    Button {
        id: mButton
        text: "Click me"
        onClicked: {
//            CppClass.cppSlot()
            var date = new Date()
//            CppClass.timeSlot(date);
            CppClass.dateTimeSlot(date);

            clickCount++
            mButton.text = mValue.arg(clickCount).arg(clickCount*2)
        }
    }

    Component.onCompleted: {
        var mDate = new Date()

        //1. toLocaleDateString(contains date)
        print(mDate.toLocaleDateString())
        print(mDate.toLocaleDateString(Qt.locale("fr_FR")))
        print(mDate.toLocaleDateString(Qt.locale("ja_JA"),"yyyy-MMMM-dd"))

        //2.toLocaleString (contains date and time)
        print(mDate.toLocaleString(Qt.locale("en_S"), "yyyy-MMM-dd --HH:mm:ss"))

        //3.toLocaleTimeString(contains time
        print(mDate.toLocaleTimeString(Qt.locale("en_US"), "HH:mm:ss"))

        //4. fromLocaleDateString
        var myDate = Date.fromLocaleDateString(Qt.locale("en_US"), "2018-09-17", "yyyy-MM-dd")
        print("Date is :" + myDate)

    }
}
