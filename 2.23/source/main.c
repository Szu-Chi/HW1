#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i[3];
	int j;
	printf("請輸入3個數字");
	scanf_s("%d%d%d", &i[0], &i[1], &i[2]);
	int max = i[0], min = i[0];
	for (j = 0; j < 3; j++)
	{
		if (i[j] > max)max = i[j];
		if (i[j] < min)min = i[j];
	}
	printf("max: %d\tmin: %d", max, min);
	system("pause");
	return 0;
}