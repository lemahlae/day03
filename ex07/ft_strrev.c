/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemahlae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:15:20 by lemahlae          #+#    #+#             */
/*   Updated: 2020/07/13 11:03:16 by lemahlae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
		int	i;
		int	len;
		char temp;
		
		len =0;
		while (str[len])
	    		len++;
		i= -1;
		while(++i < __len)
		{
				temp = str[i];
				str[i] = str[len];
				str[len] = temp
		}
		return (str);		
}
