#include <stdio.h>
#include <time.h>

int main ()
{
  time_t rawtime;
  time_t* pRawTime = &rawtime;
  struct tm * timeinfo;

  time (pRawTime);
  timeinfo = localtime (pRawTime);

  printf ( "\n The current date and time is: %s\n", asctime (timeinfo) );
  
  return 0;
}