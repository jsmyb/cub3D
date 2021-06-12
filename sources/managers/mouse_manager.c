/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:28:54 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:28:55 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int		mouse_manager(int button, int x, int y, void *param)
{
	t_window	*mlx_infos;

	mlx_infos = (t_window *)param;
	putstr_info_int("Button : ", button, 1);
	putstr_info_int("X : ", x, 1);
	putstr_info_int("Y : ", y, 1);
	return (0);
}
