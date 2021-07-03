/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_new_env(char *str, int j, char *tmp)
{
	int i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	while (i != j)
	{
		str[i] = tmp[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
