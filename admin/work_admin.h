#include "admin.h"

void admin_work()
{
    string cc;
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\tWelcome! *" << admin[m].id << "*" << endl << endl;
        cout << "\t\tChoose an Option: \n"
             //<< "\n\t\t  1: Add-Admin\n"
             << "\n\t\t  1: Show-Admin\n"
             << "\n\t\t  2: Update-info\n"<<endl
             << "\t\tEnter 0 to escape..."<<endl;
        getline(cin,cc);
        // if (cc == "1")
        // {
        //     system("CLS");
        //     add_admin();
        // }
        if (cc == "1")
        {
            system("CLS");
            show_admin();
        }
        else if (cc == "2")
        {
            system("CLS");
            update_admin();
        }
        else if (cc == "0")
        {
            back=1;
            system("CLS");
            return;
        }
        else
        {
            system("CLS");
            cout<<"\n\n\t\tInvalid option. Please Try Again.."<<endl;
            sleep(1);
        }
    }
}
