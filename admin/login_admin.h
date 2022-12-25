#include<conio.h>
void login_admin()
{
    read_admin();
    string id, pass;
    int f = 1;
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\tENTER USER   : ";
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
            ENT = getch();
        }
        else
            break;
    }
    int log_cnt=0;
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\tUSER         : " << admin[m].id << endl;
        cout << "\t\tENTER PASS   : ";
        for(int i=0; ; i++)
        {
            char h=getch();
            if(h==13)
                break;
            else if(h==8)
                pass.pop_back();
            else
                pass+=h;
            system("CLS");
            cout << "\n\n\t\tUSER         : " << admin[m].id << endl;
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
                cout << "\n\n\t\tUSER         : " << admin[m].id << endl;
                cout << "\t\tENTER PASS   : ";
                for(int i=0; i<sz(pass); i++)
                    cout<<"*";
                cout << endl << endl;
                if(log_cnt<2)
                    cout<<"\t\tWrong Password. You have "<<3-log_cnt<<" attempts left. Try again!" << endl << endl;
                else if(log_cnt==2)
                    cout<<"\t\tWrong Password. You have "<<3-log_cnt<<" attempt left. Try again!" << endl << endl;
            }
            pass.clear();
            //cout << "\n\t\tWrong PASSWORD. Press ENTER to try again!";
            ENT = getch();
        }
    }
}
