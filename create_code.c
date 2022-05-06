#include <kipr/wombat.h>

int main()
{
    shut_down_in(120);
    enable_servos();
    create_connect();
    create_drive_direct(250,255); //drive to pcr
    msleep(2800);
     create_drive_direct(250,270);
    msleep(1800);
    create_stop(); // stop at pcr
    mav(0,-1500); // open pcr
	msleep(2000);
    ao();
    set_servo_position(0,170); // open claw
    create_drive_direct(-150,-150);
    msleep(200);
    create_drive_direct(-200,200);//turn and back up create
        msleep(700);
    create_drive_direct(-200,-200);
    msleep(1300);
    create_drive_direct(200,-200);
    msleep(700);
    create_stop();
    mav(1,1500);// extend arm #1
    msleep(5000);
    ao();
     mav(1,1500); //extend arm #2
    msleep(200);
    ao();
    set_servo_position(0,790); // close claw
    create_drive_direct(50,-50);// turn
    msleep(500);
    create_stop();
    mav(1,-1500); // retract arm
    msleep(5000);
    ao();
    create_drive_direct(250,-250);
    msleep(500);
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
