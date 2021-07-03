/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_start_line(char **env, int i)
{
	char	*str;

	str = ft_strdup("MINISHELL:");
	while (env[i])
	{
		if (env[i][0] == 'P' && env[i][1] == 'W' && \
			env[i][2] == 'D' && env[i][3] == '\0')
		{
			i++;
			str = ft_strjoin_free(str, env[i]);
			break ;
		}
		i++;
	}
	str = ft_strjoin_free(str, ": <-> ");
	ft_start_line2(env, 0);
	g_var = "";
	g_for_sig = str;
	write(1, str, ft_strlen(str));
}
