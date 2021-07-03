/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_run_p(char *adress, char **env, int i)
{
	if (adress[0] == '.' && !adress[1])
	{
		g_qm = 1;
		return (adress);
	}
	else if (adress[0] == '.' && adress[1] == '.' && !adress[2])
	{
		g_qm = 2;
		return (adress);
	}
	while (env[i])
	{
		if (env[i][0] == 'P' && env[i][1] == 'A' && env[i][2] == 'T' && \
			env[i][3] == 'H' && env[i][4] == '\0')
			break ;
		i++;
	}
	adress = ft_path_line(env, adress, i);
	return (adress);
}
