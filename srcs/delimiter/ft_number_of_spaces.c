/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_number_of_spaces(char *line, int l, char ***w)
{
	char	*tmp2;

	tmp2 = NULL;
	while (ft_sign(line[l], " \t"))
		l++;
	if (!(tmp2 = (char *)malloc(sizeof(char) * (l + 1))))
		return (l);
	tmp2[l] = '\0';
	l = 0;
	while (ft_sign(line[l], " \t"))
	{
		tmp2[l] = line[l];
		l++;
	}
	*w = ft_arr2_sub_str(*w, tmp2, 0);
	free(tmp2);
	return (l);
}
