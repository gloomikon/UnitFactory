/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:44:21 by mzhurba           #+#    #+#             */
/*   Updated: 2019/08/20 19:39:59 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "../libft/ft_printf/includes/header.h"

# define PROGRAM_FLAGS	"ircpelh"

# define INPUT	(1 << 0)
# define RESULT	(1 << 1)
# define COLOR	(1 << 2)
# define PATHS	(1 << 3)
# define EMOJI	(1 << 4)
# define LEAKS	(1 << 5)
# define HELP	(1 << 6)

# define START	1
# define MID	2
# define END	3

typedef struct		s_vert
{
	char			*name;
	int				len;
	int				number;
	int				x;
	int				y;
	int				type;
	struct s_vert	*parent;
	struct s_vert	*next;
	bool			visited;
	bool			used;
	int				ants;
}					t_vert;

typedef struct		s_string
{
	char			*str;
	struct s_string	*next;
}					t_string;

typedef struct		s_path
{
	t_vert			**verts_arr;
	int				len;
}					t_path;

typedef struct		s_comb
{
	t_path			**paths_arr;
	int				count;
}					t_comb;

typedef struct		s_lemin
{
	long long		ants;
	int				verts_count;
	u_int8_t		beauty;
	bool			edges;
	t_vert			**verts;
	int				**matrix;
	t_vert			*start;
	t_vert			*end;
	t_string		*strs;
	int				result;
	t_comb			*comb;
	int				max_paths;
}					t_lemin;

/*
** READING
*/

void				read_data(t_lemin *lemin);
void				read_ants(t_lemin *lemin);
void				read_vertices(t_lemin *lemin, char **line, t_vert **verts);
void				read_edges(t_lemin *lemin, char **line);

/*
** SAVING INPUT
*/

t_string			*create_string(char *line);
void				strs_push_str(t_string **strs, t_string *str);
char				*read_line(t_lemin *lemin);

/*
** LISTS' FUNCTIONS
*/

void				add_vert_to_lst(t_lemin *lemin, t_vert **verts,
					t_vert *vert, int type);
t_vert				*create_vert(char *str, int number);
void				add_edge(t_lemin *lemin, t_vert *a, t_vert *b);

/*
** VALIDATION
*/

int					command(char *str);
int					comment(char *str);
int					room(char *str);
bool				check_vert(t_vert *verts, t_vert *vert);
void				check_edge(t_lemin *lemin, char **str,
					t_vert **a, t_vert **b);

/*
** COMBINATION & PATHS
*/

void				init_path(t_comb *comb, int verts);
int					add_path(t_lemin *lemin);
void				count_max_paths(t_lemin *lemin);
t_comb				*init_combination(int max_paths);

/*
** ANTS
*/

int					count_sum_of_paths(t_lemin *lemin, int n);
int					find_free_path(t_lemin *lemin);
void				generate_one_turn(int **ants, int *ants_left,
									t_lemin *lemin);
void				go_through_routes(t_lemin *lemin);

/*
** DISPLAYING RESULT
*/

void				print_input(t_lemin *lemin);
void				print_result(t_lemin *lemin);
void				print_help(void);
void				print_comb(t_lemin *lemin);
int					print_one_line(t_lemin *lemin, int ant, char *room);

/*
** AUXILIARY
*/

int					err_exit(int leaks, char *error);
t_vert				*find_vert(t_lemin *lemin, char *line);
void				create_adjacency_matrix(t_lemin *lemin, t_vert *verts);
int					annul(t_lemin *lemin);
int					free_verts_list(t_vert **verts);

#endif
