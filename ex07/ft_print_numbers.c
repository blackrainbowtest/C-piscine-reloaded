#include <unistd.h>

void ft_putchar(char ch)
{
	    write(1, &ch, 1);
}

void ft_print_numbers(void)
{
	char	a;

	a = '0'
	while (a < '9')
	{
		ft_putchar(a);
		a++;
	}
}
