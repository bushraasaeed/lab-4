#include<stdio.h>
#include<math.h>
int main(){

float radius;
float circumference;
float area;
float sq;
printf("enter radius: ");
scanf("%f", &radius);
area=M_PI*pow( radius, 2);
circumference= 2*M_PI*radius;
sq=sqrt(radius);
printf("area is %f \n ", area);
printf("circumference is %f \n", circumference);
printf("square root is %f", sq);

return 0;
	
}