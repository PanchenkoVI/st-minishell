/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	cd_wdir_change(char **curr_wdir, t_info *inf, char **pwd)
{
	int	i;
	int	j;

	j = 0;
	while (j < 2)
	{
		i = 0;
		while (inf->cmd_env[i] && ft_strcmp(inf->cmd_env[i], *pwd) != 0)
			i++;
		cd_if_relocate(&i, inf, pwd);
		free(inf->cmd_env[++i]);
		inf->cmd_env[i] = ft_strdup(*curr_wdir);
		free(*curr_wdir);
		*curr_wdir = getcwd(NULL, 10);
		*pwd = "PWD";
		j++;
	}
}
