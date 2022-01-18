/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmehdevi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:13:13 by gmehdevi          #+#    #+#             */
/*   Updated: 2021/07/10 16:13:14 by gmehdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(num(str[i])))
			return (0);
		i++;
	}
	return (1);
}