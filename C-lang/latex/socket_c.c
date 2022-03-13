#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <sys/socket.h>

#define buff 50	//define the max buff

int main(int argc, char *argv[])
{
	char *p = 0;
	int sock = 0;	
	struct sockaddr_in addr;


	// clear all the space of addr variable
	memset(&addr,0,sizeof(addr));

	addr.sin_family = AF_INET;
	addr.sin_port = htons( atoi( argv[2] ) );
	inet_aton(argv[1],&addr.sin_addr);

	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(!sock)
	{
		printf("Create socket failed1\n");
		return -1;
	}

	if(0 > connect(sock, (struct sockaddr *)&addr, sizeof(addr)))
	{
		printf("Connect failed!\n");
		return -1;
	}
	
	
	p = (char *)malloc(buff * sizeof(char));
 		
	while(1)
	{
	//	send();
	
		if( recv(sock, p, buff,0) < 0 )
		{
			printf("recv failed!\n");
			return -1;
		}

		printf("%s\n",p);

		while(1);
	}

	close(sock);

	return 0;
}

