/*
  Blank Simple Project.c
   
*/

#include "simpletools.h" 
#include "abdrive360.h"                     

int main()                                    
{
  pause(5000);
  drive_goto(281.354, 281.354); // 3ft
  pause(2000);
  drive_goto(-25.56, 25.56); // turn left 90 degrees
  pause(2000);
  drive_goto(140.677, 140.677); // 1.5ft
  pause(2000);
  drive_goto(25.56, -25.56); // turn right 90 degrees
  pause(2000);
  drive_goto(468.923, 468.923); //5ft
  pause(2000);
  drive_goto(25.56, -25.56); // turn right 90 degrees
  pause(2000);
  drive_goto(375.138, 375.138); // 4ft
  pause(2000);
  drive_goto(12.78, -12.78); //turn clockwise 45 degrees
  pause(2000);
  drive_goto(375.138, 375.138); // 4ft
  pause(2000);
  drive_goto(12.78, -12.78); //turn clockwise 45 degrees
  pause(2000);
  drive_goto(234.461, 234.461); // 2.5ft
  pause(2000);
  drive_speed(64, 48); // 4 to 3 ratio for 7.6 seconds
  pause(7600);
  drive_speed(0, 0);
  pause(2000);
  drive_goto(-28.4, 28.4);  //turn left 100 degrees (approx because no two were the same)
  pause(2000);
  drive_goto(140.677, 140.677); // 1.5 ft
  pause(2000);
  drive_goto(-25.56, 25.56); // turn left 90 degrees
  pause(2000);
  drive_goto(159.433, 159.433); // 1.7 ft
  pause(2000);
  drive_goto(8.52, -8.52); //turn clockwise 30 degrees
  pause(2000);
  drive_goto(164.123, 164.123); // 1.7499 ft
  pause(2000);
  
  
}
