/*PROGRAM TO CHECK WETHER THE CPU IS LITTLE ENDIAN OR BIG ENDIAN*/
#include<stdio.h>
int main(void)
{
int i=260;
char *b =&i;
if(*b==4)
{
printf("the cpu is little endian\n");
}
else
{
printf("the cpu is big endian\n");
}
return 0;
}
