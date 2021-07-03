/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	cd_if_relocate(int *i, t_info *inf, char **pwd)
{
	if (!(inf->cmd_env[*i]))
	{
		inf->cmd_env = cd_realloc(inf->cmd_env, *pwd);
		inf->cmd_env = cd_realloc(inf->cmd_env, "");
	}
}
