/*TO CHECK IF A NUMBER IS EVEN OR ODD USING XOR*/
#include<stdio.h>
int main()
{
int num;
printf("ENTER THE NUMBER : ");
scanf("%d", &num);
if((num^1)==(num+1))
{
printf("THE NUMBER IS EVEN\n");
}
else
{
printf("THE NUMBER IS ODD\n");
}
return 0;
}
