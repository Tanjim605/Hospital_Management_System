#include "admin.h"

int main()
{
    check_admin();
    char c;
    main:
    system("CLS");
    cout << "Choose an Option: \n\n1. Log in\n0. Exit\n";
    cin >> c;
    if (c == '1')
        login_admin();
    else if(c == '0')
        return 0;
    while (1)
    {
        system("CLS");
        cout << "Welcome! *" << admin[m].id << "*" << endl << endl;
        cout << "Choose an Option: \n1. Add-Admin\n2. Delete-Admin\n3. Show-Admin\n4. Update-info\n5. Log-out\n";
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
            goto main;
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
            system("CLS");
            goto main;
        }
    }
}
