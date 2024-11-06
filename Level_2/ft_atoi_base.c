#include <unistd.h>
#include <stdlib.h>

char	to_lower(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str += 32;
		str++;
	}
	return (str);
}

int	get_digit(char c, int digits_in_base)
{
	int	result;
	if (digits_in_base <= 10) //index 0-9
		result = (digits_in_base - 1) + '0';
	else
		result = (digits_in_base - 10 - 1) + 'a'; //offset the char a from 123456789abcdef to symbolise the tenth digit in the base
	if (c >= '0' && c <= '9' && c <= result)
		return (c - '0');
	else if (c >= 'a' && c <= 'z' && c <= result)
		return (c + 10 - 'a');
	else
		return (EXIT_FAILURE);
	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	index;
	int	flag;
	int	result;
	int	digit;

	index = 0;
	flag = 1;
	result = 0;
	digit = 0;
	if (!str || str_base < 2 || str_base > 16)
		return (EXIT_FAILURE);
	while(str[index])
	{
		if (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
			index++;
		if (flag == '-')
			flag = -1;
		else if (flag == '+')
			index++;
		digit = get_digit(to_lower(str[index]), str_base);
		if (digit == -1) //invalid character for base
			break ;
		result = result * str_base + digit;
		index++;
		
	}
	return (result * flag);
}