/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int	cd_err(errno_t error_num, char **curr_wdir, char **path)
{
	free(*curr_wdir);
	g_print_err = "1";
	if (error_num != 0)
	{
		ft_printf_err(*path, error_num);
		free(*path);
		return (1);
	}
	free(*path);
	ft_putstr_fd("cd: No such file or directory\n", 0);
	return (1);
}
