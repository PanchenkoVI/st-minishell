/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (len)
	{
		*ptr++ = '\0';
		len--;
	}
}
