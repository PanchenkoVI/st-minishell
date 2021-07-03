/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	**ft_for_cd_slash2(char **spr, int *l, int *m)
{
	int i;

	i = *l;
	while (spr[i] != 0)
	{
		if (ft_strcmp(spr[i], ".") != 0)
		{
			if (!(ft_what_is_it(spr[i])))
			{
				spr[i] = ft_correct_str(spr[i], 2);
				*m = i - 1;
			}
			else
			{
				*m = i - 1;
				break ;
			}
		}
		i++;
	}
	*l = i;
	return (spr);
}
