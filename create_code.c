#include <kipr/wombat.h>

int main()
{
    shut_down_in(120);
    enable_servos();
    create_connect();
    create_drive_direct(260,250); //drive to pcr
    msleep(3900);
     create_drive_direct(250,260);
    msleep(700);
    create_stop(); // stop at pcr
    mav(0,-1500); // open pcr
	msleep(1300);
    ao();
    create_drive_direct(-250,250);//turn and back up create
        msleep(600);
    create_drive_direct(-250,-250);
    msleep(1200);
    create_drive_direct(250,-250);
    msleep(600);
    create_stop();
    mav(1,-1500);// extend arm #1
    msleep(6000);
    ao();
    set_servo_position(0,170); // open claw
    mav(1,1500); //extend arm #2
    msleep(200);
    ao();
    set_servo_position(0,790); // close claw
    create_drive_direct(250,-250);// turn
    msleep(500);
    create_stop();
    mav(1,1500); // retract arm
    msleep(6000);
    ao();
    create_drive_direct(250,250); //drive to Airlock
    msleep(3400);
    create_drive_direct(250,-250); //turn
    msleep(500);
    create_stop();
    mav(1,1500); // extend arm #3
    msleep(1000);
    ao();
    set_servo_position(0, 170);// open claw
    create_disconnect();
    return 0;
}
