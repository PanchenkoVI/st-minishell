/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_open_file(t_instruct *instrct, int l, char *adress, int i)
{
	struct stat	var;
	int			fd;

	if ((fd = open(adress, O_RDONLY)) == -1)
	{
		ft_dont_open_file(&i);
		ft_open_file2(i, adress);
		errno = ft_other_error(adress, errno);
		ft_printf_err(instrct->instrct, errno);
		return (l = (-1));
	}
	fstat(fd, &var);
	l = ft_open_file3(i, var);
	close(fd);
	if (l > 0)
		ft_new_stat(adress, l, 0, 0);
	return (l);
}
