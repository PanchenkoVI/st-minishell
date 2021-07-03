/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static void	ft_red_ar_exits(void)
{
	ft_putstr_fd("Problem in *str (Malloc).\n", 0);
	exit(12);
}

char		*ft_reduction_arr(char *str, int n, int m)
{
	char	*spr;

	spr = NULL;
	while (str[m])
		m++;
	if (!(spr = (char *)malloc(sizeof(char) * (m++))))
		ft_red_ar_exits();
	m = 0;
	while (m != n)
	{
		spr[m] = str[m];
		m++;
	}
	n++;
	while (str[n])
	{
		spr[m] = str[n];
		n++;
		m++;
	}
	spr[m] = '\0';
	free(str);
	return (spr);
}
