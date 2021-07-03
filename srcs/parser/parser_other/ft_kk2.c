/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_kk2(char *str, int l)
{
	if (str[l - 4] == '/' && str[l - 3] == 'c' && \
		str[l - 2] == 'a' && str[l - 1] == 't' && str[l] == '\0')
		return (1);
	else if (str[l - 4] == '/' && str[l - 3] == 'p' && \
		str[l - 2] == 'w' && str[l - 1] == 'd' && str[l] == '\0')
		return (1);
	else if (l < 5)
		return (0);
	else if (str[l - 5] == '/' && str[l - 4] == 'e' && \
		str[l - 3] == 'c' && str[l - 2] == 'h' && \
		str[l - 1] == 'o' && str[l] == '\0')
		return (1);
	return (0);
}
