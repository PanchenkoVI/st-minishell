/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_ex_cont(t_info *inf, char *tmp, char *name)
{
	inf->cmd_env = ft_arr2_sub_str(inf->cmd_env, tmp, 0);
	inf->cmd_env = ft_arr2_sub_str(inf->cmd_env, name, 0);
	free(tmp);
	free(name);
}
