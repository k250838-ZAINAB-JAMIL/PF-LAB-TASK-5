#include <stdio.h>

int main() {
    char  c1;
    char   c2;
    char   c3;
    char vowels = 'a'|| 'e'|| 'i'|| 'o'|| 'u';
    char consnants;
    int conscount = 0;
    int vowelcount = 0;
                  

    printf("Enter first character:\n");
    scanf(" %c", &c1);

    printf("Enter second character:\n");
    scanf(" %c", &c2);

    printf("Enter third character:\n");
    scanf(" %c", &c3);

    if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u')
    {  vowelcount++;
    } else{
     conscount++;
    }
    if (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u')
    {
          vowelcount++;
    } else {
        conscount++;
    }
    if (c3 == 'a' || c3 == 'e' || c3 == 'i' || c3 == 'o' || c3 == 'u')
    {
      vowelcount++;
    } else {
      conscount++;
    }
    printf("Total number of vowels = %d\n", vowelcount);
    printf("Total number of consonants = %d\n", conscount);

    return 0;

}