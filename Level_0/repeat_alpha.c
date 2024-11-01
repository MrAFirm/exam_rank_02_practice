#include <unistd.h>

int main(int argc, char **argv)
{
	int index;
	int count;

	index = 0;
	if (argc == 2)
	{
		while (argv[1][index])
		{
			if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
				count = argv[1][index] - 'a' + 1;
			else if (argv[1][index] >= 'A' && argv[1][index] <= 'A')
				count = argv[1][index] - 'a' + 1;
			else
				write(1, &argv[1][index], 1);
			
			while (count--)
				write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}