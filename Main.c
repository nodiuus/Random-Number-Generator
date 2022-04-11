//i am going to eat your lungs out
// nisan 2022

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  time_t RawTime        = time(&RawTime);
  struct tm * TimeInfo  = localtime(&RawTime);
  time_t Time           = asctime(TimeInfo);

//  printf("%d\n", Time);
  srand(Time);
  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());

  return 0;
}
