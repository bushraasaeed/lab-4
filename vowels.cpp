#include<stdio.h>
int main(){
	char a;
	char b;
	char c;
	int count_v=0;
	int count_c=0;
	printf("enter first character: ");
	scanf(" %c", &a);
	if (a=='a' || a=='e'|| a=='i' || a=='o' || a=='u'){
	count_v=count_v+1;
	}
	else{
	count_c=count_c+1;
}
	printf("enter second character: ");
	scanf(" %c", &b);
	if (b=='a' || b=='e'|| b=='i' || b=='o' || b=='u'){
	count_v=count_v+1;
	}
	else{
	count_c=count_c+1;
}
	printf("enter third character: ");
	scanf(" %c", &b);
	if (c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
	count_v=count_v+1;
	}
	else{
	count_c=count_c+1;
}
printf("total consonents are %d \n", count_c);
printf("total vowels are %d ", count_v);
return 0;
	
}