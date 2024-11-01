#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
