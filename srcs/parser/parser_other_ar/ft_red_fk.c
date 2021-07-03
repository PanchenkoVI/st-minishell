/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_red_fk(char **date, char *tmp, char *line, int file)
{
	pid_t	p;
	int		dect[2];

	if (line[0] == '>')
		file = ft_rf(file, tmp, 1, line);
	else if (line[0] == '<' && line[1] == '\0')
		file = ft_rf(file, tmp, 2, line);
	p = fork();
	pipe(dect);
	if (line[0] == '<' && line[1] == '\0')
	{
		g_ch = '0';
		ft_choose_side(p, dect, date, file);
	}
	else if (line[0] == '>' && line[1] == '\0')
	{
		g_ch = '1';
		ft_choose_side(p, dect, date, file);
	}
	else if (line[0] == '>' && line[1] == '>' && line[2] == '\0')
	{
		g_ch = '1';
		ft_choose_side(p, dect, date, file);
	}
}
