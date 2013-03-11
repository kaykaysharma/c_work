
/*PROGRAM TO DEMONSTRATE ROWMAJOR ARRAY*/
#include<stdio.h>
int main(int c )
{
int a[1000][1000];
int i,j;
for(i=0; i<1000; i++)
{
for (j=0; j<1000; j++)
{
a[i][j]=i;
}
}
printf("%d",c);
return 0;
}

