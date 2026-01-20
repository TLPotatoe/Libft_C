/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlamit <titouan.lamit@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:49:00 by tlamit            #+#    #+#             */
/*   Updated: 2026/01/20 18:19:02 by tlamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_remchr(char *s, char *char_list)
{
	char	seen[256];
	int		i;
	int		j;

	if (!s || !char_list)
		return ;
	ft_memset(seen, 0, sizeof seen);
	while (*char_list)
		seen[(int)*(char_list++)] = 1;
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (seen[(int)s[i]])
			continue ;
		s[j++] = s[i];
	}
	s[j] = 0;
}
