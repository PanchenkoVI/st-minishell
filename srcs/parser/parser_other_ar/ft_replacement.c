/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_replacement(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' &&\
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			i += 4;
			while (str[i] == ' ' && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				break ;
			if (str[i] == '$' && str[i + 1] == '0')
				str = ft_replacement1(str, i);
			else if (str[i] == '$' && (ft_isdigit(str[i + 1]) == 1))
			{
				str = ft_replacement2(str, i);
				if (!str[i])
					return (str);
			}
		}
		i++;
	}
	return (str);
}
