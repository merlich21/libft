/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:16:03 by merlich           #+#    #+#             */
/*   Updated: 2021/10/16 14:15:50 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(char const	*s);
static size_t	ft_trim_begin(char const	*s1, char const	*set);
static size_t	ft_trim_end(char const	*s1, char const	*set);

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*trim_str;
	size_t	min;
	size_t	max;
	size_t	n;

	min = 0;
	max = 0;
	n = 0;
	trim_str = malloc(ft_strlen(s1));
	if (NULL == trim_str)
		return (NULL);
	else
	{
		min = ft_trim_begin(s1, set);
		max = ft_trim_end(s1, set);
		while (min <= max)
		{
			trim_str[n] = s1[min];
			n++;
			min++;
		}
		trim_str[n] = '\0';
		return (trim_str);
	}
}

static size_t	ft_strlen(char const	*s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	ft_trim_begin(char const	*s1, char const	*set)
{
	size_t	i;	
	size_t	j;
	size_t	min;

	i = 0;
	j = 0;
	min = 0;
	while ((s1[i] != '\0') && (j != ft_strlen(set)))
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				min++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (min);
}

static size_t	ft_trim_end(char const	*s1, char const	*set)
{
	size_t	i;	
	size_t	j;
	size_t	max;

	i = ft_strlen(s1) - 1;
	j = 0;
	max = i;
	while ((i >= 0) && (j != ft_strlen(set)))
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				max--;
				break ;
			}
			j++;
		}
		i--;
	}
	return (max);
}
