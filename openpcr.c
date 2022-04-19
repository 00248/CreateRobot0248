#include <kipr/wombat.h>

int main()
{
    shut_down_in(120);
    create_connect();
    create_drive_direct(250,250);//drive to PCR
    msleep(5000);
    create_stop();
    mav(0,-1500);
	msleep(10000);//open PCR
    ao();
    create_drive_direct(-250,250);//Backup
    msleep(200);
    create_drive_direct(-250,-250);
    msleep(500);
    create_drive_direct(250,-250);
    msleep(200);
    
    create_disconnect();
    return 0;
}
