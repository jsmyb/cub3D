/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_camera.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:21:56 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:21:59 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	turn_up(t_window *win_infos)
{
	if (win_infos->player->cam_height + win_infos->player->rotate_speed < 2)
		win_infos->player->cam_height += win_infos->player->rotate_speed;
}

void	turn_down(t_window *win_infos)
{
	if (win_infos->player->cam_height - win_infos->player->rotate_speed > 0)
		win_infos->player->cam_height -= win_infos->player->rotate_speed;
}
