#include <stdio.h>
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			
			if (a == 98 && b == 99)
			{
				continue;
			}
			
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		
	}
	putchar('\n');	
}