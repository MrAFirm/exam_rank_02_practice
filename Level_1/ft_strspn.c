#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	index;
	int	index_2;
	int	found;

	index = 0;
	index_2 = 0;
	found = 0;
	while (s[index])
	{
		index_2 = 0;
		found  = 0;
		while (accept[index_2])
		{
			if (s[index] == accept[index_2])
			{
				found = 1;
				break ;
			}
			index_2++;
		}
		if (!found)
			break ;
		index++;
	}
	return (index);
}