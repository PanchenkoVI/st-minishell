/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_free(char **str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		free(str[n]);
		n++;
	}
	free(str);
}
