/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_newtmp(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '2')
		{
			if (str[i])
				str = ft_reduction_arr(str, i, 0);
			if (str[i - 1])
				str = ft_reduction_arr(str, i - 1, 0);
			if (str[i - 2])
				str = ft_reduction_arr(str, i - 2, 0);
		}
		i++;
	}
	return (str);
}
