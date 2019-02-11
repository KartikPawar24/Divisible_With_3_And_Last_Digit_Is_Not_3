#include<Stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter the value of n:\n");
	scanf("%d", &n);
	if (n % 3 == 0 && n % 10 != 3)
	{
		printf("%d is divisible by 3 and last digit is not 3", n);
	}
	else
	{
		printf("%d does not satisfy the condition", n);
	}
	_getch();
}