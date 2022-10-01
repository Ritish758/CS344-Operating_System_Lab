#include <stdio.h> 
int main(int argc, char **argv)
{
int x = 1;
printf("Hello x = %d\n", x);
//
// Put in-line assembly here to increment
// the value of x by 1 using in-line assembly
//
 __asm__ ( "incl %%eax;" : "=a" (x) : "a" (x) );
printf("x = %d\n",x); 
if(x == 2){
printf("OK\n");
}
else{
printf("ERROR\n");
}
}
