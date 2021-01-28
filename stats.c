#include "stats.h"
#include <math.h>

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    
    if(setlength!=0)
    {
    s.average = 0;
    s.min = *numberset;
    s.max = *numberset;
    }
    else
    {
    s.average = NAN;
    s.min = NAN;
    s.max = NAN; 
    }
    
    for(int x=0;x<setlength;x++)
    {
       if(s.min>*(numberset+x))
       {
           s.min=*(numberset+x);
       }
       else
       {
       }   
        
       if(s.max<*(numberset+x))
       {
           s.max=*(numberset+x);
       }
       else
       {
       }  
      s.average+=*(numberset+x);
    }
    s.average/=setlength;
    return s;
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    if(computedStats.max>maxThreshold)
    {
     alerters[0]();
     alerters[1]();
    }
    
}

void emailAlerter()
{
emailAlertCallCount++;
}

void ledAlerter()
{
ledAlertCallCount++;
}
