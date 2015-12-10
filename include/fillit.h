/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelefos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:13:46 by pdelefos          #+#    #+#             */
/*   Updated: 2015/12/10 17:34:00 by pdelefos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char				*ft_get_pieces(char *filename);
int					ft_check_errors(char *str_piece);

void				ft_putstr(char *str);
void				ft_lst_pback(t_list **alst, void *cnt, size_t cnt_size);
void				ft_putendl(char *str);
void				ft_putnbr(int n);
void				ft_putchar(char c);

int					ft_strlen(char *str);

char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);

#endif
