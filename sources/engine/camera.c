/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:27:34 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:27:36 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	set_start_camera(
	t_window *win_infos,
	double dirx,
	double planex,
	double planey
)
{
	win_infos->player->dir_x = dirx;
	win_infos->player->plane_x = planex;
	win_infos->player->plane_y = planey;
}

void	turn_left(t_window *win_infos)
{
	double olddirx;
	double oldplanex;

	olddirx = win_infos->player->dir_x;
	oldplanex = win_infos->player->plane_x;
	win_infos->player->dir_x = win_infos->player->dir_x
			* cos(-win_infos->player->rotate_speed) - win_infos->player->dir_y
			* sin(-win_infos->player->rotate_speed);
	win_infos->player->dir_y = olddirx * sin(-win_infos->player->rotate_speed)
			+ win_infos->player->dir_y * cos(-win_infos->player->rotate_speed);
	win_infos->player->plane_x = win_infos->player->plane_x
			* cos(-win_infos->player->rotate_speed) - win_infos->player->plane_y
			* sin(-win_infos->player->rotate_speed);
	win_infos->player->plane_y = oldplanex
			* sin(-win_infos->player->rotate_speed) + win_infos->player->plane_y
			* cos(-win_infos->player->rotate_speed);
}

void	turn_right(t_window *win_infos)
{
	double olddirx;
	double oldplanex;

	olddirx = win_infos->player->dir_x;
	oldplanex = win_infos->player->plane_x;
	win_infos->player->dir_x = win_infos->player->dir_x
			* cos(win_infos->player->rotate_speed) - win_infos->player->dir_y
			* sin(win_infos->player->rotate_speed);
	win_infos->player->dir_y = olddirx * sin(win_infos->player->rotate_speed)
			+ win_infos->player->dir_y * cos(win_infos->player->rotate_speed);
	win_infos->player->plane_x = win_infos->player->plane_x
			* cos(win_infos->player->rotate_speed) - win_infos->player->plane_y
			* sin(win_infos->player->rotate_speed);
	win_infos->player->plane_y = oldplanex
			* sin(win_infos->player->rotate_speed) + win_infos->player->plane_y
			* cos(win_infos->player->rotate_speed);
}
