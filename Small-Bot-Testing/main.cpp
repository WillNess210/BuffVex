#include "robot-config.h"

// Robot Configuration
/*
[Port]      [Name]      [Description]       [Reversed]
1           LeftFront   Chassis/Drive       No
2           LeftBack    Chassis/Drive       No
3           RightFront  Chassis/Drive       Yes
4           RightBack   Chassis/Drive       Yes
6           Intake      Gathers balls       No
11          Angle       Shift shooter       No
13          ShootLeft   Shooter             No
14          ShootRight  Shooter             Yes
*/

// Really basic tank drive
void tankDrive()
{
    LeftFront.spin(vex::directionType::fwd, Controller.Axis3.value(), vex::velocityUnits::pct);
    LeftBack.spin(vex::directionType::fwd, Controller.Axis3.value(), vex::velocityUnits::pct);
    RightFront.spin(vex::directionType::fwd, Controller.Axis2.value(), vex::velocityUnits::pct);
    RightBack.spin(vex::directionType::fwd, Controller.Axis2.value(), vex::velocityUnits::pct);
    Brain.Screen.print("Ready");
}

int main() {
    // Reset all gyros and encoders
    Brain.Screen.print("Resetting motors");
    Brain.Screen.newLine();
    LeftFront.resetRotation();
    LeftBack.resetRotation();
    RightFront.resetRotation();
    RightBack.resetRotation();
    
    // Start infinite while loop
    while(1 == 1)
    {
        // Drive controls
        tankDrive();
    }
}
