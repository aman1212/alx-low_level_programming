#include <stdio.h>
#include <stdlib.h>
int main() {
int n=rand();

if(n >0)
{
printf("is positive");
}
else
{
if(n<0)
{
printf("is negative");
}
else
{
printf("is zero");
}
}
return 0;
}
