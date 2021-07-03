/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_mb_dir(char *str, int k, int i)
{
	if (!str)
		return ;
	if (str[0] == '/' || str[0] == '.')
	{
		while (str[i] != '\0')
		{
			if (str[i] != '/' && str[i] != '.')
				break ;
			if (str[i] == '.' && str[i + 1] == '.' && \
				str[i + 2] == '.')
				break ;
			ft_mb_dir1(str, k, i);
			if (str[i] == '/' && str[i + 1] == '.' && \
				str[i + 2] == '.' && str[i + 3] == '.')
				break ;
			i++;
		}
	}
	if (g_qm != 3)
		ft_mb_dir2(str);
}
