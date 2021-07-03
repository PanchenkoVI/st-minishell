/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_line_for_read(char *str, char *tmp, int *l, int i)
{
	int j;

	j = 0;
	while (str[i])
	{
		tmp[j] = str[i];
		i++;
		j++;
	}
	*l = j;
	return (tmp);
}
