/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:43:01 by aarustam          #+#    #+#             */
/*   Updated: 2024/01/31 14:42:37 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	c = malloc(size * count);
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
