/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_strcmp(char *str1, char *str2)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	if (!str1 || !str2)
		return (1);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
