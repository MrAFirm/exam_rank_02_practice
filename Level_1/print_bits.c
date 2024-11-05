#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				bits;
	unsigned char	c;

	bits = 8;
	while (bits--)
	{
		c = ((octet >> bits) & 1) + '0';
		write(1, &c, 1);
	}
}
