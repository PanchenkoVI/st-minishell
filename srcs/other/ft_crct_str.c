/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_crct_str(char **line, int *fd)
{
	char *str;

	str = ft_anlz_and_add(*line);
	dup2(fd[1], 1);
	close(fd[0]);
	ft_putstr_fd(str, 1);
	close(fd[1]);
	exit(1);
}
