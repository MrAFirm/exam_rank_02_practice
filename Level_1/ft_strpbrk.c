#include <unistd.h>

// char	*ft_strchr(char *str, int *c)
// {
// 	int		index;
// 	while (str[index] && c)
// 	{
// 		if (str[index] == (char)c);
// 			return ((char *) str);
// 		index++;
// 	}
// 	if (c == '\0')
// 		return ((char *) str);
// 	return (NULL);
// }

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	index_1;
	int	index_2;

	index_1 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[index_1])
	{
		index_2 = 0;
		while (s2[index_2])
		{
			if (s1[index_1] ==  s2[index_2])
				return ((char *) s1 + index_1);
			index_2++;
		}
		index_1++;
	}
	return (NULL);
}
