#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i;
	printf("�п�J�@�Ӽ�: ");
	scanf_s("%d",&i);
	if (i % 2)
		printf("�_��\n");
	else
		printf("����\n");
	system("pause");
	return 0;
}