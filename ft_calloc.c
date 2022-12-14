/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idelfag <idelfag@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:44:56 by idelfag           #+#    #+#             */
/*   Updated: 2022/12/17 06:15:20 by idelfag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (count > 0 && size > SIZE_T_MAX / count)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	while (i < (size * count))
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}
