/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_next_str(char *str, int j)
{
	int		l;
	char	*tmp2;

	tmp2 = NULL;
	l = 0;
	while (str[l])
		l++;
	if (!(tmp2 = (char *)malloc(sizeof(char) * (l - j + 1))))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	j++;
	l = 0;
	while (str[j])
	{
		tmp2[l] = str[j];
		j++;
		l++;
	}
	tmp2[l] = '\0';
	free(str);
	return (tmp2);
}
