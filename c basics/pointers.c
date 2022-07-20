#include<stdio.h>
#include<conio.h>
void main(){
	int a;
	a = 52;
	int *p = &a;
	int *p1 = &*p;
	printf("%d\n", a);
	printf("%d\n", *&*&*&*&a);
	printf("%d\n", p);
	printf("%d\n", *p);
	printf("%d\n", &*p);
	printf("%d\n", p1);
	printf("%d\n", p+1);
	
}
