/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_new_stat(char *str, int l, int j, int len)
{
	char *tmp;

	tmp = NULL;
	len = ft_strlen(str);
	if (len > 1)
		len--;
	while (str[len])
	{
		if (str[len] == '/')
			break ;
		j++;
		len--;
	}
	tmp = ft_new_tmp_stat(tmp, str, len);
	if (str[0] == '/')
	{
		g_cdd = l;
		g_cd = tmp;
	}
	else
	{
		g_cdd = -1;
		g_cd = tmp;
	}
}
