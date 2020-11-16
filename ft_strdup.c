/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 14:49:17 by mteerlin      #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2020/11/13 11:37:04 by mteerlin      ########   odam.nl         */
=======
/*   Updated: 2020/11/13 11:39:11 by mteerlin      ########   odam.nl         */
>>>>>>> 4384d638c8320e2307ac01eca634eb2c00593cf0
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;

	len = (ft_strlen(s) + 1);
	dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, len);
	return (dup);
}
