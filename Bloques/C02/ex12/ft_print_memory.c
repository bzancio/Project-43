/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibuil <ibuil@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 14:36:50 by ibuil             #+#    #+#             */
/*   Updated: 2025/08/19 17:48:57 by ibuil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_address(unsigned long addr)
{
	char	*base;
	char	hex[16];
	int		i;

	base = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		hex[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, hex, 16);
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char *mem, unsigned int size, unsigned int pos)
{
	char	*base;
	char	hex[2];
	int		i;

	base = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (pos + i < size)
		{
			hex[0] = base[mem[pos + i] / 16];
			hex[1] = base[mem[pos + i] % 16];
			write(1, hex, 2);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
}

void	ft_print_ascii(unsigned char *mem, unsigned int size, unsigned int pos)
{
	int		i;
	char	c;

	i = 0;
	while (i < 16 && pos + i < size)
	{
		c = mem[pos + i];
		if (c >= 32 && c <= 126)
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, ".", 1);
		}
		i++;
	}
}

void	ft_print_line(void *addr, unsigned int size, unsigned int pos)
{
	unsigned char	*mem;

	mem = (unsigned char *)addr;
	ft_print_address((unsigned long)(mem + pos));
	ft_print_hex(mem, size, pos);
	ft_print_ascii(mem, size, pos);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	pos;

	pos = 0;
	while (pos < size)
	{
		ft_print_line(addr, size, pos);
		pos += 16;
	}
	return (addr);
}
