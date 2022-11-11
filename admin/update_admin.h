void update_admin()
{
    read_admin();
    string uid, upass, pass;
    char t;
    while (1)
    {
        system("CLS");
        cout << "\t\tPress 1 to update your USER!\n\t\tPress 2 to update your PASS!\n\t\tEnter 0 to escape...\n";
        cin >> t;
        system("CLS");
        getchar();
        if (t == '1')
        {
            while(1)
            {
                int f=0;
                system("CLS");
                cout << "\t\t**USER require minimum 6 characters**\n\n";
                cout << "\t\tEnter a new USER : ";
                getline(cin, uid);
                for (int i = 0; i < n; i++)
                {
                    if (uid == admin[i].id)
                        f = 1;
                }
                if(uid==admin[m].id)
                {
                    cout << "\t\tYou already have the same USER! Press Enter to try again!";
                    getchar();
                }
                else if(sz(uid)<6)
                {
                    cout << "\t\tUSER have to be more than 5 characters. Press ENTER to try again!";
                    getchar();
                }
                else if (f)
                {
                    cout << "\t\tThis USER is already taken. Press ENTER to try again!";
                    getchar();
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
                for(int i=0; i<sz(admin[m].get_pass()); i++)
                {
                    pass+=getch();
                    system("CLS");
                    cout << "\t\tEnter a new USER : " << uid << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout<<"*";
                }
                cout << "\n\n\t\t*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (admin[m].get_pass() == pass)
                {
                    admin[m].id = uid;
                    system("CLS");
                    cout << "\n\t\tYour USER is Updated!\n\t\tPress Enter!";
                    getchar();
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
                    getchar();
                }
                pass.clear();
            }
        }
        else if(t == '2')
        {
            while(1)
            {
                pass.clear();
                system("CLS");
                cout << "\t\t**PASSWORD require minimum 6 characters**\n\n";
                cout << "\t\tEnter a new Password  : ";
                getline(cin, upass);
                if(upass==admin[m].get_pass())
                {
                    cout << "\t\tYou already have the same password! Press Enter to try again!";
                    getchar();
                }
                else if(sz(upass)<6)
                {
                    cout << "\t\tPASS have to be more than 5 characters. Press ENTER to try again!";
                    getchar();
                }
                else
                    break;
            }
            while (1)
            {
                system("CLS");
                cout << "\t\tEnter a new Password : " << upass << endl << endl;
                cout << "\t\tEnter your current Password to confirm : ";
                for(int i=0; i<sz(admin[m].get_pass()); i++)
                {
                    pass+=getch();
                    system("CLS");
                    cout << "\t\tEnter a new Password : " << upass << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout<<"*";
                }
                cout << "\n\n\t\t*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (admin[m].get_pass() == pass)
                {
                    admin[m].set_pass(upass);
                    system("CLS");
                    cout << "\n\t\tYour password is Updated!\n\t\tPress Enter!";
                    getchar();
                    break;
                }
                else
                {
                    system("CLS");
                    cout << "\t\tEnter a new Password : " << upass << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : ";
                    for(int i=0; i<sz(pass); i++)
                        cout << "*";
                    cout << "\n\n\t\tWrong Password! Press Enter to try again!";
                    getchar();
                }
                pass.clear();
            }
        }
        else
        {
            write_admin();
            break;
        }
    }
}