/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_rf(int file, char *tmp, int n, char *line)
{
	if (n == 1 && line[1] == '\0')
		file = open(tmp, O_CREAT | O_TRUNC | O_WRONLY, 0777);
	else if (n == 2)
		file = open(tmp, O_RDONLY);
	else if (n == 1 && line[1] == '>' && line[2] == '\0')
		file = open(tmp, O_CREAT | O_WRONLY | O_APPEND, 0777);
	return (file);
}
