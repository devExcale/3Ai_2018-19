/* Terminal colors */

#ifdef _WIN32		//if sys [Windows]


#include <windows.h>
//Old defines
#define RED		FOREGROUND_RED
#define GREEN	FOREGROUND_GREEN
#define BLUE	FOREGROUND_BLUE
#define INTE	FOREGROUND_INTENSITY


void setupColor() __attribute__ ((constructor));				//Saves previous settings
void resetColor() __attribute__ ((destructor));					//Use to reset color
void setColor(bool r, bool g, bool b, bool i);					//Change color (RGBI style)

/* Init */
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
WORD saved_attributes;


void resetColor() {
	SetConsoleTextAttribute(hConsole, saved_attributes);
}

void setupColor() {
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
}

void setColor(bool r, bool g, bool b, bool i=0) {
	//color init
	WORD color = 0x0;
	//Add RED
	if(r) color+=0x4;
	//Add GREEN
	if(g) color+=0x2;
	//Add BLUE
	if(b) color+=0x1;
	//Add INTENSITY
	if(i) color+=0x8;
	
	//Black
	if(!(r||g||b||i)) color=0x70;
	
	//Set color
	SetConsoleTextAttribute(hConsole, color);
}


#elif defined __linux__ || defined __unix__ || defined __unix || defined unix		//if sys [Unix]


#define	RED		"\x1B[31m"
#define	GRN		"\x1B[32m"
#define	YEL		"\x1B[33m"
#define	BLU		"\x1B[34m"
#define	MAG		"\x1B[35m"
#define	CYN		"\x1B[36m"
#define	WHT		"\x1B[37m"
#define	RST		"\x1B[0m"


#else		//else sys
#endif
