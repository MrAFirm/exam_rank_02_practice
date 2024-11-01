#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

int main()
{
	char	*s1;
	char	*s2;
	int		chicken;

	s1 = "abc";
	s2 = "abc";
	chicken = ft_strcmp(s1, s2);
	return (0);
}