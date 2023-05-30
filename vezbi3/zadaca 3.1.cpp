#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, time, ctime */

int main ()
{
  time_t rawtime;

  time (&rawtime);
  printf ("The current local time is: %s", ctime (&rawtime));

  return 0;
}
//Кодот на оваа задача го покажува локалното време каде што моментално се наоѓаме.