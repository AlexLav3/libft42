#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (fd == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(fd, n / 10);
	}
	num = (n % 10) + '0';
	write(fd, &num, 1);
}
