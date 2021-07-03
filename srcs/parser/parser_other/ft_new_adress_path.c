/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static void	ft_exit_crcl(int *i, int *j, int n)
{
	if (n == 1)
	{
		*i = *i + 1;
		*j = *j + 1;
	}
	else if (n == 2)
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
}

char		*ft_new_adress_path(char *str, char *tmp, int i, int m)
{
	char	*spr;
	int		n;

	spr = NULL;
	if (i == 1)
		str = ft_substr(str, 1, ft_strlen(str));
	n = ft_strlen(str) + ft_strlen(tmp) + i;
	if (!(spr = (char *)malloc(sizeof(char) * n)))
		ft_exit_crcl(&n, &m, 2);
	n = 0;
	while (tmp[n])
	{
		spr[m] = tmp[n];
		ft_exit_crcl(&n, &m, 1);
	}
	n = 0;
	if (i == 2)
		spr[m++] = '/';
	while (str[n])
	{
		spr[m] = str[n];
		ft_exit_crcl(&n, &m, 1);
	}
	spr[m] = '\0';
	return (spr);
}
