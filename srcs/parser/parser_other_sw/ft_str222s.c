/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static int	ft_str222s_2(char *str, int i, int k, int j)
{
	if (k == 2)
		k = 0;
	else
	{
		k = 2;
		if (str[i + 1] == '\"' && i == j)
			k = -1;
	}
	return (k);
}

int			ft_str222s(char *str, int j)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\'')
		{
			if (ft_str222s0(str, &j, i, &k) == 1)
				return (1);
		}
		else if (str[i] == '\"')
		{
			k = ft_str222s_2(str, i, k, j);
			if (k == -1)
				return (1);
		}
		i++;
	}
	return (0);
}
