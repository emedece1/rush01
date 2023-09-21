/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcanari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:07:55 by dcanari           #+#    #+#             */
/*   Updated: 2023/09/17 20:34:43 by dcanari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# define UNASSIGNED 0
# define TRUE 1
# define FALSE 0

enum	e_view_point
{
	col_up,
	col_down,
	row_left,
	row_right
};
typedef enum e_view_point	t_view_point;
typedef int**				t_board;
typedef int**				t_views;

int		solve(t_board board, t_views views, int *slv);
int		find_next_unassigned(t_board board, int *row, int *col);
int		is_alone(t_board board, int bfloor, int row, int col);
int		check_viewpoints(t_board board, t_views views);
int		check_line(t_board board, t_view_point view, int view_line, int building_viewed);

t_views parse_arg(char *arg);
int		**init_square(int size);
int		**dup_square(int **square);
void	destroy_square(int **square);
void	print_square(t_board board);
int		get_with_view(t_board, t_view_point view, int view_line, int line_index);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		check_arg(char *str);

#endif
