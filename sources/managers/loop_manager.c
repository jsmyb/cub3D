/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:28:49 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:28:51 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

static void		hud(
	t_window *win_infos
)
{
	char *str;
	char *itoa;

	mlx_string_put(win_infos->mlx_ptr, win_infos->win_ptr, 25, 75, 0xffffff,
	"Look Up : /\\ , Look down : \\/ , Look left : <, Look right : >");
	mlx_string_put(win_infos->mlx_ptr, win_infos->win_ptr, 25, 100, 0xffffff,
	"Forwars : W , Backward : S , Left : A, Right : D");
	mlx_string_put(win_infos->mlx_ptr, win_infos->win_ptr, 25, 120, 0xffffff,
	"Leave Game : ESC");
	str = ft_strjoin("Map name test: ", win_infos->map->map_name);
	mlx_string_put(win_infos->mlx_ptr, win_infos->win_ptr, 25, 140, 0xffffff,
	str);
	itoa = ft_itoa(win_infos->width);
	str = ft_strjoin("Width : ", itoa);
	mlx_string_put(win_infos->mlx_ptr, win_infos->win_ptr, 25, 160, 0xffffff,
	str);
	itoa = ft_itoa(win_infos->height);
	str = ft_strjoin("Height : ", itoa);
	mlx_string_put(win_infos->mlx_ptr, win_infos->win_ptr, 25, 180, 0xffffff,
	str);
	return ;
}

static void		draw(
	t_window *win_infos
)
{
	if (!(raycasting(win_infos)))
		leave(0, win_infos, "");
	hud(win_infos);
}

int				loop_manager(
	void *param
)
{
	t_window *win_infos;

	win_infos = (t_window *)param;
	draw(win_infos);
	draw_health(win_infos);
	key_manager(win_infos);
	play_music(win_infos);
	return (SUCCES);
}
