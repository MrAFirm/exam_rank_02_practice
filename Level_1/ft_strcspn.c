#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	index;
	int	second_index;

	index = 0;
	second_index = 0;
	while (s[index] && reject[second_index])
	{
		second_index = 0;
		while (reject[second_index])
		{
			if (s[index] == reject[second_index])
				return (index);
			second_index++;
		}
		index++;
	}
	return (index);
}
