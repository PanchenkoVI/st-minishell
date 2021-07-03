/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_check_echo(char *line)
{
	int i;

	i = 0;
	if ((i = ft_sign(';', line) == 0) && \
		(i = ft_sign('|', line) == 0))
		return (1);
	if ((i = ft_quantity_echo(line)) == 0)
		return (1);
	while (line[i] != '\0')
	{
		if (line[i] == '$' && line[i + 1] == '?')
			return (0);
		i++;
	}
	return (1);
}
