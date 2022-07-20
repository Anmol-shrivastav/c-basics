#include<stdio.h>
#include<conio.h>
void main(){
	float a = 235.61, *p = &a;
	//char *p = &a;
	//float *p =  &a;
	printf("%d\n", p);
	printf("%d\n", p+1);
	printf("%d\n", p+2);
	printf("%d\n", *(p+3));
	printf("%d\n", *(p+4));
	printf("%f\n", *p);
}