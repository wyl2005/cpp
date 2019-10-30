#include <stdio.h> 


int main (void)
{
   int a[]={4,6,8,2,7};
    int i=0;
   int size = sizeof(a)/sizeof(a[0]);

  for(i=0;i<size;i++)
   {
       printf(" ");
   }
    printf("i=%d\n",i);
//  i--; // doing i-- works fine.
   while(i>=0)
    {
      printf("%d ",a[i]);
      i--;
    }

  return(0);

}
