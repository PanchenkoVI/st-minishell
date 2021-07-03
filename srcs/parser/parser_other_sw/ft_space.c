/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_space(char *str, int i, int n, int m)
{
	int len;
	int j;

	j = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (str[i] == '\'' || str[i] == '\"')
			m = ft_space_m(m);
		if (str[i] == ' ' && str[i + 1] == ' ' && m == 0)
		{
			j = i + 1;
			while (str[i] != '\0' && str[i] == ' ')
				i++;
			n = i;
			str = ft_reduction_arr1(str, j, n, len);
			break ;
		}
		i++;
	}
	if (len != i)
		str = ft_space(str, 0, 0, 0);
	return (str);
}
