#include<stdio.h>
#include<math.h>

long num2(long n);
long num8(long n);
long num16(long n);

int main()
{
	long n;
	
	printf("10진수 입력: ");
	
	scanf("%ld", &n);
	
	printf("10진수: %ld \n", n);
	printf("2진수 : %ld \n", num2(n));
	printf("8진수 : %ld \n", num8(n));
	printf("16진수 : %ld \n", num16(n));
}

long num2(long n)
{
	if(n<=1)
	{
		return n;
	}
	return num2(n/2)*10+n%2;
}

long num8(long n)
{
	if(n<=7)
	{
		return n;
	}
	return num2(n/8)*10+n%8;
}

long num16(long n)
{
	if(n<=15)
	{
		return n;
	}
	return num2(n/16)*10+n%16;
}

