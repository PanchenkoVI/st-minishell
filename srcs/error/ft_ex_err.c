/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_ex_err(char **date, char **env, int n)
{
	char *tmp;

	if (n == 2)
	{
		tmp = ft_strdup(*date);
		g_flag = 1;
		ft_printf_err(tmp, 21);
		free(tmp);
		return (-1);
	}
	else if (n == 1)
	{
		*date = ft_run_p(*date, env, 0);
		return (1);
	}
	return (0);
}
