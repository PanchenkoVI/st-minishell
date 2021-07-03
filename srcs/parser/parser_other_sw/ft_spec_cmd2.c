/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void		ft_spec_cmd2(char *str, int **j)
{
	if (str[0] == '>' && str[1] == '\0')
		**j = 1;
	else if (str[0] == '$' && str[1] == '?' && str[2] == '\0')
		**j = 1;
	else if (str[0] == 'u' && str[1] == 'n' && str[2] == 's' && \
		str[3] == 'e' && str[4] == 't' && str[5] == '\0')
		**j = 1;
	else if (str[0] == 'c' && str[1] == 'd' && str[2] == '\0')
		**j = 1;
}
