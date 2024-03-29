/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-q <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:55:36 by lmunoz-q          #+#    #+#             */
/*   Updated: 2017/11/12 17:24:26 by lmunoz-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

void		ft_putendl(char *s)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
}
