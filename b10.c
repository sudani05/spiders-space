#include <stdio.h>
int main()
 {
  int n, rev = 0, rem, ori;
    printf("Enter a integer: ");
    scanf("%d", &n);
    ori = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (ori == rev)
        printf("%d is a palindrome.", ori);
    else
        printf("%d is not a palindrome.", ori);

    return 0;
}