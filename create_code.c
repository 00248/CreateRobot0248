#include <kipr/wombat.h>

int main()
{
    shut_down_in(120);
    create_connect();
    create_drive_direct(250,260);
    msleep(2700);
     create_drive_direct(250,280);
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
    msleep(5000);
    create_disconnect();
    return 0;
}
