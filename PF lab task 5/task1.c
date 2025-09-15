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
    scanf("%c", &c1);

    printf("Enter second character:\n");
    scanf("%c", &c2);

    printf("Enter third character:\n");
    scanf("%c", &c3);

    if (c1 == vowels)
    { vowelcount = vowelcount++;
    } else{
        conscount = conscount++;
    }
    if (c2 == vowels)
    {
         vowelcount = vowelcount++;
    } else {
        conscount = conscount++;
    }
    if (c3 == vowels)
    {
        vowelcount = vowelcount++;
    } else {
        conscount = conscount++;
    }
    printf("Total number of vowels\n", vowelcount);
    printf("Total number of consonants\n", conscount);

    return 0;
}