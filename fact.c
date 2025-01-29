#include <stdio.h>
int main(){
  int num,factorial=1;
  printf("Enter a number:");
  scanf("%d",&num);
  while(num>0){
    factorial=num*factorial;
    num=num-1;
  }
  printf("The factorial is %d", factorial);
  return 0;
}


