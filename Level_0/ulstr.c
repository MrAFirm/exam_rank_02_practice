#include <unistd.h>

int main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc == 2)
	{
		while (argv[1][index])
		{
			if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
				argv[1][index] -= 32;
			else if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
				argv[1][index] += 32;
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}