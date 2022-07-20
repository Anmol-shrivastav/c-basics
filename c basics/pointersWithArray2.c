#include<stdio.h>
#include<conio.h>
void main(){
	char ary[] = "Anmol";
	char ary1[5] = {'a', 'n', 'm', 'o', 'l', '\0'};
	ary[3] = '\0';
	int size = sizeof(ary1)/ sizeof(ary1[0]);
	printf("%d", size);
	printf("\n%s", ary1);
	printf("\n%c", ary[3]);
	printf("\n%c", ary[4]);
}
