#include<stdio.h>
#include<stdlib.h>
int main(void){
	double totCost,totKm,costPerGallonOfGas;
	double AvMilePerGallon, feesPerDay, tollsPerDay;
	printf("�п�J�@��Ѫ��`������: ");
	scanf_s("%lf", &totKm);
	printf("\n");
	printf("�T�o 1 ����/�[�ڦh�ֿ�: ");
	scanf_s("%lf", &costPerGallonOfGas);
	printf("\n");
	printf("���� 1 ���� /�[�گ��p�h�֤���: ");
	scanf_s("%lf", &AvMilePerGallon);
	printf("\n");
	printf("�@�Ѫ������O: ");
	scanf_s("%lf", &feesPerDay);
	printf("\n");
	printf("�@�Ѫ��q��O: ");
	scanf_s("%lf", &tollsPerDay);
	printf("\n");
	totCost = totKm / AvMilePerGallon * costPerGallonOfGas + feesPerDay + tollsPerDay;
	printf("�C�������O: %.2lf \n",totCost);
	system("pause");
	return 0;
}