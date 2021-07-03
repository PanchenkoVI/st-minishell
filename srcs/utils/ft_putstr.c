/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}
