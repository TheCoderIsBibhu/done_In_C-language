#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100],c[100];
	printf("Enter two strings one by one : \n\n");
	gets(a);
	gets(b);
	
	//strlen
	printf("\n\nThe length of string \"a\" is %d",strlen(a));
	
	//strcmp
	if(strcmp(a,b)>0)
		printf("\n\nThe second string is present in the first one");
	else 
		printf("\n\nstrings are different");
		
	if(strcmpi(a,b)>0)//i is used to ignore the case
		printf("\n\nThe second string is present in the first one");
	else 
		printf("\n\nstrings are different");
		
	//Finding character occurance
	printf("\n\nThe first occurance is %s",strstr(a,"ll"));
	
	//strcpy
	strcpy(c,a);
	printf("\n\nThe Copied string of \"a\" is %s",c);
	
	//uppercase
	printf("\n\nThe upper case of the string is : %s",strupr(a));
	
	//Lowercase
	printf("\n\nThe Lower case of the string is : %s",strlwr(a));
	
	//Reverse a string
	printf("\n\nThe reversed string is : %s",strrev(a));
	
	//strcat
	printf("\n\nThe concatinction of the two strings is %s",strcat(a,b));
	
	return 0;
}
