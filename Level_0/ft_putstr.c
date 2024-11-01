#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}