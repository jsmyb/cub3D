/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:28:57 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:28:58 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int		event_destroy_window(void *param)
{
	t_window *win_infos;

	win_infos = (t_window *)param;
	leave(0, win_infos, "");
	return (SUCCES);
}
