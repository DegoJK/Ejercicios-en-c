#include<stdio.h>

int fibo(int fin, int cont, int a, int b);

int main()
{
	int final, calc;
	
	scanf("%d", &final);
	fflush(stdin);
	
	printf("Serie fibonacci numero %d: [%d]",final, fibo(final, 0, 0, 1));
}

int fibo( int fin, int cont, int a, int b)
{
	
	if(fin == cont)
	{
		return b - a;
	}else
	{
		printf("%d \n", a);
		b = a + b;
		a = b - a;
		
		
		fibo(fin, cont+1, a, b );
	}
	
}