/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:30:31 by oelkhiar          #+#    #+#             */
/*   Updated: 2022/10/18 21:25:08 by oelkhiar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			ft_c;
	unsigned int	len;

	ft_c = (const char)c;
	len = ft_strlen(s);
	while (len-- != 0)
	{
		if (s[len] == ft_c)
			return ((char *)&s[len]);
	}
	return (0);
}
