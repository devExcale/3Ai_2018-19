#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct link {
	int id;
	char name[30];
	link *next;
} link_t;

int main() {
	// Variables declaration
	link_t *first, *current;
	int counter = 0;
	
	// Init first element
	first = (link_t*) malloc( sizeof(link_t) );
	first->id = ++counter;
	strcpy(first->name, "wewe\0");
	
	current = first;
	
	// Init n elements
	for(int i=0; i<5; i++) {
		// Set forwarding pointer
		current->next = (link_t*) malloc( sizeof(link_t) );
		
		current = current->next;
		
		current->id = ++counter;
		strcpy(current->name, "wawa\0");
		current->next = NULL;
	}
	
	// Set first element as current
	current = first;
	
	// Read all elements
	while(current != NULL) {
		printf("%d, %s, %p\n", current->id, current->name, current->next);
		current = current->next;
	}
	
}
