void add_admin()
{
    read_admin();
    string nid, npass;
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\t  ADDING NEW ADMIN DETAILS\n";
        cout << "\t\t  ------------------------\n";
        cout << "\t\t**USER & PASS require minimum 6 characters**\n\n";
        cout << "\t\t  USER         : ";
        int f = 0;
        getline(cin, nid);
        for (int i = 0; i < n; i++)
        {
            if (nid == admin[i].id)
                f = 1;
        }
        if (sz(nid) < 6)
        {
            cout << "\t\tUSER have to be more than 5 characters. Press any key to try again!";
            ENT=getch();
        }
        else if (f)
        {
            cout << "\t\tThis USER is already taken. Press any key to try again!";
            ENT=getch();
        }
        else
            break;
    }
    while (1)
    {
        system("CLS");
        cout << "\n\n\t\t  ADDING NEW ADMIN DETAILS\n";
        cout << "\t\t  ------------------------\n";
        cout << "\t\t**USER & PASS require minimum 6 characters**\n\n";
        cout << "\t\t  USER         : " << nid << endl;
        cout << "\t\t  PASS         : ";
        getline(cin, npass);
        if (sz(npass) < 6)
        {
            cout << "\t\tPASS have to be more than 5 characters. Press any key to try again!";
            ENT=getch();
        }
        else
        {
            while(1)
            {
                system("CLS");
                string cps;
                cout << "\n\n\t\t  ADDING NEW ADMIN DETAILS\n";
                cout << "\t\t  ------------------------\n";
                cout << "\t\t**USER & PASS require minimum 6 characters**\n\n";
                cout << "\t\t  USER         : " << nid << endl;
                cout << "\t\t  PASS         : " << npass << endl;
                cout << "\t\t  Confirm PASS : ";
                getline(cin,cps);
                if(cps!=npass)
                {
                    cout << "\t\tYour password didn't matched." << endl
                         << "\t\tPress any key to try again!";
                    getch(); 
                }
                else    
                    break;
            }
            
            cout << endl
                 << "\t\tNew Admin added!" << endl;
            cout << "\t\tPress any key to proceed!";
            ENT=getch();
            system("CLS");
            break;
        }
    }
    admin[n].id = nid;
    admin[n].set_pass(npass);
    n++;
    write_admin();
}
