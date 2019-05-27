#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
	char str[100];
	char STR[100];
	
	scanf(" %[^\n]s", &str);
	scanf(" %[^\n]s", &STR);
	
	if( strcmp(str, STR) == 0 )
		printf("true");
	else 
		printf("false");
		
	char user[30];
	strcpy( user, getenv("USERNAME") );
	printf("%s", user);
}
