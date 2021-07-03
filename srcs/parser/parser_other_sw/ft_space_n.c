/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static char	*ft_space_n2n(char *str, int i, int j)
{
	char	*tmp;

	tmp = NULL;
	tmp = ft_substr(str, 0, i + 1);
	str = ft_substr(str, j, ft_strlen(str));
	str = ft_strjoin_free(tmp, str);
	return (str);
}

char		*ft_space_n(char *str, int i, int j)
{
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' &&\
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			if (str[i + 5] == '-' && str[i + 6] == 'n')
			{
				while (str[i] != '\0' && str[i] != '|' && str[i] != ';')
					i++;
				j = i;
				i--;
				while (str[i] == ' ')
					i--;
				str = ft_space_n2n(str, i, j);
				if (str[i] != '\0')
					str = ft_space_n(str, i, 0);
				break ;
			}
		}
		i++;
	}
	return (str);
}
