/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_pars_cont(char *line, t_info *inf, char **s)
{
	int		i;
	char	**date;
	int		j;

	j = dup(0);
	g_key = 9;
	ft_chk_str(&line, j, 0);
	ft_start_echo(line);
	i = ft_one_or_two_err(line, 0, 0);
	if (g_key == 13)
		return ;
	if (!(s = (char **)malloc(sizeof(char *) * 1)))
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	s[0] = NULL;
	date = ft_word_count(line, 0, &s, 0);
	date = ft_for_cd(date);
	inf->sign->fvar[0] = NULL;
	inf->sign->arvar[0] = NULL;
	line_structure_parse(date, s, inf, i);
	ft_free(date);
	ft_free(s);
}
