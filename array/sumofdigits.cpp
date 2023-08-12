#include<stdio.h>
#include<conio.h>
int sumOfDigits(int num) {
  static int sum = 0;
  int rem;
  while(num>0){
  }
  sum = sum + (num % 10);
  rem = num / 10;
  if (rem > 0) {
    sumOfDigits(rem);
  }
  return sum;
}
int main() {
  int j, num;
  printf("Please enter a number :");
  scanf("%d", & num);
  printf("sum of digits of the number = %d ", sumOfDigits(num));
  getch();
}
