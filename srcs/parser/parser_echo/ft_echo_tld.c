/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_echo_tld(char *str, int i, int j)
{
	if (j < 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' && \
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			i += 4;
			while (str[i] == ' ' && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				break ;
			if (str[i] == '~')
			{
				str = ft_echo_tld2(str, i);
				if (!str[i])
					return (str);
			}
		}
		i++;
	}
	return (str);
}
