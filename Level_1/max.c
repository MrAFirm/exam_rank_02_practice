#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int	result;
	int	index;

	index = 0;
	if (len == 0)
		return (0);
	result = tab[0]; // initialise the result to the first index for comparison.
	index = 1; //to avoid redundant index 0 and tab 0 comparison.
	while (index < len)
	{
		if (result < tab[index])
			result = tab[index];
		index++;
	}
	return (result);
}
