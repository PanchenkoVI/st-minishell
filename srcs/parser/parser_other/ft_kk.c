/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int	ft_kk(char *str)
{
	int	l;
	int	i;

	if (!str)
		return (0);
	l = ft_strlen(str);
	if (l < 3)
		return (0);
	else if (str[0] == 'l' && str[1] == 's' && str[2] == '\0')
		return (1);
	else if (str[l - 3] == '/' && str[l - 2] == 'l' && \
		str[l - 1] == 's' && str[l] == '\0')
		return (1);
	else if (str[l - 3] == '/' && str[l - 2] == 'p' && \
		str[l - 1] == 's' && str[l] == '\0')
		return (1);
	else if (l < 4)
		return (0);
	i = 0;
	if ((i = ft_kk2(str, l)) != 0)
		return (i);
	return (0);
}
