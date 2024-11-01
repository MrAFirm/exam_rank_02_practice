#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*rev_print(char	*str)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (str[index])
		index++;
	while (--index >= 0)
		write(1, &str[index], 1);
	write(1, "\n", 1);
	return (str);
}

int main()
{
	rev_print("Chicken");
	write(1, "\n", 1);
	rev_print("0123456789");
	write(1, "\n", 1);
	rev_print("namrekcaH rebmA");
	write(1, "\n", 1);
}
