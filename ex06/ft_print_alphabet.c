#include <unistd.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
