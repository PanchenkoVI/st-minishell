/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static void	ft_path_tmp_j(char **line, char *env, int *m, int *w)
{
	int		i;
	int		l;

	i = *m;
	l = *w;
	i = ft_path_i(env, i, 2);
	*line = ft_substr(env, l, i - l);
	l = i + 1;
	*m = i;
	*w = l;
}

char		**ft_path_tmp(char **tmp, char *env, int i, int l)
{
	int		j;

	j = 0;
	if ((j = ft_leaks_path(&tmp, j, env, i)) == -1)
		return (NULL);
	while (env[i] != '\0')
	{
		if (env[i] == ':')
		{
			if (l == 0)
			{
				tmp[j] = ft_substr(env, l, i);
				l = i + 1;
			}
			else
				ft_path_tmp_j(&tmp[j], env, &i, &l);
			j++;
		}
		i++;
	}
	tmp[j] = NULL;
	return (tmp);
}
