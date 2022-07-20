#include<stdio.h>
#include<conio.h>
void main(){
    char ary[] = {"anmol"};
    char *p = ary;
    printf("%d\n", p);
    printf("%d\n", sizeof(ary));
    printf("%d\n", sizeof(p));
    printf("%c\n", p+1);
}