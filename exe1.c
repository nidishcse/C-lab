#include<stdio.h>
int main()
{
  int a,b,choice,res;
  printf("=====OPERTORS AND EXPRESSIONS=====\n");
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU-----\n");
  printf("1. addition\n");
  printf("2. subtraction\n");
  printf("3. multiplication\n");
  printf("4. division\n");
  printf("5. modulus\n");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
{
  case 1:
   res=a+b;
   printf("result=%d",res);
   break;
  case 2:
   res=a-b;
   printf("result=%d",res);
   break;
  case 3:
   res=a*b;
   printf("result=%d",res);
   break;
  case 4:
   if(b!=0)
{
   res=a/b;
   printf("result=%d",res); 
}
  else
{
   printf("division by zero is not possible.");
}
  break;
  case 5:
   if(b!=0)
{
   res=a%b;
   printf("result=%d",res); 
}
  else
{
   printf("modulus by zero is not possible.");
}
  break;
 default:
   printf("Invalid choice.");
}
 return 0;  
}      
   
