#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (str[index])
	{
		if (str[index] == ' ' || str[index] >= 9 && str[index] <= 13)
			index++;
		if (str[index] >= '0' && str[index] <= '9')
		{
			result = (result * 10) + str[index] - '0';
			index++;
		}
	}
	return (index);
}

int	ft_isprime(int num)
{
	int	index;

	index = 2;
	if (num <= 1)
		return (0);
	while (index * index <= num)
	{
		if (num % index == 0)
			return (0);
		index++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	char	digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{
	int	index;
	int	sum;

	index = 2;
	sum = 0;
	if (ac == 2)
	{
		ft_atoi(av[1][index]);
		while (av[1][index] > 0)
		{
			if (ft_isprime(av[1][index]))
				sum += av[1][index];
			index--;
		}
		ft_putnbr(sum);
	}
	if (ac != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}

// ./add_prime_sum 5
// 2 + 3 + 5 (all prime numbers inferior or equal to it)