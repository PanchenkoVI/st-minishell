/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int	ft_cd(t_info *inf, t_instruct *instrct, int i)
{
	char	*path;
	char	*pwd;
	char	*curr_wdir;

	cd_set_all0(&i, &path, &curr_wdir);
	curr_wdir = getcwd(NULL, 10);
	if (cd_arr_cmp(instrct, inf, &path, &curr_wdir) == 1)
		return (cd_err(errno, &curr_wdir, &path));
	if (chdir(path) != 0)
		return (cd_err(errno, &curr_wdir, &path));
	else
	{
		pwd = "OLDPWD";
		cd_wdir_change(&curr_wdir, inf, &pwd);
	}
	cd_set_all0(&i, &path, &curr_wdir);
	ft_save_info(instrct, 0, ft_strdup(""));
	return (0);
}
