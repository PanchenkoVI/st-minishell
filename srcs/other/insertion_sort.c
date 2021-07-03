/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	insertion_sort(int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		if (ft_strcmp(g_env[i - 1], g_env[i]) > 0)
		{
			tmp = g_env[i];
			j = i;
			while (j > 0 && ft_strcmp(g_env[j - 1], tmp) > 0)
			{
				g_env[j] = g_env[j - 1];
				j--;
			}
			g_env[j] = tmp;
		}
		i++;
	}
}
