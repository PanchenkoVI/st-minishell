/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_start_echo(char *str)
{
	int i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		if (str[i] == '0')
			g_for_er++;
		i++;
	}
	i = 0;
	if ((i = ft_check_echo(str)) != 0)
		return ;
	str = ft_strecho(str);
	g_line_pipe = ft_strdup(str);
	ft_code_var(str);
	str = ft_strecho2(str);
	g_line = ft_strdup(str);
	free(str);
}
