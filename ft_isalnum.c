
#include  "libft.h"

int	ft_isalnum(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123) || (n >= 48 && n <= 57))
		return (1);
	return (0);
}
