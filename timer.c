#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

int count = 0;
void alarm_increment() {
  count += 1;
}

void sigint_handler(int signum)
{ // SIGINT signal handler
  printf("\nTotal alarms occured: %d\n", count);
  printf("The program executed for %d seconds.\n", count);
  exit(0);
}