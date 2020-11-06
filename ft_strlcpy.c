/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 13:51:00 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/03 15:54:40 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t offset;
	size_t len;

	len = ft_strlen((char *)src);
	offset = 0;
	if (dstsize == 0)
		return (len);
	while ((offset < (dstsize - 1)) && (src[offset] != '\0'))
	{
		dst[offset] = src[offset];
		offset++;
	}
	dst[offset] = '\0';
	return (len);
}
