#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i;
	printf("叫块计: ");
	scanf_s("%d",&i);
	if (i % 2)
		printf("计\n");
	else
		printf("案计\n");
	system("pause");
	return 0;
}