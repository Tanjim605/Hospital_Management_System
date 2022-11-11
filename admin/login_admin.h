#include<conio.h>
void login_admin()
{
    read_admin();
    string id, pass;
    int f = 1;
    getchar();
    while (1)
    {
        system("CLS");
        cout << "\t\tENTER USER   : ";
        getline(cin, id);
        for (int i = 0; i < n; i++)
        {
            if (id == admin[i].id)
            {
                f = 0;
                m = i; // position of id
                break;
            }
        }
        if (f)
        {
            cout << "\t\tInvalid USER. Press ENTER to try again!";
            getchar();
        }
        else
            break;
    }
    int log_cnt=0;
    while (1)
    {
        system("CLS");
        cout << "\t\tUSER         : " << admin[m].id << endl;
        cout << "\t\tENTER PASS   : ";
        for(int i=0; i<sz(admin[m].get_pass()); i++)
        {
            pass+=getch();
            system("CLS");
            cout << "\t\tUSER         : " << admin[m].id << endl;
            cout << "\t\tENTER PASS   : ";
            for(int i=0; i<sz(pass); i++)
                cout<<"*";
        }
        cout << "\n\n\t   *****CHECKING PASSWORD*****\n";
        sleep(2);
        if (pass == admin[m].get_pass())
        {
            system("CLS");
            break;
        }
        else
        {
            log_cnt++;
            if(log_cnt==3)
            {
                for(int i=5; i>=0; i--)
                {
                    system("CLS");
                    cout << endl << endl << endl;
                    cout<<"\t\t\t\t\t\t\t\t\tWait for "<< i <<" seconds, try again";
                    sleep(1);
                }

                log_cnt=0;
                system("CLS");
                cout<<"press ENTER !";
            }
            else
            {
                system("CLS");
                cout << "\t\tUSER         : " << admin[m].id << endl;
                cout << "\t\tENTER PASS   : " << pass << endl << endl;
                if(log_cnt<2)
                    cout<<"\t\tInvalid User or Password. You have "<<3-log_cnt<<" attempts left. Try again!" << endl << endl;
                else if(log_cnt==2)
                    cout<<"\t\tInvalid User or Password. You have "<<3-log_cnt<<" attempt left. Try again!" << endl << endl;
            }
            pass.clear();
            //cout << "\n\t\tWrong PASSWORD. Press ENTER to try again!";
            getchar();
        }
    }
}