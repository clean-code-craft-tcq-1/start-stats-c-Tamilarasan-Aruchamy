#include "stats.h"


struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = *numberset;
    s.max = *numberset;
    
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
