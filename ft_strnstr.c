/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 19:08:49 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/09 13:02:26 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t offh;

	offh = 0;
	if (needle[0] == '\0')
		return ((char*)hay);
	if (n == 0)
		return (0);
	while (hay[offh] != '\0' && offh < n)
	{
		if ((offh + ft_strlen((char *)needle)) > n)
			return (0);
		if (hay[offh] == needle[0])
		{
			if (!ft_strncmp(&hay[offh], needle, ft_strlen((char *)needle)))
			{
				return ((char *)&hay[offh]);
			}
		}
		offh++;
	}
	return (0);
}
