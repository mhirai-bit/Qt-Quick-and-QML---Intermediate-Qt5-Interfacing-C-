import QtQuick 2.12
import QtQuick.Window 2.12
import Timing 1.0
import People 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Attached Properties Demo")

    Person{
        name:"Johnson"
        age:33

        Timer.running:true
        Timer.interval:3000
        Timer.onTimerOut:{
            console.log("Timer out for person")
        }
    }
}
