#include <stdio.h>

int numPrint(int);

int main()
{
  int n = 1;

  printf("\n\n Recursion: print first natural numbers :\n");
  printf("--------------------------------------------\n");
  printf("The natural numbers are: \n");

  numPrint(n);

  printf("\n\n");

  return 0;
}

int numPrint(int n)
{
    if(n<-50)
    {
      printf("%d", n);
      numPrint(n + 1);
    }
}
