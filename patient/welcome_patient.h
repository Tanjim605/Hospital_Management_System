#include "patient.h"

void welcome_patient()
{
    system("CLS");
    cout<<"\n\n\t\tWELCOME TO THE PATIENT'S CRUD WORLD\n\n";
    sleep(1);
    while(1)
    {
        system("CLS");
        cout<<"\n\n\t\tPlease select an option\n";
        cout<<"\n\t\t  1: Add a new patient\n";
        cout<<"\n\t\t  2: Discharge a patient\n";
        cout<<"\n\t\t  3: Search an individual patient's Information\n";
        cout<<"\n\t\t  4: Update an existing Patient's Information\n";
        cout<<"\n\t\t  5: Show all Patient's Information\n";
        cout<<"\n\t\t  6: Show archive Patient's Information\n";
        cout<<"\n\t\tEnter 0 to escape\n";
        string option;
        getline(cin,option);
        if(option == "0")
            return;
        if(option == "1")
            add_patient();
        else if(option == "2")
            remove_patient();
        else if(option == "3")
            search_patient();
        else if(option == "4")
            update_patient();
        else if(option == "5")
            show_patient();
        else if(option == "6")
            show_archive_patient();
        else
        {
            system("CLS");
            cout<<"\n\n\t\tInvalid Option, Please try Again..\n\n";
            sleep(1);
        }
    }
}
