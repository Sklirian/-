
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long	num;
	int			sign;

	sign = 1;
	num = 0;
	while (*nptr == ' ' || *nptr == '\n' || *nptr == '\t'
		|| *nptr == '\r' || *nptr == '\v' || *nptr == '\f')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9' && *nptr)
	{
		if (-2147483648 > num * sign)
			return (0);
		else if (2147483647 < num * sign)
			return (-1);
		num *= 10;
		num += *nptr++ - '0';
	}
	return (num * sign);
}
