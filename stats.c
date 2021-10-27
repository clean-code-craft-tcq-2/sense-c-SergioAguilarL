#include "stats.h"
#include <math.h>

struct Stats compute_statistics(const float* numberset, int setlength) {

    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;

    /*CHeck if the array is empty*/
    if (setlength > 0 )
    {
        s.min = numberset[0];
        s.max = numberset[0];
        for(int index = 0U; index <= (setlength - 1); index++)
        {
            s.average += numberset[index];

            /*check for min value*/
            if(s.min > numberset[index])
            {
                s.min = numberset[index];
            }
            else
            {
                /*do nothing*/
            }

            /*Check for max value*/
            if(s.max < numberset[index])
            {
                s.max = numberset[index];
            }
            else
            {
                /*do nothing*/
            }

        }
        s.average /=setlength;
    }
    else
    {
        s.average = NAN;
        s.max = NAN;
        s.min = NAN;
    }
    return s;
}


void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    /*Check if max value is grater than the treshold*/
    if(maxThreshold < computedStats.max )
    {
        //call allert function
        alerters[0]();
        alerters[1]();
    }
    else
    {
        /*Do nothig*/
    }
}
