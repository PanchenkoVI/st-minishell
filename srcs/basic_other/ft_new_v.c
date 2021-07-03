/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_new_v(char *str, int *l, char **env, int n)
{
	n = *l;
	if (g_env_s == '?')
		str = ft_strjoin_free(str, g_print_err);
	else if (env[n])
	{
		n++;
		if (env[n])
			str = ft_strjoin_free(str, env[n]);
	}
	n = ft_strlen(str);
	*l = n;
	return (str);
}
