/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcanari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:18:54 by dcanari           #+#    #+#             */
/*   Updated: 2023/09/17 19:24:11 by dcanari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include.h"
//main
int	main(int argc, char **argv)
{
	t_views views;
	t_board board;
	int		solved;

	if(argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if(!check_arg(argv[1]))
	{
		write(1, "Error\n", 6);
		return(0);
	}
	views = parse_arg(argv[1]);
	board = init_square(4);
	solved = FALSE;
	solve(board, views, &solved);
	if(!solved)
		write(1, "Error\n", 6);
	return (0);
}
