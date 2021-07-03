/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static int	ft_crlc_nl(char *line, int k, char ch)
{
	k++;
	while (line[k] != ch && line[k] != '\0')
		k++;
	return (k);
}

char		*ft_newline2(char *line, int k)
{
	while (line[k] != '\0')
	{
		if (line[k] == '\'')
		{
			k = ft_crlc_nl(line, k, '\'');
			if (line[k] == '\0')
			{
				line = ft_union_str(line, "\'");
				break ;
			}
		}
		else if (line[k] == '\"')
		{
			k = ft_crlc_nl(line, k, '\"');
			if (line[k] == '\0')
			{
				line = ft_union_str(line, "\"");
				break ;
			}
		}
		k++;
	}
	return (line);
}
