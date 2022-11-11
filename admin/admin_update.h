void update_admin()
{
    read_admin();
    string uid, upass, pass;
    char t;
    while (1)
    {
        system("CLS");
        cout << "\t\tPress 1 to update your id!\n\t\tPress 2 to update your password!\n\t\tPress any other key to go to the main menu!\n";
        cin >> t;
        system("CLS");
        getchar();
        if (t == '1')
        {
            while(1)
            {
                int f=0;
                system("CLS");
                cout << "\t\t**ID require minimum 6 characters**\n\n";
                cout << "\t\tEnter a new id : ";
                getline(cin, uid);
                for (int i = 0; i < n; i++)
                {
                    if (uid == admin[i].id)
                        f = 1;
                }
                if(uid==admin[m].id)
                {
                    cout << "\t\tYou already have the same id! Press Enter to try again!";
                    getchar();
                }
                else if(sz(uid)<6)
                {
                    cout << "\t\tID have to be more than 5 characters. Press ENTER to try again!";
                    getchar();
                }
                else if (f)
                {
                    cout << "\t\tThis ID is already taken. Press ENTER to try again!";
                    getchar();
                }
                else
                    break;
            }
            while (1)
            {
                system("CLS");
                cout << "\t\tEnter a new id     : " << uid << endl << endl;
                cout << "\t\tEnter your current Password to confirm : ";
                getline(cin, pass);
                cout << "\n\t\t*****CHECKING PASSWORD*****\n";
                sleep(2);
                if (admin[m].get_pass() == pass)
                {
                    admin[m].id = uid;
                    system("CLS");
                    cout << "\n\t\tYour id is Updated!\n\t\tPress Enter!";
                    getchar();
                    break;
                }
                else
                {
                    system("CLS");
                    cout << "\t\tEnter a new id   : " << uid << endl << endl;
                    cout << "\t\tEnter your current Password to confirm : " << pass << endl << endl;
                    cout << "\t\tWrong Password! Press Enter to try again!";
                    getchar();
                }
            }
        }
        else if(t == '2')
        {
            while(1)
            {
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
                    cout << "\t\tID have to be more than 5 characters. Press ENTER to try again!";
                    getchar();
                }
                else
                    break;
            }
            while (1)
            {
                system("CLS");
                cout << "\t\tEnter a new Password : " << upass << endl << endl;
                cout << "\t\tEnter your current Password to confirm: ";
                getline(cin, pass);
                cout << "\n\t\t*****CHECKING PASSWORD*****\n";
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
                    cout << "\t\tEnter your current Password to confirm: " << pass << endl << endl;
                    cout << "\t\tWrong Password! Press Enter to try again!";
                    getchar();
                }
            }
        }
        else
        {
            write_admin();
            break;
        }
    }
}