#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void){
	int n;
	int m;

	for (m=48; m<57; m++)
	{
              for (n=49; n<58; n++)
		{
			if(m<n)
			{
		        	putchar(m);
		                putchar(n);
			        putchar(',');
	                        putchar(' ');
                        }
		}

	     }
putchar('\n');
	return (0);
}
