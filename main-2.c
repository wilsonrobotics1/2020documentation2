#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    //This part of code makes claw move downward because it starts facing upward so it won't start illegally
    motor(3,-20);
    msleep(1000);
    
    //This part of code makes robot move forward in order to knock down the stack of the 3 processed iron boxes and the 3 processed quicklime boxes
    motor(0,100);
    motor(1,100);
    msleep(3000);
    
    //This part of code makes robot go backwards into mineral lab
    motor(0,-100);
    motor(1,-100);
    msleep(3000);
    
    //This part of code makes robot go forward to position robot to turn right
    motor(0,75);
    motor(1,75);
    msleep(2500);
    
    //This part of code makes robot turn right to look directly under the mining ramp
    motor(0,0);
    motor(1,75);
    msleep(1500);
    
    //This part of code makes robot go forward under the mining ramp
    motor(0,100);
    motor(1,100);
    msleep(2000);
    
    //This part of code makes robot turn right to face the mineral transport under the mining ramp
    motor(0,0);
    motor(1,75);
    msleep(1500);
    
    //This part of code makes robot go forward to push mineral transport out
    motor(0,100);
    motor(1,100);
    msleep(1500);
    
    //This part of code makes robot reverse as soon as it pushes the mineral transport out of the way
    motor(0,-100);
    motor(1,-100);
    msleep(1500);
    
    //This part of code makes robot turn to position it to go forward
    motor(0,-75);
    motor(1,0);
    msleep(1500);
    
    
    //This part of the code makes robot move forward so it won't be under the mining ramp
    motor(0,100);
    motor(1,100);
    msleep(1500);
    
    return 0;
}