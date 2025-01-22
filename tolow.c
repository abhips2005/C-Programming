#include <stdio.h>
#include <ctype.h>

int main(){
  char value;
  value=getchar();
  char new=toupper(value);
  printf("%c",new);

return 0;
}
