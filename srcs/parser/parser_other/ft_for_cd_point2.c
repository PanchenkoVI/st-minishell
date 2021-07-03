/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	**ft_for_cd_point2(char **spr, char *tmp, int *i, int *m)
{
	int	l;

	l = *i;
	while (spr[l] != 0)
	{
		if ((ft_strcmp(spr[l], ".") != 0))
		{
			if (!(ft_what_is_it(spr[l])))
			{
				if (ft_strcmp(tmp, "..") == 0)
					spr[l] = ft_correct_str(spr[l], 3);
				else
					spr[l] = ft_correct_str(spr[l], 1);
				*m = l - 1;
			}
			else
			{
				*m = l - 1;
				break ;
			}
		}
		l++;
	}
	*i = l;
	return (spr);
}
