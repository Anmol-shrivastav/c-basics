#include<stdio.h>
#include<conio.h>
void main(){
	int a[] = {121.1, 1241.1, 113.14, 14141.532, 100.2228};    
	int *ptr = (int*)(&a + 1);
	printf("\n%d",ptr);
	printf("\n%d",ptr+1);
	printf("\n%d", ptr+1-1);
	printf("%d\n%d", *(a+1), *(ptr-1));
	
}
//6487552
//6487572

//6487552
