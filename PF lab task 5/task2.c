#include <stdio.h>

int main() {
   
   int integer; 
    
    printf("Enter an integer:");
    scanf("%d",integer);

    (integer %2 == 0)? printf("even"): (integer %3 == 0)? printf("odd") : printf("neither even nor odd");
 return 0;
}