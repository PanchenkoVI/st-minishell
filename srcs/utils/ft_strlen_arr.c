/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_strlen_arr(char **spr)
{
	int i;

	i = 0;
	while (spr[i] != 0)
		i++;
	return (i);
}
