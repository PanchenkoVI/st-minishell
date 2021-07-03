/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static void	ft_info_mmm(t_info *inf)
{
	if (!(inf->sign->fvar = (char **)malloc(sizeof(char *) + 1)))
		ft_error("Problem in malloc", inf);
	else if (!(inf->sign->arvar = (char **)malloc(sizeof(char *) + 1)))
		ft_error("Problem in malloc", inf);
}

static	int	ft_stop_pars(char *str, int i)
{
	if (i > 0)
	{
		i--;
		while (str[i])
		{
			if (str[i] == '|')
			{
				if (i > 1)
				{
					if (str[i - 1] == '|')
						return (2);
					else
						return (1);
				}
				else
					return (1);
			}
			else if (str[i] == ' ' || str[i] == '\t')
				i--;
			else
				break ;
		}
	}
	return (0);
}

static char	*ft_p_m_c(char *line, int i)
{
	int j;

	j = 0;
	if ((j = ft_stop_pars(line, i)) > 0)
	{
		if (j == 1)
		{
			free(line);
			line = ft_strdup("|");
		}
		else if (j == 2)
		{
			free(line);
			line = ft_strdup("||");
		}
	}
	return (line);
}

void		ft_parss(char *line, t_info *inf, int k, int j)
{
	char	**s;
	int		l;

	line = ft_p_m_c(line, ft_strlen(line));
	s = NULL;
	l = ft_dollar(line, 0, &j);
	line = ft_echo_tld(line, 0, ft_tld_echo(line));
	line = ft_cd_tld(line, 0, ft_tld_cd(line, '~'));
	line = ft_cd_minus(line, 0, ft_tld_cd(line, '-'));
	line = ft_space(line, 0, 0, 0);
	line = ft_for_pwd(line, ft_srl_pwd(line), 0, 0);
	if (l == 0)
	{
		line = ft_quotation_mark(line, 0, k);
		line = ft_qmark2(line, 0, k);
		line = ft_qmark22(line, 0, k);
	}
	line = ft_replacement(line, 0);
	if (j > -1 && l > 0)
		line = ft_str_with_env(inf, line, j, 0);
	if (!(inf->sign = (t_variable *)malloc(sizeof(t_variable))))
		ft_error("Problem in malloc", inf);
	ft_info_mmm(inf);
	ft_pars_cont(line, inf, s);
}
