#include <stdio.h>
 #include <math.h>
 
 int main() {
 	float radius;
 	float area;
 	float pi = 3.42;
 	float circumference;
 	float squareroot;
 	printf("Enter the radius ");
 	scanf("%f", &radius);
 	
 	area = pi*pow(radius,2);
 	circumference = 2*pi*radius;
 	squareroot = sqrt(radius);
 	printf("area is %.2f\n circumference is %.2f\n squareroot %.2f ", area,circumference,squareroot);
 	
 	return 0;
 
 }
 	    
 

