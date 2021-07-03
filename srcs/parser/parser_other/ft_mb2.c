/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_mb2(char *str, int i, int k)
{
	if (str[i] == '.' && str[i + 1] == '/' && \
		str[i + 2] == ' ' && str[i + 3] == '\0')
		k = 1;
	else if (str[i] == '/' && str[i + 1] == '.' && \
		str[i + 2] == '\0')
		k = 1;
	else if (str[i] == '/' && str[i + 1] == '.' && \
		str[i + 2] == ' ' && str[i + 3] == '\0')
		k = 1;
	else if (str[i] == '.' && str[i + 1] == '/' && \
		str[i + 2] == '\0')
		k = 1;
	else if (str[i] == '.' && str[i + 1] == '.' && \
		str[i + 2] == '/' && str[i + 3] == ' ' && str[i + 4] == '\0')
		k = 1;
	else if (str[i] == '.' && str[i + 1] == '.' && \
		str[i + 2] == '/' && str[i + 3] == '\0')
		k = 1;
	return (k);
}
