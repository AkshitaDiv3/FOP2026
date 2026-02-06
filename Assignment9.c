#include <stdio.h>
      void main()
{ 
  int num,orig,rem,result;
printf("Enter number:");
scanf("%d", &num);
num = orig;
while(orig!=0)
{
num=orig%10;
result=rem*rem*rem;
orig=orig/10;
}
if(num==result)
  printf("it is Armstrong");
else
  printf("Not Armstrong");
}

        
