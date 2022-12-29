#include "doctor.h"

void welcome_doctor()
{
    system("CLS");
    cout<<"\n\n\t\tWELCOME TO THE Doctor'S CRUD WORLD\n\n";
    sleep(1);
    while(1)
    {
        system("CLS");
        cout<<"\n\n\t\tPlease select an option\n";
        cout<<"\n\t\t  1: Add a new Doctor\n";
        cout<<"\n\t\t  2: Remove a doctor's Information\n";
        cout<<"\n\t\t  3: Show all doctor's Information\n";
        cout<<"\n\t\t  4: Show archive doctor's Information\n";
        cout<<"\n\t\tEnter 0 to escape\n\n";
        string option;
        getline(cin,option);
        system("CLS");
        if(option == "0")
            break;
        else if(option == "1")
            add_doctor();
        else if(option == "2")
            delete_doctor();
        else if(option == "3")
        {
            show_doctor();
            cout<<"\n\t\tTotal doctor in this hospital : "<<number_of_doctor<<endl;
            cout<<"\n\t\tPress any key to proceed...";
            doc_ent=getch();
        }
        else if(option == "4")
        {
            show_archive_doctor();
            cout<<"\n\t\tPress any key to proceed...";
            doc_ent=getch();
        }
        else
        {
            system("CLS");
            cout<<endl<<"\n\n\t\t  Invalid Option, Please try Again..\n\n";
            sleep(1);
        }
    }
}
