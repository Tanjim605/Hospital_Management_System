void delete_admin()
{
    read_admin();
    int f=0;
    getchar();
    while (1)
    {
        system("CLS");
        cout << "\t\tEnter your Password to confirm Deletation: ";
        string s;

        getline(cin, s);
        cout << "\n\t\t*****CHECKING PASSWORD*****\n";
        sleep(2);
        if(s==admin[m].get_pass())
        {
            ofstream no("admin/login.txt");
            for (int i = 0; i < n; i++)
            {
                if(i!=m)
                    no << admin[i].id << endl << admin[i].get_pass() << endl;
            }
            n--;
            system("CLS");
            cout << "\t\tID deleted!\n";
            cout << "\t\tPress ENTER to go back to main menu!";
            read_admin();
            getchar();
            break;
        }
        else
        {
            system("CLS");
            cout << "\t\tEnter your Password to confirm Deletation: " << s << endl << endl;
            cout << "\t\tWrong Password! Press Enter to try again!";
            getchar();
            continue;
        }
    }
}