#include <stdio.h>
#define MAX 100
int main()
{
	char text[MAX]={0};
	int loop,j;
	printf("Please input string: ");
	scanf("%[^\n]s",text);
	printf("Input string is...\n");
	printf("%s\n",text);
	
	for(loop=0; text[loop]!='\0'; loop++)
	{
		if(loop==0 || (text[loop]==' ' && text[loop+1]!=' '))
		{
			for(j=((loop==0)?loop:loop+1); text[j]!='\0'; j++)
				text[j]=text[j+1];
		}		
		}
		printf("Value of \'text\' after eliminating first character of each word...\n");
	printf("%s\n",text);
		
	return 0;
}
