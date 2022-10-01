#include "types.h"
#include "user.h"
#include "spinlock.h"



int
main(int argc, char *argv[])
{
  if (fork() == 0) {
    sleep(100);
    exit();  
  }
  
  
  
  if(fork() == 0) {
    
    sleep(200);
    for(int i=0;i<10000;i++)
    {
  	printf(1, "%d ", i);
    } 
    printf(1, "\n");
    
    exit();
 
  }

  int retime, rutime, stime;
  
  printf(1, "%d\n",wait2(&retime, &rutime, &stime));
  printf(1, "retime=%d rutime=%d stime=%d\n", retime, rutime, stime);
  printf(1, "turnaround time=%d\n", retime+rutime+stime);
  
  printf(1, "%d\n", wait2(&retime, &rutime, &stime));
  printf(1, "retime=%d rutime=%d stime=%d\n", retime, rutime, stime);
  printf(1, "turnaround time=%d\n", retime+rutime+stime);
  exit();
  
 
}
	
