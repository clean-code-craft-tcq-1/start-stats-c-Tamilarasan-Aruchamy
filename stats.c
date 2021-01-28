#include "stats.h"

struct stats {
    float average;
    float Min;
    float Max;
}

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = *numberset[0];
    s.max = *numberset[0];
    
    for(int x=0;x<setlength;x++)
    {
       if(s.min>*numberset[x])
       {
           s.min=*numberset[x]
       }
       else
       {
       }   
        
       if(s.max<*numberset[x])
       {
           s.max=*numberset[x]
       }
       else
       {
       }  
      s.average=+ numberset[x];
    }
    
    return s
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
