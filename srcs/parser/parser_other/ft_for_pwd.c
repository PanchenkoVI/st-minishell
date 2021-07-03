/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_for_pwd(char *str, int j, int i, int m)
{
	if (j < 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == 'p' && str[i + 1] == 'w' && str[i + 2] == 'd' \
			&& str[i + 3] != '\0')
		{
			j = i + 3;
			while (str[i] != '|' && str[i] != '<' && str[i] != '>' && \
				str[i] != ';' && str[i] != '\0')
				i++;
			str = ft_for_pwd21(str, j, i, &m);
			break ;
		}
		i++;
	}
	if (ft_strlen(str) > j && m == 1)
		str = ft_for_pwd(str, 0, j, 0);
	return (str);
}
