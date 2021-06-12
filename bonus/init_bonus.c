/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:21:42 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:21:45 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	init_sound(t_window *win_infos)
{
	if (!(win_infos->sound = malloc(sizeof(t_sound))))
		return (ERROR);
	ft_bzero(win_infos->sound, sizeof(t_sound));
	win_infos->sound->last_start_song = clock();
	system("afplay -v 0.30 bonus/sound/maintheme.mp3 &>/dev/null &");
	return (SUCCES);
}
