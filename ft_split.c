/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:05:58 by merlich           #+#    #+#             */
/*   Updated: 2021/10/17 20:40:42 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char const *s);
static char		*ft_left(char const *s, size_t index);
static char		*ft_right(char const *s, size_t index);

char	**ft_split(char const *s, char c)
{
	size_t	ind;
	char	**tab;

	ind = 0;
	if (NULL == s)
	{
		return (NULL);
	}
	tab = (char **)malloc(ft_strlen(s) + 2 + sizeof(NULL));
	if (NULL == tab)
	{
		return (NULL);
	}
	else
	{
		while (s[ind] != c)
		{
			ind++;
		}
		tab[0] = ft_left(s, ind);
		tab[1] = ft_right(s, ind);
		tab[2] = NULL;
		return (tab);
	}
}

static size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static char	*ft_left(char const *s, size_t index)
{
	size_t	k;
	char	*left;

	k = 0;
	left = (char *)malloc(index + 1);
	if (NULL == left)
	{
		return (NULL);
	}
	else
	{
		while (k < index)
		{
			left[k] = s[k];
			k++;
		}
		left[k] = '\0';
		return (left);
	}
}

static char	*ft_right(char const *s, size_t index)
{
	size_t	n;
	char	*right;

	n = 0;
	right = (char *)malloc( - index);
	if (NULL == right)
	{
		return (NULL);
	}
	else
	{
		while (index + 1 < ft_strlen(s))
		{
			right[n] = s[index + 1];
			n++;
			index++;
		}
		right[n] = '\0';
		return (right);
	}
}
