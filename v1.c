#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the number");
scanf("%d",&a);
while(a>0)
{
b=a%10;
c=b*b;
printf("%d",c);
}
if(a==1)
printf("Happy number",c);
else
printf("Not a happy number",c);
return 0;
}

