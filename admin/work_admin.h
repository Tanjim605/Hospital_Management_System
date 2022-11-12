#include "admin.h"

void admin_work()
{
    while (1)
    {
        char c;
        system("CLS");
        cout << "\n\n\t\tWelcome! *" << admin[m].id << "*" << endl << endl;
        cout << "\t\tChoose an Option: \n"
             << "\t\t  1. Add-Admin\n"
             << "\t\t  2. Show-Admin\n"
             << "\t\t  3. Update-info\n"<<endl
             << "\t\tEnter 0 to escape..."<<endl;
        cin>>c;
        if (c == '1')
        {
            system("CLS");
            add_admin();
        }
        if (c == '2')
        {
            system("CLS");
            show_admin();
        }
        if (c == '3')
        {
            system("CLS");
            update_admin();
        }
        if (c == '0')
        {
            back=1;
            system("CLS");
            return;
        }
    }
}