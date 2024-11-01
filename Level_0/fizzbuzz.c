#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int index)
{
	if (index > 9)
	{
		ft_putnbr(index / 10);
		ft_putchar((index % 10) + '0');
	}
	else
		ft_putchar(index + '0');
}

int	fizzbuzz()
{
	int	index;

	index = 1;
	while(index <= 100)
	{
		if (index % 3 == 0 && index % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (index % 3 == 0)
			write(1, "fizz", 4);
		else if (index % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(index);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}


int main (void)
{
	fizzbuzz();
	return (0);
}