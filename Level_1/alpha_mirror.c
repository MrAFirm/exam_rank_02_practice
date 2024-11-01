#include <unistd.h>

// int main(int argc, char **argv)
// {
// 	int	index;

// 	index = 0;
// 	if (argc == 2)
// 	{
// 		while (argv[1][index])
// 		{
// 			if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
// 				argv[1][index] = ('a' + 'z') - argv[1][index];
// 			else if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
// 				argv[1][index] = ('A' + 'Z') - argv[1][index];
// 			write(1, &argv[1][index], 1);
// 			index++;
// 		}
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

int main(int argc, char **argv)
{
	int		index;
	char	*str_lowercase;
	char	*str_uppercase;

	index = 0;
	str_lowercase = "zyxwvutsrqponmlkjihgfedcba";
	str_uppercase = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

	if (argc == 2)
	{
		while (argv[1][index])
		{
			if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
				argv[1][index] = str_lowercase[argv[1][index] - 'a'];
			else if  (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
				argv[1][index] = str_uppercase[argv[1][index] - 'A'];
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
