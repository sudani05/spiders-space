#include <stdio.h>

int main() {

  int n1, n2;

  printf("Enter two different numbers: ");
  scanf("%d%d", &n1, &n2);

  if (n1 > n2)
    printf("%d is the largest number.", n1);
    else{
        printf("%d is the largest number.",n2);
    }

  return 0;
}