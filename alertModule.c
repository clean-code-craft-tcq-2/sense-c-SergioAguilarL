#include "alertModule.h"


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

/*body for alerts function*/
void emailAlerter(void)
{
    //increment emailAlertCallCount each time emailAlert is called
    emailAlertCallCount++;
}

void ledAlerter(void)
{
    //increment ledAlertCallCount each time ledAlerter is called
    ledAlertCallCount++;

}