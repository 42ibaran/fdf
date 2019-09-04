/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 15:56:25 by ibaran            #+#    #+#             */
/*   Updated: 2019/01/29 15:58:44 by ibaran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strtolower(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if ('A' <= s[i] && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
	return (s);
}