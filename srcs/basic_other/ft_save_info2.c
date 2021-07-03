/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_save_info2(t_instruct *instrct, int **d, int i, char *line)
{
	char	**tmp;
	int		l;

	l = 0;
	tmp = instrct->flag;
	if (tmp[i][0] == '>' && tmp[i][1] == '>' && tmp[i][2] == '\0')
	{
		if ((**d = open(instrct->name[i], O_RDWR | O_CREAT | \
			O_APPEND, 0777)) == -1)
			l = -1;
	}
	else if (tmp[i][0] == '>' && tmp[i][1] == '\0')
	{
		if ((**d = open(instrct->name[i], O_RDWR | O_CREAT | \
			O_TRUNC, 0777)) == -1)
			l = -1;
	}
	else	if ((**d = open(instrct->name[i], O_RDONLY, 0777)) == -1)
		l = -1;
	if (l == -1)
	{
		ft_dect2(instrct, line);
		return (-1);
	}
	return (0);
}
