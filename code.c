  
#include <kipr/wombat.h>

int main()
{
   // wait_for_light(0);
    shut_down_in(120);
    create_full();
    enable_servos();
    create_connect();
    create_drive_direct(260,250); //drive to pcr
    msleep(4500);
    create_drive_direct(250,270);
    msleep(650);
    create_stop(); // stop at pcr
    mav(0,-1500); // open pcr
	msleep(3000);
    ao();
    set_servo_position(0,170); // open claw
    create_drive_direct(-150,-150);
    msleep(500);
    create_drive_direct(-200,200);//turn and back up create
    msleep(700);
    create_drive_direct(-200,-200);
    msleep(1200);
    create_drive_direct(200,-200);
    msleep(700);
    create_stop();
    mav(1,1500);// extend arm #1
    msleep(5000);
    ao();
    set_servo_position(0,790); // close claw
    create_drive_direct(150,-150);// turn
    msleep(30050);
    create_stop();
    create_drive_direct(-250,-250);
    msleep(4000);
    create_disconnect();
   
    return 0;
}

#include <kipr/wombat.h>
​
int main()
{
   // wait_for_light(0);
    shut_down_in(120);
    create_full();
    enable_servos();
    create_connect();
    create_drive_direct(260,250); //drive to pcr
    msleep(4500);
    create_drive_direct(250,270);
    msleep(650);
    create_stop(); // stop at pcr
    mav(0,-1500); // open pcr
    msleep(3000);
    ao();
    set_servo_position(0,170); // open claw
    create_drive_direct(-150,-150);
    msleep(500);
    create_drive_direct(-200,200);//turn and back up create
    msleep(700);
    create_drive_direct(-200,-200);
    msleep(1200);
    create_drive_direct(200,-200);
    msleep(700);
    create_stop();
