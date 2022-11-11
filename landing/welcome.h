#include<bits/stdc++.h>
using namespace std;
#include <windows.h>    //for Sleep(milisec) and animation
#include <cstdlib>
#include <unistd.h>     //for sleep(sec)
#include "ui.h"
#include "user.h"
 
 
void welcome()
{
    system("CLS");
    for(int i=0;i<172;i++)
    {
        cout<<'_';
        Sleep(3);      //works in milisecond
    }
    for(int i=150;i>=78;i--)
    {
        gotoxy(i,3);
        cout << "                        " << endl;
        gotoxy(i,3);
        cout << "Welcome To The Hospital" << endl;
        Sleep(10);      //works in milisecond
    }
    cout<<endl;
    for(int i=0;i<172;i++)
    {
        cout<<'_';
        Sleep(3);      
    }
 
    sleep(1);           //works in second
    system("CLS");
 
 
    for(int i=0;i<172;i++)
    {
        cout<<'_';
    }
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tBetter Care and Better Understanding";
    cout<<endl<<endl;
    for(int i=0;i<172;i++)
    {
        cout<<'_';
    }
    sleep(1);
    cout << endl << "Press enter to continue...";
    cin.get();
    system("CLS");
}
