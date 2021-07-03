/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_mb(char *str, int i, int k, errno_t *error_num)
{
	int len;

	if (!str)
		return ;
	len = ft_strlen(str);
	if (str[0] == '.')
	{
		while (str[i] != '\0')
		{
			if (str[i] != '/' && str[i] != '.')
				break ;
			else if (str[i] == '.' && str[i + 1] == '.' &&\
				str[i + 2] == '.')
			{
				*error_num = 2;
				break ;
			}
			k = ft_mb2(str, i, k);
			i++;
		}
		if (k == 1)
			ft_micro_mb(&error_num);
	}
}
