#include<stdio.h>
int main()
{
	char str[100];
	int i;
	int space=0,newline=0;
	printf("enter an input:");
	scanf("%[^~]s",&str);
	for( i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		
			space++;
		
		else if(str[i]=='\n')
		
			newline++;
			
		}

	printf("Total number of spaces : %d\n",space);
	printf("Total number of lines : %d\n",newline);
	
	return 0;
}
