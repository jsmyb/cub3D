/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_sound.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:22:09 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:22:10 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

void	play_music(t_window *win_infos)
{
	long	clk_tck;
	clock_t	actual_time;

	actual_time = clock();
	clk_tck = CLOCKS_PER_SEC;
	if ((double)(actual_time - win_infos->sound->last_start_song)
		/ (double)clk_tck >= 129.5)
	{
		system("killall afplay");
		system("afplay -v 0.30 bonus/sound/maintheme.mp3 &>/dev/null &");
		win_infos->sound->last_start_song = actual_time;
	}
}
