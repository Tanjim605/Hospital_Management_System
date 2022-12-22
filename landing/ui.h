#include <cstdlib>
#include <windows.h>
void gotoxy(short x, short y)       //console goes to x,y co-ordinate
{
    static HANDLE h = NULL;  
    if(!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };  
    SetConsoleCursorPosition(h,c);
}
