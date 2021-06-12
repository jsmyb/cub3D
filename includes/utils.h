/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 14:23:03 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/05/09 14:23:04 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <fcntl.h>

void	putstr_info_int(char *str, int i, int fd);
void	putstr_info_char(char *str, char c, int fd);
void	putstr_info_str(char *str, char *st, int fd);
void	putstr_info_cmd();

int		get_next_line(int fd, char **line);

int		is_whitespace(int c);

#endif
