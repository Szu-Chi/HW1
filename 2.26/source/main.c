#include<stdio.h>
#include<stdlib.h>

int main(){
	int num1, num2;
	printf("請輸入兩個數: ");
	scanf_s("%d%d",&num1,&num2);
	if (num1 % num2)
		printf("%d 不是 %d 的倍數\n", num1, num2);
	else	
		printf("%d 是 %d 的倍數\n", num1, num2);
	system("pause");
	return 0;
}