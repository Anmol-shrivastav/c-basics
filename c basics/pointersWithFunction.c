#include<stdio.h>
#include<conio.h>
void *getstring(int *a){
	printf("anmol");
    printf("\n%d\n", *a);
    *a = (*a)+1;
}
void main(){
    int a = 5;
	getstring(&a);
    printf("\n%d\n", a);
}