#include "admin.h"

void admin_work()
{
    while (1)
    {
        char c;
        system("CLS");
        cout << "\t\tWelcome! *" << admin[m].id << "*" << endl << endl;
        cout << "\t\tChoose an Option: \n\t\t  1. Add-Admin\n\t\t  2. Delete-Admin\n\t\t  3. Show-Admin\n\t\t  4. Update-info\n\t\t  5. Back\n";
        cin >> c;
        if (c == '1')
        {
            system("CLS");
            add_admin();
        }
        if (c == '2')
        {
            system("CLS");
            delete_admin();
            return;
        }
        if (c == '3')
        {
            system("CLS");
            show_admin();
        }
        if (c == '4')
        {
            system("CLS");
            update_admin();
        }
        if (c == '5')
        {
            back=1;
            system("CLS");
            return;
        }
    }
}