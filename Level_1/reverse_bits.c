#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				bits;
	unsigned char	c;

	bits = 8;
	while (bits--)
	{
		c = (c << 1) | (octet & 1) + '0';
		octet >>= 1;
	}
	return (c);
}
