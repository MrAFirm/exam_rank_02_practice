#include <unistd.h>

int main(int argc, char **argv)
{
	int	index;
	int flag;

	index = 0;
	flag = 0;
	if (argc == 2)
	{
		while (argv[1][index] == ' ' || argv[1][index] == '\t')
			index++;
		while (argv[1][index])
		{
			if (argv[1][index] == ' ' || argv[1][index] == '\t')
				flag = 1;
			if (argv[1][index] != ' ' && argv[1][index] != '\t')
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &argv[1][index], 1);
			}
			index++;
		}
	}
	write(1 , "\n", 1);
	return (0);
}
