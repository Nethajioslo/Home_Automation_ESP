#include "example.h"
int variable =35;
int main()
{
  int i=0;
  printf("\nInitializing the application %d\n",variable);
  while(i<10)
  {
    i++;
    if(i == 4)
    variable = variable +5;
  }
  printf("After Initializing the application %d\n",variable);
}