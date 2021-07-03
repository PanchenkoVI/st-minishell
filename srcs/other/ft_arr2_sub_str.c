/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**ft_arr2_sub_str(char **arr, char *str, int n)
{
	char	**spr;

	spr = NULL;
	while (arr[n])
		n++;
	n = n + 2;
	if (!(spr = (char **)malloc(sizeof(char *) * n)))
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	n = 0;
	while (arr[n] != NULL)
	{
		spr[n] = ft_strdup(arr[n]);
		n++;
	}
	spr[n] = ft_strdup(str);
	n++;
	spr[n] = NULL;
	ft_free(arr);
	return (spr);
}
