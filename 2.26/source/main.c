#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1, num2;
	printf("�п�J��Ӽ�: ");
	scanf_s("%d%d",&num1,&num2);
	if (num1 % num2)
		printf("%d ���O %d ������\n", num1, num2);
	else	
		printf("%d �O %d ������\n", num1, num2);
	system("pause");
	return 0;
}