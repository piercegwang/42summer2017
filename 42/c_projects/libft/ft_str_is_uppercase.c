#include "libft.h"

int	ft_str_is_uppercase(char *str)
{
	if (ft_str_is_alpha(str) && str == ft_strupcase(str))
		return (1);
	return (0);
}
