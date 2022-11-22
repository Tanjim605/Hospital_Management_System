#include "class/person.h"
#include "admin/welcome_admin.h"
#include "doctor/welcome_doctor.h"
#include "nurse/welcome_nurse.h"
#include "patient/welcome_patient.h"
#include "landing/welcome.h"



int run()
{
    welcome();
    abar:
    string user=get_user();
    if(user=="0")
        return 0;
    if(user=="1") //admin er shob kaaj
    {
        logout=0;
        system("CLS");
        welcome_admin();
        if(back)
            goto back;
        if(logout==1)
        {
            system("CLS");
            goto abar;
        }
        if(logout!=1)
        {
            cout<<"\n\n\t\tAdmin login successful!\n\n";
            sleep(2);
            while(1)
            {
                back:
                system("CLS");
                cout<<"\n\n\t\t*Welcome to Admin Panel*"<<endl
                    <<"\t\t------------------------"<<endl<<endl
                    <<"\t\t  1. Admin work"<<endl
                    <<"\t\t  2. Patient work"<<endl
                    <<"\t\t  3. Doctor work"<<endl
                    <<"\t\t  4. Nurse work"<<endl
                    <<"\t\t  5. Logout"<<endl;
                string choice;
                getline(cin,choice);
                if(choice=="5"||logout==1)
                {
                    system("CLS");
                    goto abar;
                }
                if(choice=="1")
                    admin_work();
                else if(choice=="2")
                    welcome_patient();
                else if(choice=="3")
                    welcome_doctor();
                else if(choice=="4")
                    welcome_nurse();
                else
                {
                    system("CLS");
                    cout<<"\n\n\t\tInvalid option. Please Try Again.."<<endl;
                    sleep(1);
                }
                
            }
        }
    }

    else if(user=="2") //patient website e eshe ja dekhbe
    {
        while(1)
        {
            system("CLS");
            cout<<"\n\n\t\t*Welcome to our Hospital*"<<endl
                <<"\t\t-------------------------"<<endl<<endl
                << "\t\t  1. Get Admitted" << endl
                << "\t\t  2. Doctor List" << endl
                << "\t\t  3. Search Paitent" << endl
                << "\t\t  4. Exit" << endl;
            string choice;
            getline(cin,choice);
            system("CLS");

            if(choice=="1")
                add_patient();
            else if(choice == "2")
                show_doctor();
            else if(choice=="3")
            {
                system("CLS");
                search_patient();
            }
            else if(choice == "4")
            {
                system("CLS");
                goto abar;
            }
            else
            {
                system("CLS");
                cout<<"\n\n\t\tInvalid option. Please Try Again.."<<endl;
                sleep(1);
            }
        }
    }
}
