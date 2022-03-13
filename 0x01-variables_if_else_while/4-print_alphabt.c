#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z') 
	{
		if (alphabet !='e' && alphabet !='q')
     {
	     putchar(alphabet);
     }
		alphabet++ ;
     }
	putchar('\n');
     


return 0;
}
