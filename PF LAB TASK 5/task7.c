#include <stdio.h>
int main() {
    int attendance;
    char midterm;
    char fee;
    printf("Enter your attendance percentage:\n");
    scanf("%d", &attendance);
    if  (attendance < 75){
    printf("The student is not eligible\n");
} else {
    printf("Have you passed your midterm exams?\n");
    scanf(" %c", &midterm);
    if(midterm == 'F'|| midterm == 'f') {
        printf("You are not eligible\n");
    } else if (midterm == 'P' || midterm == 'p') {
        printf("Have you paid the exam fee?\n");
        scanf(" %c",&fee);
     if(fee == 'Y' || fee == 'y') {
        printf("You are eligible for the Final Exam\n");
     } else{
        printf("Please clear your dues to appear in the Final Exam.\n");

     }
    }
}
return 0;    
}

