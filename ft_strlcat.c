/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:38:33 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/03 16:21:48 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	offdst;
	size_t	offsrc;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	offdst = lendst;
	offsrc = 0;
	if (dstsize == 0)
		return (lensrc);
	while ((src[offsrc] != '\0') && (offdst < dstsize - 1))
	{
		dst[offdst] = src[offsrc];
		offdst++;
		offsrc++;
	}
	while (offdst < dstsize)
	{
		dst[offdst] = '\0';
		offdst++;
	}
	if (lendst >= dstsize)
		return (lensrc + dstsize);
	return (lendst + lensrc);
}
