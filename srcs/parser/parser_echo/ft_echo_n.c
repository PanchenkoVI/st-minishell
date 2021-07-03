/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_echo_n(char *str, int i, int j)
{
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' &&\
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			i += 4;
			while (str[i] == ' ')
				i++;
			if (str[i] == '-' && str[i + 1] == 'n' && \
				(str[i + 2] == 'n' || str[i + 2] == ' '))
			{
				str = ft_echo_n1(str, i, &j);
				if (str[j] != '\0')
					str = ft_echo_n(str, j, 0);
				break ;
			}
		}
		i++;
	}
	return (str);
}
