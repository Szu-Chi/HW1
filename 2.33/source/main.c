#include<stdio.h>
#include<stdlib.h>
int main(void){
	double totCost,totKm,costPerGallonOfGas;
	double AvMilePerGallon, feesPerDay, tollsPerDay;
	printf("請輸入一整天的總公里數: ");
	scanf_s("%lf", &totKm);
	printf("\n");
	printf("汽油 1 公升/加侖多少錢: ");
	scanf_s("%lf", &costPerGallonOfGas);
	printf("\n");
	printf("平均 1 公升 /加侖能行駛多少公里: ");
	scanf_s("%lf", &AvMilePerGallon);
	printf("\n");
	printf("一天的停車費: ");
	scanf_s("%lf", &feesPerDay);
	printf("\n");
	printf("一天的通行費: ");
	scanf_s("%lf", &tollsPerDay);
	printf("\n");
	totCost = totKm / AvMilePerGallon * costPerGallonOfGas + feesPerDay + tollsPerDay;
	printf("每日金錢花費: %.2lf \n",totCost);
	system("pause");
	return 0;
}