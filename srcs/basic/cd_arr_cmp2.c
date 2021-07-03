/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void		cd_arr_cmp2(t_info *inf, char **path, char **curr_wdir)
{
	int i;

	i = 0;
	while (inf->cmd_env[i] && ft_strcmp(inf->cmd_env[i], "HOME") != 0)
		i++;
	if (inf->cmd_env[i] != NULL)
		*path = ft_strdup(inf->cmd_env[++i]);
	else
		*path = ft_strdup(*curr_wdir);
}
