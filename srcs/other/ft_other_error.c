/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_other_error(char *str, int n)
{
	int i;

	if (!str)
		return (n);
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_strcmp(str, "<") == 0) || \
		(ft_strcmp(str, "<<") == 0))
		{
			n = 2;
			g_src = 1;
		}
		else if (ft_strcmp(str, "<<<") == 0)
		{
			n = 2;
			g_src = -1;
		}
		i++;
	}
	return (n);
}
