#include<stdio.h>
#include<stdlib.h>

int main(void) {
	double BMI;
	float w, m;
	printf("請輸入體重(kg): ");
	scanf_s("%f", &w);
	printf("請輸入身高(m): ");
	scanf_s("%f", &m);
	BMI = w / (m * m);
	printf("BMI = %f\n", BMI);
	if (BMI < 18.5)
		printf("UnderWeight\n");
	else if (BMI < 24.9)
		printf("Normal");
	else if (BMI < 29.9)
		printf("Overwight\n");
	else
		printf("Obese\n");
	printf("\n");
	system("pause");
	return 0;
}
