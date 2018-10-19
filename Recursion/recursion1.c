#include <stdio.h>

int numPrint(int n);

int main(void){
    int n = 1;
    numPrint(n);
    return 0;
}

int numPrint(int n)
{
  if(n<=100){
    printf("%d", n);
    numPrint(n + 1);
  }
}
