/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_analysis_line(int i, char **line, int j)
{
	static char	*str;

	if (line == NULL)
		return (-1);
	if (ft_read_str(&str, &i) == 0)
		return (0);
	if (!str)
		return (0);
	while (str[j] && str[j] != '\n')
		j++;
	str = ft_strline(str, j, line);
	if (i != 0)
		i = 1;
	return (i);
}
