/* Utilities */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <conio.h>

#ifdef _WIN32								// if sys Windows, include windows.h
#include <windows.h>						// and declare functions & other

#ifndef HAND_INFO
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
#define HAND_INFO
#endif

void screenClear(void);							// Clear terminal
COORD getCursorPos(void);						// Get Cursor Position
#endif

#define CLEAR_SCREEN system("cls")
#define PAUSE getch()
#define RAND_6 (rand()%6)+1

/***    * Boxdrawing chars *    ***/
/**********************************/
#define ASC_HORIZONTAL			205
#define ASC_VERTICAL			186
#define ASC_BREAK_UP			202
#define ASC_BREAK_DOWN			203
#define ASC_BREAK_LEFT			185
#define ASC_BREAK_RIGHT			204
#define ASC_BREAK_CROSS			206
#define ASC_BREAK_ES			201
#define ASC_BREAK_SW			187
#define ASC_BREAK_WN			188
#define ASC_BREAK_NE			200
#define ASC_BLOCK				254
#define END_LN 		 printf("\n")
/**********************************/
#define ASC_STRAIGHT_DOWN printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ASC_BREAK_ES,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_BREAK_SW)
#define ASC_STRAIGHT_UP printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",ASC_BREAK_NE,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_HORIZONTAL,ASC_BREAK_WN)
#define ASC_BLANK_DOT printf("%c               %c",ASC_VERTICAL,ASC_VERTICAL)
#define ASC_SINGLE_DOT printf("%c       %c       %c",ASC_VERTICAL,ASC_BLOCK,ASC_VERTICAL)
#define ASC_DOUBLE_DOT printf("%c    %c     %c    %c",ASC_VERTICAL,ASC_BLOCK,ASC_BLOCK,ASC_VERTICAL)
/**********************************/


typedef unsigned short WORD;


void haltf();								// Halt execution until a button is pressed
void inlineClear(int x);					// Clear n characters inline
void sep(int width, int tab);				// Separator (width, tab width)
void dieStruct(int x);						// Die structure


void haltf() {
	getch();	// Pause
}

void inlineClear(int x) {
	// Print backspace |aka| delete character
	for(int i=1; i<=x; i++) printf("\b");
}

void sep(int width, int tab) {
	printf("\n\n");
	// Pseudo-tab indentation
	for(int i=1; i<=tab; i++) printf(" ");
	// Sep lenght
	for(int i=1; i<=width; i++) printf("=");
	printf("\n\n");
}

void dieStruct(int x) {
	// Upper border
	ASC_STRAIGHT_DOWN	; END_LN ;
	ASC_BLANK_DOT		; END_LN ;
	
	// Upper dots
	if(x>=4)		{ ASC_DOUBLE_DOT ; END_LN ;}
	else if(x>1)	{ ASC_SINGLE_DOT ; END_LN ;}
	else			{  ASC_BLANK_DOT ; END_LN ;}
	
	ASC_BLANK_DOT ; END_LN ;
	
	// Central dots
	if(x%2!=0)		{ ASC_SINGLE_DOT ; END_LN ;}
	else if(x==6)	{ ASC_DOUBLE_DOT ; END_LN ;}
	else			{  ASC_BLANK_DOT ; END_LN ;}
	
	ASC_BLANK_DOT ; END_LN ;
	
	// Bottom dots
	if(x>=4)		{ ASC_DOUBLE_DOT ; END_LN ;}
	else if(x>1)	{ ASC_SINGLE_DOT ; END_LN ;}
	else			{  ASC_BLANK_DOT ; END_LN ;}
	
	// Bottom border
	ASC_BLANK_DOT 	; END_LN ;
	ASC_STRAIGHT_UP ; END_LN ;
}


#ifdef _WIN32								// Windows functions

void screenClear(void) {
	system("cls");
}

COORD getCursorPos(void) {					// Get Cursor Position

	// Get Cursor info
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	
	// Assign coords value only
	COORD coords = { consoleInfo.dwCursorPosition.X, consoleInfo.dwCursorPosition.Y };
	
	return coords;
}

#endif
