/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_open_file3(int i, struct stat var)
{
	if ((var.st_mode & S_IRWXU) == (S_IXUSR))
		i = 1;
	else if ((var.st_mode & S_IRWXU) == (S_IXUSR + S_IWUSR))
		i = 1;
	else if ((var.st_mode & S_IRWXU) == (S_IXUSR + S_IRUSR))
		i = 1;
	else if ((var.st_mode & S_IRWXU) == (S_IXUSR + S_IRUSR + S_IWUSR))
		i = 1;
	return (i);
}
