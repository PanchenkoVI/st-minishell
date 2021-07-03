/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_var_replacement(char *str, int n, char **env, int *j)
{
	char	*tmp;
	char	*line;
	char	*value;
	int		l;

	value = NULL;
	l = *j;
	tmp = ft_substr(str, l + 1, ft_strlen(str));
	g_env_s = tmp[0];
	n = ft_circle_i_env(env, tmp, 0, 1);
	line = ft_substr(tmp, n, ft_strlen(tmp));
	tmp[n] = '\0';
	n = ft_circle_i_env(env, tmp, -1, 2);
	value = ft_new_env(value, l, str);
	value = ft_new_v(value, &n, env, 0);
	*j = n;
	value = ft_strjoin_free(value, line);
	free(str);
	free(line);
	free(tmp);
	g_env_s = 0;
	return (value);
}
