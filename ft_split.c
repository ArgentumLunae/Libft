/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mteerlin <mteerlin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 17:41:54 by mteerlin      #+#    #+#                 */
/*   Updated: 2020/11/06 13:18:53 by mteerlin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static unsigned int	wordcount(char const *s, char c)
{
	int		wordcnt;
	size_t	offset;

	wordcnt = 0;
	offset = 1;
	while (offset <= ft_strlen((char *)s))
	{
		if (s[offset] == c && s[offset - 1] != c)
			wordcnt++;
		if (s[offset] == '\0' && s[offset - 1] != c)
			wordcnt++;
		offset++;
	}
	return (wordcnt);
}

static unsigned int	wordstart(char const *s, char c, int n)
{
	int				wordcnt;
	size_t			offset;

	wordcnt = 0;
	offset = 0;
	while (((s[offset] != '\0') && (wordcnt < n)))
	{
		if (offset == 0 && s[offset] != c)
			wordcnt++;
		else if (s[offset] != c && s[offset - 1] == c)
			wordcnt++;
		offset++;
	}
	return (offset - 1);
}

static unsigned int	wordlen(char const *s, unsigned int start, char c)
{
	int len;

	len = 0;
	while (s[start + len] != c && s[start + len] != '\0')
		len++;
	return (len);
}

char				**ft_split(char const *s, char c)
{
	unsigned int	len;
	unsigned int	offset;
	unsigned int	start;
	char			**split;

	offset = 0;
	if (!(split = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *))))
		return (0);
	while (offset < wordcount(s, c))
	{
		start = wordstart(s, c, offset + 1);
		len = wordlen(s, start, c);
		split[offset] = ft_substr(s, start, len);
		offset++;
	}
	split[wordcount(s, c)] = NULL;
	return (split);
}
