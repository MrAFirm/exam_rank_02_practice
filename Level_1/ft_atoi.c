#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	result;

	index = 0;
	sign = 1;
	result = 0;
	while (str[index])
	{
		if (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
			index++;
		if (*str == '-')
			sign = -1;
		if (str[index] >= '0' && str[index] <= '9')
		{
			result = result * 10 + str[index] - '0';
			index++;
		}
	}
	return (sign * result);
}