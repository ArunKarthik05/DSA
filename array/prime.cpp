#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
  int i = 0, n;
  printf("Please enter a number: ");
  scanf("%d", & n);								
  printf("Prime factors of a given number \n");
  while (n % 2 == 0) {
    printf("%d\t ", 2);
    n = n / 2;
  }
  for (i = 3; i <= sqrt(n); i = i + 2) {
    while (n % i == 0) {
      printf("%d\t", i);
      n = n / i;
    }
  }
  if (n > 2) {
    printf("%d\t ", n);
  }
  getch();
}
