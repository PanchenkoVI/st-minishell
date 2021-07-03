/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_reduction_arr3(char *str, int m, int n)
{
	char	*spr;
	int		l;

	l = ft_strlen(str) - 1;
	if (!(spr = (char *)malloc(sizeof(char) * l)))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	l = 0;
	while (l != m)
	{
		spr[l] = str[l];
		l++;
	}
	m++;
	while (m != n)
	{
		spr[l] = str[m];
		l++;
		m++;
	}
	spr = ft_reduction_arr31(spr, str, n, l);
	free(str);
	return (spr);
}
