#include<stdio.h>
int main ( ){
   int a[4];
   int *p,i;
   printf ("Enter 5 lements\n");
   for (i=0; i<5; i++)
      scanf ("%d\n", &a[i]);
   p = &a[0];
   printf ("Elements of the array are\n");
   for (i=0; i<5; i++)
      printf("%d\n", *(p+i));
}