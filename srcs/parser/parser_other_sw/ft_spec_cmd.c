/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void		ft_spec_cmd(char *str, int *j)
{
	if (str[0] == 'e' && str[1] == 'n' && str[2] == 'v' && str[3] == '\0')
		*j = 1;
	else if (str[0] == 'e' && str[1] == 'c' && str[2] == 'h' && \
		str[3] == 'o' && str[4] == '\0')
		*j = 1;
	else if (str[0] == 'e' && str[1] == 'x' && str[2] == 'i' && \
		str[3] == 't' && str[4] == '\0')
		*j = 1;
	else if (str[0] == 'p' && str[1] == 'w' && str[2] == 'd' && str[3] == '\0')
		*j = 1;
	else if (str[0] == 'e' && str[1] == 'x' && str[2] == 'p' && \
		str[3] == 'o' && str[4] == 'r' && str[5] == 't' && str[6] == '\0')
		*j = 1;
	else if (str[0] == 'c' && str[1] == 'l' && str[2] == 'e' && \
		str[3] == 'a' && str[4] == 'r' && str[5] == '\0')
		*j = 1;
	ft_spec_cmd2(str, &j);
}
