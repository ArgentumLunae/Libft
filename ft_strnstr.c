/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 19:08:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/05 14:46:16 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t offh;

	offh = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	if (len == 0)
		return (0);
	while (haystack[offh] != '\0' && offh < len)
	{
		if ((offh + ft_strlen((char *)needle)) > len)
			return (0);
		if (haystack[offh] == needle[0])
		{
			if (!ft_strncmp(&haystack[offh], needle, ft_strlen((char *)needle)))
			{
				return ((char *)&haystack[offh]);
			}
		}
		offh++;
	}
	return (0);
}
