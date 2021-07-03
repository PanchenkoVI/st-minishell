/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	**ft_for_cd2(char **spr, int i)
{
	int l;

	l = i;
	if (ft_only_point(spr[l + 1]) == 0)
	{
		if (ft_strcmp(spr[l + 1], "..") != 0)
			spr[l + 1] = ft_correct_str(spr[l + 1], 1);
		if (spr[l + 2] == 0)
			return (spr);
		spr = ft_for_cd_point(spr, l + 2);
	}
	else if (ft_only_slash(spr[l + 1]) == 0)
	{
		spr[l + 1] = ft_correct_str(spr[l + 1], 2);
		if (spr[l + 2] == 0)
			return (spr);
		spr = ft_for_cd_slash(spr, l + 2);
	}
	return (spr);
}
