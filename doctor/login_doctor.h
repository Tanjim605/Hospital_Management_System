#include<conio.h>
void login_doctor()
{
    read_doctor();
    string id, pass;
    int f = 1;
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\tENTER YOUR ID   : ";
        getline(cin, id);
        for (int i = 0; i < number_of_doctor; i++)
        {
            if (id == dr[i].id)
            {
                f = 0;
                log_doc = i; // position of id
                break;
            }
        }
        if (f)
        {
            cout << "\t\tInvalid Doctor's ID. Press Any key to try again!";
            doc_ent = getch();
        }
        else
            break;
    }
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\tYour ID         : " << dr[log_doc].id << endl;
        cout << "\t\tENTER PASS      : ";
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
            cout << "\n\n\t\tYour ID         : " << dr[log_doc].id << endl;
            cout << "\t\tENTER PASS      : ";
            for(int i=0; i<sz(pass); i++)
                cout<<"*";
        }
        cout << "\n\n\t   *****CHECKING PASSWORD*****\n";
        sleep(2);
        if (pass == dr[log_doc].pass)
        {
            system("CLS");
            break;
        }
        else
        {
            system("CLS");
            cout << "\n\n\t\tYour ID      : " << dr[log_doc].id << endl;
            cout << "\t\tENTER PASS   : ";
            for(int i=0; i<sz(pass); i++)
                cout<<"*";
            pass.clear();
            cout << "\n\t\tWrong PASSWORD. Press Any key to try again!";
            doc_ent = getch();
        }
    }
}
