/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_info.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:23:56 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:23:57 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	putstr_info_cmd(
	t_window win_infos)
{
	ft_putstr_fd("\nCub3D : \n", 1);
	ft_putstr_fd("\n./Cub3D <\"name\".cub>", 1);
	ft_putstr_fd("\n./Cub3D <\"name\".cub> <-save>\n", 1);
	ft_putchar_fd('\n', 1);
	exit(-1);
}
