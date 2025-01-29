#include <stdio.h>

int main(){
printf("What operation do you need to perform:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
scanf("%d",&choice);
printf("Enter the first number:")
scanf("%d",num1);
printf("Enter the second number:")
scanf("%d",num2);
printf("Enter the three number:")
scanf("%d",num3);

switch(choice){
  case 1:
    result=num1+num2;
    printf("The answer is: %d",result);
    break;
  case 2:
    result=num1-num2;
    printf("The answer is: %d",result);
    break;
  case 3:
    result=num1*num2;
    printf("The answer is: %d",result);
    break;
  case 4:
    result=num1/num2;
    printf("The answer is: %d",result);
    break;  
  default:
    printf("Invalid input");
  }
  


return 0;
}
