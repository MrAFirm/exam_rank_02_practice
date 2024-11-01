#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		length;
	int		index;

	index = 0;
	length = 0;
	while (src[length])
		length++;
	dest = malloc(sizeof(*dest) * (index + 1));
	if (!dest)
		return (NULL);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
