#include<stdio.h>
int main()
{
 float a,b,I;
char op;
 printf("enter two numbers:\n");
 scanf("%f %f",&a,&b);
printf("select an operation:[+,-,/,*]:");
scanf(" %c",&op);
switch(op)
{
 case '+' : I=a+b;
        printf("%.2f+%.2f=%.2f",a,b,I);
   break;
case '-' :I=a-b;
      printf("%.2f-%2f=%.2f",a,b,I);
break;

case '/' :
      if(b=0)
{
 printf("the denominator cannot be 0:");
}
else
{ I=a/b;

printf("%.2f/%.2f=%.2f",a,b,I);
}
break;

case '*' :I=a*b;
      printf("%.2f*%.2f=%.2f",a,b,I);
   break;
default:printf("THE USER INPUT IS INVALID:");
break;
}
return 0;
}

