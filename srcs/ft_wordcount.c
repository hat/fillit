/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:15:41 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/03 21:15:42 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t		ft_wordcount(const char *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w += 1;
		while (s[i] != c && s[i + 1])
			i += 1;
		i += 1;
	}
	return (w);
}
