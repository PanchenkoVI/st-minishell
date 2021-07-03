/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	**ft_for_cd(char **spr)
{
	int i;

	i = 0;
	if (!spr)
		return (NULL);
	while (spr[i] != 0)
	{
		if (ft_strcmp(spr[i], "cd") == 0)
		{
			if (spr[i + 1] == 0)
				return (spr);
			if (spr[i] == 0)
				break ;
			if ((ft_only_point(spr[i + 1]) == 0) || \
				(ft_only_slash(spr[i + 1]) == 0))
				spr = ft_for_cd2(spr, i);
		}
		i++;
	}
	return (spr);
}
