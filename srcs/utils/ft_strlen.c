/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i] != '\0')
		i++;
	return (i);
}
