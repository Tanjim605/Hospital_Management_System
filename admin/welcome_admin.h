#include "admin_work.h"

void welcome_admin()
{
    check_admin();
    char ch;
    system("CLS");

    cout << "\t\tChoose an Option: \n\n\t\t  1. Log in\n\t\t  0. Exit\n";
    cin >> ch;
    if (ch == '1')
        login_admin();
    else if(ch == '0')
    {
        logout=1;
    }
}
