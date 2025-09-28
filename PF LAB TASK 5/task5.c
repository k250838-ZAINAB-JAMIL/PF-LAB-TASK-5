#include <stdio.h>
int main () {
    int a, b, c, highest;
    printf("Enter the marks of three students:", a,b,c);
    scanf("%d %d %d", &a, &b, &c);
    highest = (a>b)? ((a>c)?a :c):((b<c)?b:c);
    printf("The highest marks = %d", highest);
    return 0;

}