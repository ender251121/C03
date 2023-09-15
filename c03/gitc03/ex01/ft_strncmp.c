/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:25:37 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/30 21:25:38 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n -1)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	int	x = 3;
	int	y;
	char	str1[20] = "nombre";
	char	str2[20] = "rjgr";

	y = ft_strncmp(str1, str2, x);
	printf("%d", y);
	return (0);
}*/
