#include<stdio.h>
#include<locale.h>
#define F 2.2046226
#define U 35.27396

float kg, f, u;

void main()
{
	setlocale(LC_ALL, "RUS");
	printf("������� ����� ���������\n");// ������� 30
	scanf("%f", &kg);
	f = F * kg; // �����
	u = U * kg; // �����
	printf("%f ��������� - %f ������\n", kg, f);
	printf("%f ��������� - %f ������\n", kg, u);



}