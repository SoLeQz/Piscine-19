/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidzawi <sidzawi@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:34:42 by sidzawi           #+#    #+#             */
/*   Updated: 2024/02/18 20:14:08 by sidzawi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>

void	ft_display(int tab[4][4], int size_lig, int size_col);
void	ft_putstr(char *str);
void	ft_parse(char *argv, int tab[16]);
void	ft_init(int mat[4][4]);
int		ft_check_top(int mat[4][4], int top, int col);
int		ft_check_bottom(int mat[4][4], int bottom, int col);
int		ft_check_left(int mat[4][4], int left, int row);
int		ft_check_right(int mat[4][4], int right, int row);
int		ft_check_row(int mat[4][4], int row);
int		ft_check_col(int mat[4][4], int col);
int		ft_check_mat(int mat[4][4], int tab[16]);
int		ft_solve(int mat[4][4], int tab[16], int row, int col);
int		ft_check(char *argv);

#endif
