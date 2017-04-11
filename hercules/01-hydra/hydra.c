/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hydra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 13:32:14 by iwordes           #+#    #+#             */
/*   Updated: 2017/02/17 14:09:20 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <netinet/in.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <unistd.h>

void	mel(int sock_)
{
	char					buff[5];
	int						sock;
	socklen_t				sa_len;
	struct sockaddr_storage	sa;
	size_t					l;

	sa_len = sizeof(sa);
	while ((sock = accept(sock_, (struct sockaddr*)&sa, &sa_len)) >= 0)
	{
		l = recv(sock, buff, 5, 0);
		if (l == 4 && buff[0] == 'p' && buff[1] == 'i'
			&& buff[2] == 'n' && buff[3] == 'g')
		{
			send(sock, "pong", 4, 0);
			send(sock, "pong", 4, 0);
		}
		close(sock);
		if (l <= 0)
			break ;
		sa_len = sizeof(sa);
	}
}

int		main(void)
{
	int					sock;
	struct sockaddr_in	sa;
	socklen_t			sa_len;

	if ((sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1)
		exit(1);
	sa.sin_family = AF_INET;
	sa.sin_port = htons(4242);
	sa.sin_addr.s_addr = INADDR_ANY;
	sa_len = sizeof(sa);
	if (bind(sock, (struct sockaddr*)&sa, sa_len) == -1
		|| listen(sock, 128) == -1)
		exit(1);
	mel(sock);
	close(sock);
	return (0);
}
