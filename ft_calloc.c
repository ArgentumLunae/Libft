/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 14:36:09 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/04 15:05:29 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	max_size;
	void	*ptr;

	max_size = ((size_t)-1) / 2;
	if (max_size / nmemb < size)
		return (NULL);
	if (!(ptr = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
