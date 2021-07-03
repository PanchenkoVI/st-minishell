/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static char	*ft_strecho2_2(char *str, char *tmp, int *l)
{
	int		i;

	i = *l;
	if (str[i + 1] == '1')
		tmp = ft_strjoin_free(tmp, "1");
	else if (str[i + 1] == '2')
		tmp = ft_strjoin_free(tmp, "2");
	i++;
	*l = i;
	return (tmp);
}

char		*ft_strecho2(char *str)
{
	int		i;
	char	*tmp;

	tmp = ft_strdup("");
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '6' && str[i + 1] == '7')
		{
			tmp = ft_strjoin_free(tmp, "8");
			i++;
			if (str[i + 1] == '2' || str[i + 1] == '1')
				tmp = ft_strecho2_2(str, tmp, &i);
		}
		else if (str[i] == '6' && str[i + 1] != '7')
			tmp = ft_strjoin_free(tmp, "9");
		i++;
	}
	free(str);
	return (tmp);
}
