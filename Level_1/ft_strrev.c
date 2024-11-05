#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		index;
	int		start;
	char	temp;
	
	index = 0;
	start = 0;
	while (str[index])
		index++;
	index--;
	
	while (start < index)
	{
		temp = str[start];
		str[start] = str[index];
		str[index] = temp;
		start++;
		index--;

	}
	return (str);
}