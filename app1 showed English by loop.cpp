#include <stdio.h> 
#include <stdlib.h>

int main() 
{
	char en; 
	for (en=65; en<=90; en++)  
	{
		printf("%c ",en);
	}
	
	printf("\n");  
	for (en=97; en<=122; en++)  
	{
		printf("%c ",en);
	}
	printf("\n");
	system ("pause"); 
	return 0;  
}

