/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_change_sign2(char *str, int *l, char qt)
{
	int j;

	j = *l;
	if (str[j] == '\\' && (str[j + 1] == qt) && (g_qm != -1))
		str = ft_reduction_arr(str, j++, 0);
	else if (str[j] == '\\' && (str[j + 1] == '\\') && (g_qm != -1))
	{
		str = ft_reduction_arr(str, j, 0);
		j++;
	}
	*l = j;
	return (str);
}
