/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static void	ft_gsign_envss(void)
{
	if (g_sign == 1)
		g_sign = 2;
}

char		**ft_env2(t_info *inf, char **env, int i, char *tmp)
{
	int		j;

	j = 0;
	ft_gsign_envss();
	while (env[i][j] != '=' && env[i][j] != '\0')
		j++;
	if (env[i][j] == '=')
	{
		env[i][j] = '\0';
		tmp = ft_strdup(env[i]);
		inf->cmd_env = ft_arr2_sub_str(inf->cmd_env, tmp, 0);
		free(tmp);
		tmp = ft_strdup(&env[i][++j]);
		inf->cmd_env = ft_arr2_sub_str(inf->cmd_env, tmp, 0);
		free(tmp);
	}
	else
	{
		while (env[i][j] != '=' && env[i][j] != '\0')
			j++;
		tmp = ft_strdup(env[i]);
		inf->cmd_env = ft_arr2_sub_str(inf->cmd_env, tmp, 0);
		free(tmp);
	}
	return (inf->cmd_env);
}
