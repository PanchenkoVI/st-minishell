/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_unset_str(t_info *inf, char **new, int *l, int n)
{
	char	**spr;
	int		i;

	spr = NULL;
	i = *l;
	new = ft_arr2_sub_str(new, inf->cmd_env[i], 0);
	i++;
	while (new[n])
		n++;
	n = n + 2;
	if (!(spr = (char **)malloc(sizeof(char *) * n)))
		return (NULL);
	spr = ft_unset_str_crc(spr, new, &n);
	spr[n++] = ft_strdup(inf->cmd_env[i]);
	spr[n] = NULL;
	n = 0;
	while (new[n])
	{
		free(new[n]);
		n++;
	}
	free(new);
	*l = i + 1;
	return (spr);
}
