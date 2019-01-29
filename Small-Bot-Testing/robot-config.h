vex::brain Brain;
vex::controller Controller = vex::controller(); // Assuming one controller

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

// *************** Small Bot ***************
// Chassis (Tank Drive)
vex::motor LeftFront = vex::motor(vex::PORT1);
vex::motor LeftBack = vex::motor(vex::PORT2);
vex::motor RightFront = vex::motor(vex::PORT3,true);
vex::motor RightBack = vex::motor(vex::PORT4,true);

// Ball intake mechanism
vex::motor Intake = vex::motor(vex::PORT6);

// Angle Shifting motor
vex::motor Angle = vex::motor(vex::PORT11);

// Shooter motors
vex::motor ShootLeft = vex::motor(vex::PORT13);
vex::motor ShootRight = vex::motor(vex::PORT14,true);
