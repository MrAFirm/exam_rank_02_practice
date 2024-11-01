#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	size_t	index_str1;

	index_str1 = 0;
	while (s1[index_str1])
	{
		s2[index_str1] = s1[index_str1];
		index_str1++;
	}
	s2[index_str1] = '\0';
	return (s2);
}

// char *ft_strcpy(char *s1, char *s2)
// {
// 	size_t i;
// 	i = 0;
// 	while (s1[i])
// 	{
// 		s2[i] = s1[i];
// 		i++;
// 	}
// 	return (s2);
// }

int main()
{
	char	*s1;
	char	s2[8];

	s1 = "Chicken";
	ft_strcpy(s1, s2);
	while (*s1)
	{
		write(1, s1, 1);
		s1++;
	}
	return (0);
}