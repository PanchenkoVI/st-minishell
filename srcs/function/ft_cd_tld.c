/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_cd_tld(char *str, int i, int j)
{
	if (j < 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == 'c' && str[i + 1] == 'd' && str[i + 2] == ' ')
		{
			i += 2;
			while (str[i] == ' ' && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				break ;
			if (str[i] == '~')
			{
				str = ft_cd_tld2(str, i);
				if (!str[i])
					return (str);
			}
		}
		i++;
	}
	return (str);
}
