/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 12:50:07 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/10 14:35:17 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	offset;
	size_t			len;

	offset = 0;
	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen((char *)s1);
	while (offset < ft_strlen((char *)set) && len != 0)
	{
		if (!ft_strncmp((s1 + start + len - 1), (set + offset), 1) \
				|| !ft_strncmp((s1 + start), (set + offset), 1))
		{
			if (!ft_strncmp((s1 + start), (set + offset), 1))
				start++;
			len--;
			offset = 0;
			continue ;
		}
		offset++;
	}
	return (ft_substr(s1, start, len));
}
