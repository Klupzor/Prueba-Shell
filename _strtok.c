#include <string.h>
#include <stdio.h>



char *_strtok(char *str, const char *delim)
{
	int cs, cd, postok = 0;
	static char *tmp;
	char *token;

	if(str)
		token = str;
	else
	{
		token = tmp;
	}
	if (token == NULL)
	{
		printf("es nulo\n");
		return (NULL);
	}
	for (cd = 0 ; delim[cd] != '\0' ; cd++)
	{
		for (cs = 0 ; token[cs] != '\0' ; cs++)
		{
			while (delim[cd] == token[0])
			{
				token++;
			}
			if (token[1] == '\0' && token[2] == '\0')
			{
				printf("no hay mas \n");
				tmp = NULL;
				return(token);
			}
			if (delim[cd] == token[cs])
			{
				//printf("leyendo: %s\n", token);
				token[cs] = '\0';
				tmp = token;
				//postok = cs + 1;
				printf("token: %s ", token);
				tmp = tmp + cs + 1;
				//token = token + postok;
				printf("tmp: %s\n", tmp);
				return (token);
			}
		}
	}
	return (NULL);
}

void main()
{
	char *token;
	char txt[] ="1c112cacc4aaaa asdfg";

	printf("txt: %s\n", txt);
	token = _strtok(txt, "c");
	token = _strtok(NULL, "c");
	token = _strtok(NULL, "c");
	token = _strtok(NULL, "c");
	token = _strtok(NULL, "c");
	token = _strtok(NULL, "c");

}
