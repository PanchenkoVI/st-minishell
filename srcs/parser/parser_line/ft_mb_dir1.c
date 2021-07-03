/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_mb_dir1(char *str, int k, int i)
{
	if (str[i] == '/' && str[i + 1] == '.' && str[i + 2] == '\0')
		k = 1;
	else if (str[i] == '/' && str[i + 1] == '.' && str[i + 2] == '.' && \
		str[i + 3] == '\0')
		k = 1;
	else if (str[i] == '/' && str[i + 1] == '.' && str[i + 2] == '.' && \
		str[i + 3] == '/' && str[i + 4] == ' ' && str[i + 5] == '\0')
		k = 1;
	else if (str[i] == '.' && str[i + 1] == '/' && str[i + 2] == '\0')
		k = 1;
	else if (str[i] == '.' && str[i + 1] == '/' && str[i + 2] == ' ' && \
		str[i + 3] == '\0')
		k = 1;
	if (k == 1)
	{
		g_qm = 3;
		g_flag = 1;
	}
}
