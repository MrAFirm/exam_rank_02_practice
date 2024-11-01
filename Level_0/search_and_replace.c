#include <unistd.h>

int main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc == 4 && argv[2][0] && argv[3][0])
	{
		while (argv[1][index])
		{
			if (argv[1][index] == argv[2][0])
				argv[1][index] = argv[3][0];
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}