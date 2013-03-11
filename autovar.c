#include<stdio.h>
int main(void)
{
auto int x=10; /*auto variable is declared here */
{
auto int x=15; /* value of variable changes in other block */
{ 
printf("\n%d",x); /* takes value of x fRom inner block */
}
printf("%d",x);
}
}

