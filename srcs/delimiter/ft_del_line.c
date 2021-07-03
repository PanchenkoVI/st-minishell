/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static void	ft_dldld2(char **spr, char *tmp, int n)
{
	if (n == 1)
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	else if (n == 2)
	{
		ft_free(spr);
		free(tmp);
	}
}

static int	ft_lenarr(char **spr)
{
	int		n;

	n = 0;
	while (spr[n])
		n++;
	n = n + 2;
	return (n);
}

char		**ft_del_line(char *line, int len, int *l, char **spr)
{
	char	*tmp;
	char	**tmp2;
	int		i;
	int		n;

	tmp2 = NULL;
	i = *l;
	len = ft_special_char(&line[i], 0, 0);
	tmp = ft_substr(line, i, len);
	*l = *l + len;
	n = ft_lenarr(spr);
	if (!(tmp2 = (char **)malloc(sizeof(char *) * n)))
		ft_dldld2(spr, tmp, 1);
	n = 0;
	while (spr[n] != NULL)
	{
		tmp2[n] = ft_strdup(spr[n]);
		n++;
	}
	tmp2[n] = ft_strdup(tmp);
	n++;
	tmp2[n] = NULL;
	ft_dldld2(spr, tmp, 2);
	return (tmp2);
}
