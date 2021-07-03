/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static char	*ft_dble_nn(char *str, int i, int *l)
{
	char	*tmp;
	int		j;

	j = *l;
	if (str[i] == '|')
		tmp = ft_substr(str, 0, j - 1);
	else
		tmp = ft_substr(str, 0, j);
	str = ft_substr(str, i, ft_strlen(str));
	str = ft_strjoin_free(tmp, str);
	*l = j;
	return (str);
}

char		*ft_double_n(char *str, int i, int j, int m)
{
	while (str[i] != '\0')
	{
		if (str[i] == 'e' && str[i + 1] == 'c' && str[i + 2] == 'h' &&\
			str[i + 3] == 'o' && str[i + 4] == ' ')
		{
			if (str[i + 5] == '-' && str[i + 6] == 'n')
			{
				i += 7;
				j = i + 1;
				i = ft_double_n1(str, i, &m);
				str = ft_dble_nn(str, i, &j);
				if (str[j - 1] != '\0')
					str = ft_double_n(str, j, 0, -1);
				break ;
			}
		}
		i++;
	}
	return (str);
}
