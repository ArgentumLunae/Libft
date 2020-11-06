/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 13:59:18 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/03 16:51:09 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	if (s1 == 0 && s2 == 0)
		return (0);
	s3 = (char *)malloc(len * sizeof(char));
	if (s3 == 0)
		return (0);
	ft_strlcpy(s3, (char *)s1, (ft_strlen((char *)s1) + 1));
	ft_strlcat(s3, (char *)s2, len);
	return (s3);
}
