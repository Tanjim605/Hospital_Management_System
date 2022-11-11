#include "patient.h"

int welcome_patient()
{
    system("CLS");
    if(nm==0){
        cout<<"\n\t\tWELCOME TO THE PATIENT'S CRUD WORLD\n\n";
        sleep(1);
    }
    while(1)
    {
        system("CLS");
        cout<<"\n\t\tPlease select an option\n";
        cout<<"\n\t\t  1: Add a new patient\n\n";
        cout<<"\n\t\t  2: Remove a patient's Information\n\n";
        cout<<"\n\t\t  3: Search an individual patient's Information\n\n";
        cout<<"\n\t\t  4: Update an old Patient's Information\n\n";
        cout<<"\n\t\t  5: Show all Patient's Information\n\n";
        cout<<"\n\t\t  Enter 0 to escape\n\n";
        int option;
        cin>>option;
        system("CLS");
        if(option == 0)
        {
             cout<<"\n\t\t\t\tStay with us\n\n";
             sleep(2);
             return 0;
        }
        nm=1;
        if(option>5 || option<1)
        {
            cout<<endl<<"Invalid Option, Please try Again..\n\n";
            sleep(2);
            system("CLS");

            welcome_patient();
        }
        if(option == 1)
        {
            add_patient();
        }
        else if(option == 2)
        {
            remove_patient();
        }
        else if(option == 3)
        {
            search_patient();
        }
        else if(option == 4)
        {
            update_patient();
        }
        else if(option == 5)
        {
            show_patient();
        }
    }
}
