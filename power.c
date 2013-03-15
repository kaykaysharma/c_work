 /*TO CHECK IF A NUMBER IS A POWER OF 2 OR NOT*/
#include<stdio.h>
int main()
{
int num;
printf("Enter the number : ");
scanf("%d", &num);
if((num&(num-1))==0)
{
printf("POWER OF TWO\n");
}
else
{
printf("NOT A POWER OF TWO\n");
}
return 0;
}
