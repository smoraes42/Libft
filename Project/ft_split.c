/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:46:29 by smoraes-          #+#    #+#             */
/*   Updated: 2024/02/09 22:07:00 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_initiate_vars(size_t *i, int *j, int *subs_ind)
{
	*i = 0;
	*j = 0;
	*subs_ind = -1;
}

int	ft_wcount(const char *s, char c)
{
	int	count;
	int	ind;

	count = 0;
	ind = 0;
	while (s[ind] != '\0')
	{
		while (s[ind] == c && s[ind] != '\0')
			ind++;
		if (s[ind] != c && s[ind] != '\0')
			count++;
		while (s[ind] != c && s[ind] != '\0')
			ind++;
	}
	return (count);
}

static char	*ft_crstr(const char *s, int start, int end)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static void	*ft_free(char **strs_ar, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs_ar[i]);
		i++;
	}
	free(strs_ar);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	int		j;
	int		subs_ind;
	char	**strs_ar;
	size_t	i;

	ft_initiate_vars(&i, &j, &subs_ind);
	strs_ar = (char **) ft_calloc((ft_wcount(s, c) + 1), sizeof(char *));
	if (!strs_ar || !s)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && subs_ind < 0)
			subs_ind = i;
		else if ((s[i] == c || i == ft_strlen(s)) && subs_ind >= 0)
		{
			strs_ar[j] = ft_crstr(s, subs_ind, i);
			if (!(strs_ar[j]))
				return (ft_free(strs_ar, j));
			subs_ind = -1;
			j++;
		}
		i++;
	}
	return (strs_ar);
}
