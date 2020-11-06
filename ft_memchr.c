/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 15:07:23 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/03 12:56:26 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	offset;
	char	*ts;

	offset = 0;
	ts = (char *)s;
	while (offset < n)
	{
		if (ts[offset] == c)
			return (&ts[offset]);
		offset++;
	}
	return (0);
}
