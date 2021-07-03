/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_exp_save_char2(char *tmp, char **str1, char **str2, int j)
{
	int n;

	if (j == 1)
	{
		n = ft_time_sign_ex(tmp, 0, 1);
		tmp[n] = '\0';
		*str1 = ft_strdup(tmp);
		n++;
		*str2 = ft_strdup(&tmp[n]);
		return ;
	}
	else if (j == 2)
	{
		n = ft_time_sign_ex(tmp, 0, 1);
		tmp[n] = '\0';
		*str2 = ft_strdup(tmp);
		n++;
		*str1 = ft_strdup(&tmp[n]);
	}
}
