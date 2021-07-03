/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_quotation_mark(char *str, int i, int len)
{
	int		j;
	int		n;
	char	m;

	j = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (((str[i] == '\'' && str[i + 1] == '\'') ||\
			(str[i] == '\"' && str[i + 1] == '\"')) && \
			len == 0 && (ft_str222s(str, i) > 0))
		{
			m = str[i];
			j = i + 1;
			while (str[i] != '\0' && str[i] == m)
				i++;
			n = i;
			str = ft_reduction_arr1(str, j, n, ft_strlen(str));
			break ;
		}
		i++;
	}
	if (ft_strlen(str) != i)
		str = ft_quotation_mark(str, 0, len);
	return (str);
}
