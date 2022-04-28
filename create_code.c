#include <kipr/wombat.h>

int main()
{
    shut_down_in(120);
    enable_servos();
    create_connect();
    create_drive_direct(250,265);
    msleep(2700);
     create_drive_direct(250,290);
    msleep(1600);
    create_stop();
    mav(0,-1500);
	msleep(1300);
    ao();
    create_drive_direct(-250,250);
        msleep(600);
    create_drive_direct(-250,-250);
    msleep(1200);
    create_drive_direct(250,-250);
    msleep(500);
    create_stop();
    mav(1,-1500);
    msleep(6000);
    ao();
    set_servo_position(0,170);
    mav(1,1500);
    msleep(200);
    ao();
    set_servo_position(0,790);
    create_drive_direct(250,-250);
    msleep(1500);
    mav(1,1500);
    msleep(6000);
    ao();
    create_drive_direct(250,250);
    msleep(1300);
    mav(1,1500);
    msleep(1000);
    ao();
    set_servo_position(0, 170);
    create_disconnect();
    return 0;
}
