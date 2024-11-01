#include <unistd.h>
#include <stdlib.h>
#include <string.h>


void	first_word(char *str)
{
	size_t	main_index;

	main_index = 0;
	while (str[main_index] == ' ' || str[main_index] == '\t')
		main_index++;
	while (str[main_index] && str[main_index] != ' ' && str[main_index] != '\t')
		{
			write(1, &str[main_index], 1);
			main_index++;
		}
		write(1, "\n", 1);
	}

int main(int argc, char **argv)
{
	char	*message;
	if (argc != 2)
	{
		write(1, "Format Incorrect\nUsage: ./first_word <message>\n", 50);
		return (1);
	}
	message = argv[1];
	first_word(message);
	return (0);
}
