void update_sp_admin()
{
    read_sp_admin();
    string uid, upass, pass,t;
    while (1)
    {
        system("CLS");
        cout << "\t\tPress 1 to update your USER!\n\t\tPress 2 to update your PASS!\n\t\tEnter 0 to escape...\n";
        getline(cin,t);
        if (t == "1")
        {
            while(1)
            {
                int f=0;
                system("CLS");
                cout << "\t\t**USER require minimum 6 characters**\n\n";
                cout << "\t\tEnter a new USER : ";
                getline(cin, uid);
                for (int i = 0; i < super_n; i++)
                {
                    if (uid == super_admin[i].id)
                        f = 1;
                }
                if(uid==super_admin[M].id)
                {
                    cout << "\t\tYou already have the same USER! Press Enter to try again!";
                    super_ENT = getch();
                }
                else if(sz(uid)<6)
                {
                    cout << "\t\tUSER have to be more than 5 characters. Press ENTER to try again!";
                    super_ENT = getch();
                }
                else if (f)
                {
                    cout << "\t\tThis USER is already taken. Press ENTER to try again!";
                    super_ENT = getch();
                }
                else
                    break;
            }
            while (1)
            {
                pass.clear();
                system("CLS");
                cout << "\t\tEnter a new USER : " << uid << endl << endl;
                cout << "\t\tEnter your current Password to confirm : ";
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
                    cout << "\t\tEnter a new USER : " << uid << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout<<"*";
                }
                cout << "\n\n\t\t*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (super_admin[M].get_pass() == pass)
                {
                    super_admin[M].id = uid;
                    system("CLS");
                    cout << "\n\n\t\tYour USER is Updated!\n\t\tPress Enter!";
                    super_ENT = getch();
                    break;
                }
                else
                {
                    system("CLS");
                    cout << "\t\tEnter a new USER : " << uid << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout << "*";
                    cout << "\n\n\t\tWrong Password! Press Enter to try again!";
                    super_ENT = getch();
                }
                pass.clear();
            }
        }
        else if(t == "2")
        {
            while(1)
            {
                pass.clear();
                system("CLS");
                cout << "\t\t**PASSWORD require minimum 6 characters**\n\n";
                cout << "\t\tEnter a new Password  : ";
                getline(cin, upass);
                if(upass==super_admin[M].get_pass())
                {
                    cout << "\t\tYou already have the same password! Press Enter to try again!";
                    super_ENT = getch();
                    continue;
                }
                else if(sz(upass)<6)
                {
                    cout << "\t\tPASS have to be more than 5 characters. Press ENTER to try again!";
                    super_ENT = getch();
                    continue;
                }
                cout << "\t\tEnter Password Again  : ";
                string upass2;
                getline(cin, upass2);
                while(upass!=upass2)
                {
                    cout << "\t\tPassword didn't matched..\n"
                         << "\t\tPlease Try Again..";
                        super_ENT = getch(); 
                    system("CLS");
                    cout << "\t\t**PASSWORD require minimum 6 characters**\n\n";
                    cout << "\t\tEnter a new Password  : "<<upass<<endl;
                    cout << "\t\tEnter Password Again  : ";
                    getline(cin, upass2);   
                }
                break;
            }
            while (1)
            {
                system("CLS");
                cout << "\t\tEnter a new Password : " << upass << endl << endl;
                cout << "\t\tEnter your current Password to confirm : ";
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
                    cout << "\t\tEnter a new Password : " << upass << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout<<"*";
                }
                cout << "\n\n\t\t*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (super_admin[M].get_pass() == pass)
                {
                    super_admin[M].set_pass(upass);
                    system("CLS");
                    cout << "\n\n\t\tYour password is Updated!\n\t\tPress Enter!";
                    super_ENT = getch();
                    break;
                }
                else
                {
                    system("CLS");
                    cout << "\n\n\t\tEnter a new Password : " << upass << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout << "*";
                    cout << "\n\n\t\tWrong Password! Press Enter to try again!";
                    super_ENT = getch();
                }
                pass.clear();
            }
        }
        else if(t == "0")
        {
            write_sp_admin();
            break;
        }
        else
        {
            system("CLS");
            cout<<"\n\n\t\tInvalid option. Please Try Again.."<<endl;
            sleep(1);
        }
    }
}
