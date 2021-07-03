/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	m;
	size_t	n;
	int		i;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != '\0')
		i++;
	if (size <= 0)
		return (i);
	n = size - 1;
	m = 0;
	while (n > 0 && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
		n--;
	}
	dest[m] = '\0';
	return (i);
}
