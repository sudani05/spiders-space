#include <stdio.h>
int main()
 {

  int i, n;

  int a1 = 0, a2 = 1;


  int nextTerm = a1 + a2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", a1, a2);

  for (i = 3; i <= n; ++i) 
  {
    printf("%d, ", nextTerm);
    a1 = a2;
    a2 = nextTerm;
    nextTerm = a1 + a2;
  }

  return 0;
}
