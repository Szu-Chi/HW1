#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i;
	printf("請輸入一個數: ");
	scanf_s("%d",&i);
	if (i % 2)
		printf("奇數\n");
	else
		printf("偶數\n");
	system("pause");
	return 0;
}