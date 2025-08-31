/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danzamor <danzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 20:07:34 by cgaldon-          #+#    #+#             */
/*   Updated: 2025/08/31 21:50:23 by danzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <limits.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_num
{
	char	*nb;
	char	*text;
}	t_num;

char	**ft_split(char *str, char *charset);
char	*ft_strdup(char *src);
t_num	*pars(char *buf);
char	*ft_strndup(char *src, int n);
int		slen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	algo(t_num *sarr, char *num);
void	sort_dict(t_num *sarr);
int		argv_error(int argc, char **argv);
void	ft_free_all(t_num *sarr);
void	print_error(int errno);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

#endif