#include <stdio.h>
#pragma warning(disable:4996)

/*
int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}
*/

/*
int main(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("World! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	return 0;
}*/

/*int main(void)
{
	int result;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1);
		printf("정수 two: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}
*/
 /*int main(void)
{
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d \n", num1, num2, num3, result);
	return 0;

}
*/
int main(void)
{
	int result, result2;
	int num1, num2;

	printf("정수 one: ");
	scanf_s("%d", &num1);
	printf("정수 two: ");
	scanf_s("%d", &num2);

	result = num1 - num2;
	printf("%d - %d = %d \n", num1, num2, result);
	result2 = num1 * num2;
	printf("%d * %d = %d \n", num1, num2, result2);
	return 0;
	

}