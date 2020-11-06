/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 14:49:17 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/05 11:42:39 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *s)
{
	int		len;
	char	*dup;

	len = (ft_strlen(s) + 1);
	if (!(dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(dup, s, len);
	return (dup);
}
