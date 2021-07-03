/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static int	ft_r_arr(int n, int m)
{
	int		l;

	l = 0;
	if (n == m)
		l = 1;
	else
		l = m - n + 1;
	return (l);
}

char		**ft_reduction_arr2(char **str, int n, int m, int len)
{
	char	**arr;
	int		l;

	arr = NULL;
	l = ft_r_arr(n, m);
	if (!(arr = (char **)malloc(sizeof(char *) * (len + 1 - l))))
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	l = 0;
	n--;
	while (l != n)
	{
		arr[l] = str[l];
		l++;
	}
	while (str[m])
	{
		arr[l++] = str[m++];
	}
	arr[l] = NULL;
	free(str);
	return (arr);
}
