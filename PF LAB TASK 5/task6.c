#include <stdio.h>
int main() {
  int a = 4;
  int b = 2;
  int binary_a = 100;
  int binary_b = 10; 
  printf("(a & b) | (a ^ b)\n");
  printf("---Step By Step Evaluation---\n");

  int step1 = (binary_a & binary_b);
 
  printf("The binary of %d is %d\n", a, binary_a);
  printf("The binary expression of %d is %d\n", b, binary_b);
  printf("1. (a & b) = %d\n ", step1);
  printf("The expression (a & b) will give %d because & operator will give us 0 if any of the bit is zero\n", step1);
  
  int step2 = (binary_a ^ binary_b );
  printf("2. (a ^ b) = %d\n", step2);
  printf("The expression (a ^ b) will give %d because XOR operator will give us 1 if the bits are diffrent\n", step2);

  int step3 = (binary_a & binary_b) | (binary_a ^ binary_b);
  printf("(a & b) | (a ^ b)= %d\n", step3);
  printf("The expression will give %d because the OR operator will give us 1 if anyone of the bit is 1\n", step3);

  return 0;

}