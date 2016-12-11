/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oslutsky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:39:25 by oslutsky          #+#    #+#             */
/*   Updated: 2016/11/16 20:39:27 by oslutsky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INC_H
# define INC_H
# define BUFSIZE_STEP 4096

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct		s_map
{
	int				argc;
	char			**map;
	char			c_empty;
	char			c_obstacle;
	char			c_full;
	int				is_correct;
	int				x_sqr;
	int				y_sqr;
	int				size_sqr;
	int				last_x;
	int				last_y;
}					t_map;

t_map				get_map(int	argc, char **argv);
t_map				get_map2(int argc, char **argv);
int					test_map(t_map map);
void				print_map(t_map map);
int					ft_strlen(char *s);
void				ft_putstr(char *s);
char				*get_s_from_stream(int fd);
char				*get_s_from_file(char *filename);
void				ft_putchar(char c);
void				ft_split_newlines(char *s, char ***tab, int *argc);
int					ft_atoi_modified(char *s, char *c_e, char *c_o, char *c_f);
void				get_answer_for_map(t_map *map);
void				get1_answer_for_map(t_map *map);
#endif
