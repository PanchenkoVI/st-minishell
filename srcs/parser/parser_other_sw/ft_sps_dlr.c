/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_sps_dlr(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	if (str[0] != ' ')
		return (0);
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
