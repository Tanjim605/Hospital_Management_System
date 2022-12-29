#include "nurse.h"

void welcome_nurse()
{
    system("CLS");
    cout<<"\n\n\t\tWELCOME TO THE NURSE'S CRUD WORLD\n\n";
    cout<<"\t\t---------------------------------\n";
    sleep(1);
    while(1)
    {
        system("CLS");
        cout<<"\n\n\n\t\tPlease select an option\n";
        cout<<"\t\t-----------------------\n";
        cout<<"\t\t  1: Add a new nurse\n\n";
        cout<<"\t\t  2: Remove a nurse's Information\n\n";
        cout<<"\t\t  3: Update an old nurse's Information\n\n";
        cout<<"\t\t  4: Show all nurse's Information\n\n";
        cout<<"\t\t  5: Show archive nurse's Information\n\n";
        cout<<"\t\tEnter 0 to escape\n\n";
        string option;
        getline(cin,option);
        system("CLS");
        if(option == "0")
            return;
        else if(option == "1")
            add_nurse();
        else if(option == "2")
            delete_nurse();
        else if(option == "3")
            update_nurse();
        else if(option == "4")
        {
            nurse_list();
            cout<<"\nPress any key...";
            nur_ent=getch();
        }
        else if(option == "5")
        {
            show_archive_nurse();
            cout<<"\nPress any key...";
            nur_ent=getch();
        }
        else
        {
            system("CLS");
            cout<<endl<<"\n\n\t\tInvalid Option, Please Try Again..\n\n";
            sleep(1);
        }
    }
}
