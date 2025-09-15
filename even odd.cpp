#include<stdio.h>
int main(){
int number;
printf("enter a number: ");
scanf("%d",&number );
(number % 2 == 0)? printf("number is even"):(number % 3==0)? printf("number is odd"):printf("odd and not divisible by 3");	
return 0;
	
}