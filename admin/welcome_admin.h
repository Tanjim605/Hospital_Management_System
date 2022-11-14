#include "work_admin.h"

void welcome_admin()
{
    check_admin();
    up:
    string ch;
    system("CLS");
    cout << "\n\n\t\tChoose an Option: \n\n\t\t  1. Log in\n\t\t  0. Back\n";
    getline(cin,ch);
    if (ch == "1")
        login_admin();
    else if(ch == "0")
        logout=1;
    else
    {
        system("CLS");
        cout<<"\n\n\t\tInvalid option. Please Try Again.."<<endl;
        sleep(1);
        goto up;
    }
}
