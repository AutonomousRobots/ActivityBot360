/* 
  Forward Stop Face Right.c

  http://learn.parallax.com/activitybot/go-certain-distances
*/

#include "simpletools.h"
#include "abdrive360.h"

int main()                    
{
  pause(5000);
  drive_speed(64, 54);
  pause(24500);
  drive_speed(0, 0); //circle
  drive_speed(54, 64);
  pause(24500);
  drive_speed(0, 0); //reverse for figure 8
}