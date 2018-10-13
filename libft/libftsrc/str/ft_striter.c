/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:51:09 by vzomber           #+#    #+#             */
/*   Updated: 2017/11/30 19:14:43 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (s != NULL && *s)
	{
		f(s);
		s++;
	}
}
