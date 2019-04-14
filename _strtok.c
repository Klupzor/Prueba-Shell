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
		//printf("es nulo\n");
		return (NULL);
	}
	//printf("new token: %s\n", token);
	for (cd = 0 ; delim[cd] != '\0' ; cd++)
	{
		for (cs = 0 ; token[cs] != '\0' ; cs++)
		{
			while (delim[cd] == token[0])
			{
				token++;
			}
			if (token[0] == '\0')
			{
				//printf("no hay mas \n");
				tmp = NULL;
				return(NULL);
			}
			if (delim[cd] == token[cs])
			{
				//printf("pos: %i\n", cs);
				token[cs] = '\0';
				tmp = token;
				//postok = cs + 1;
				//printf("token: %s ", token);
				tmp = tmp + cs + 1;
				//token = token + postok;
				//printf("tmp: %s\n", tmp);
				return (token);
			}
		}
	}
	if(tmp[0] == '\0')
		token = NULL;
	tmp = NULL;
	return (token);
}

void main()
{
	char *token;
	int ct = 0;
	char txt[] ="cc34ccc4aaaa asdfg";
	printf("txt: %s\n", txt);
	token = _strtok(txt, "c");
	while (ct < 4)
	{
		printf("token: %s\n", token);
		token = _strtok(NULL, "c");
		ct++;
	}

}
