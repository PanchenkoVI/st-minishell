/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_qm_for_n(char *str, int i, int j, int m)
{
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' &&\
			str[i + 3] == 'o' && str[i + 4] == ' ' && str[i + 5] == '-' && \
			str[i + 6] == 'n' && str[i + 7] == ' ')
		{
			i += 7;
			while (str[i] == ' ' && str[i] != '\0' && \
				str[i] != ';' && str[i] != '|')
				i++;
			if (str[i] == '\0')
				return (str);
			j = i;
			while (str[i] != '\0' && str[i] != ';' && str[i] != '|')
				i++;
			m = i - 1;
			str = ft_qm_for_n2(str, m, j);
			if (str[m + 1] != '\0')
				str = ft_qm_for_n(str, m + 1, 0, 0);
			break ;
		}
		i++;
	}
	return (str);
}
