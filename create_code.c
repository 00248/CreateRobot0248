#include <kipr/wombat.h>

int main()
{
    shut_down_in(120);
    enable_servos();
    create_connect();
    create_drive_direct(260,250); //drive to pcr
    msleep(4500);
     create_drive_direct(250,270);
    msleep(700);
    create_stop(); // stop at pcr
    mav(0,-1500); // open pcr
	msleep(2000);
    ao();
    set_servo_position(0,170); // open claw
    create_drive_direct(-150,-150);
    msleep(1000);
    create_drive_direct(-200,200);//turn and back up create
        msleep(700);
    create_drive_direct(-200,-200);
    msleep(2300);
    create_drive_direct(200,-200);
    msleep(700);
    create_stop();
    mav(1,1500);// extend arm #1
    msleep(5200);
    ao();
    set_servo_position(0,790); // close claw
    create_drive_direct(150,-150);// turn
    msleep(500);
    create_stop();
    create_drive_direct(250,-250);
    
    create_disconnect();
    return 0;
}
