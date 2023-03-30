#include "super_admin.h"

void super_admin_work()
{
    string cc;
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\tWelcome! *" << super_admin[M].id << "*" << endl << endl;
        cout << "\t\tChoose an Option: \n"
             << "\n\t\t  1: Show-Super Admin\n"
             << "\n\t\t  2: Update-info\n"<<endl
             << "\t\tEnter 0 to escape..."<<endl;
        getline(cin,cc);
        
        if (cc == "1")
        {
            system("CLS");
            show_sp_admin();
        }
        else if (cc == "2")
        {
            system("CLS");
            update_sp_admin();
        }
        else if (cc == "0")
        {
            super_back=1;
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
