#include "doctor.h"

void welcome_doctor()
{
    system("CLS");
    if(mm==0){
        cout<<"\n\n\t\tWELCOME TO THE Doctor'S CRUD WORLD\n\n";
        sleep(1);
    }
    while(1)
    {
        system("CLS");
        cout<<"\n\n\t\tPlease select an option\n";
        cout<<"\n\t\t  1: Add a new Doctor\n\n";
        cout<<"\n\t\t  2: Remove a doctor's Information\n\n";
        cout<<"\n\t\t  3: Update a doctor's Information\n\n";
        cout<<"\n\t\t  4: Show all doctor's Information\n\n";
        cout<<"\n\t\tEnter 0 to escape\n\n";
        int option;
        cin>>option;
        system("CLS");
        if(option == 0)
        {
            // cout<<"\n\t\t\t\tStay with us\n\n";
            sleep(1);
            break;
        }
        mm=1;
        if(option>4 || option<1)
        {
            cout<<endl<<"\t\t  Invalid Option, Please try Again..\n\n";
            sleep(2);
            system("CLS");

            welcome_doctor();
        }
        if(option == 1)
        {
            add_doctor();
        }
        else if(option == 2)
        {
            delete_doctor();
        }
        else if(option == 3)
        {
            update_doctor();
        }
        else
        {
            show_doctor();
        }
    }
}
