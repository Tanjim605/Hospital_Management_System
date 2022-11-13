
#include "nurse.h"

void welcome_nurse()
{
    if(nn==0){
        system("CLS");
        cout<<"\n\n\t\tWELCOME TO THE NURSE'S CRUD WORLD\n\n";
        cout<<"\t\t---------------------------------\n";
        sleep(1);
    }
    // while(1)
    // {
        system("CLS");
        cout<<"\n\n\n\tPlease select an option\n";
        cout<<"\t-----------------------\n";
        cout<<"\n\t  1: Add a new nurse\n\n";
        cout<<"\n\t  2: Remove a nurse's Information\n\n";
        cout<<"\n\t  3: Update an old nurse's Information\n\n";
        cout<<"\n\t  4: Show all nurse's Information\n\n";
        cout<<"\n\tEnter 0 to escape\n\n";
        int option;
        cin>>option;
        system("CLS");
        if(option == 0)
        {
            //  cout<<"\n\t\t\t\tStay with us\n\n";
            sleep(1);
            return;
        }
        nn=1;
        if(option>5 || option<1)
        {
            cout<<endl<<"Invalid Option, Please try Again..\n\n";
            sleep(2);
            system("CLS");
            welcome_nurse();
        }
        if(option == 1)
        {
            add_nurse();
        }
        else if(option == 2)
        {
            delete_nurse();
        }
        else if(option == 3)
        {
            update_nurse();
        }
        else
        {
            nurse_list();
            cout<<"\nPress any key...";
            cin.ignore();
            string enter;
            getline(cin,enter);
        }
        welcome_nurse();
    // }
}