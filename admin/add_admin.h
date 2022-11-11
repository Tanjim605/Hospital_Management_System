void add_admin()
{
    read_admin();
    getchar();
    string nid, npass;
    while (1)
    {
        system("CLS");
        cout << "\n\nADDING NEW ADMIN DETAILS\n";
        cout << "------------------------\n";
        cout << "\t\t**ID & PASS require minimum 6 characters**\n\n";
        cout << "\t\tID   : ";
        int f = 0;
        getline(cin, nid);
        for (int i = 0; i < n; i++)
        {
            if (nid == admin[i].id)
                f = 1;
        }
        if (sz(nid) < 6)
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
        cout << "\n\nADDING NEW ADMIN DETAILS\n";
        cout << "\t\t------------------------\n";
        cout << "\t\t**ID & PASS require minimum 6 characters**\n\n";
        cout << "\t\t    ID     : " << nid << endl;
        cout << "\t\t    PASS   : ";
        getline(cin, npass);
        if (sz(npass) < 6)
        {
            cout << "\t\tPASS have to be more than 5 characters. Press ENTER to try again!";
            getchar();
        }

        else
        {
            cout << endl
                 << "\t\tNew Admin added!" << endl;
            cout << "\t\tPress ENTER";
            getchar();
            system("CLS");
            break;
        }
    }
    admin[n].id = nid;
    admin[n].set_pass(npass);
    n++;
    write_admin();
}