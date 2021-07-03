/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_mb_dir2(char *str)
{
	int i;

	i = 0;
	if (str[0] == '/')
	{
		while (str[i] != '\0')
		{
			if (str[i] != '/')
				break ;
			else if (str[i] == '/' && str[i + 1] == ' ' && \
				str[i + 2] == '\0')
			{
				g_qm = 3;
				g_flag = 1;
			}
			i++;
		}
	}
}
