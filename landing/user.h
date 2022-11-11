int get_user()
{
    for(int i=0;i<172;i++)
    {
        cout<<'_';
    }
    cout << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t\tSelect an option: " << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  1: Admin" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  2: Patient" << endl;
    cout << endl;
    for(int i=0;i<172;i++)
    {
        cout<<'_';
    }
    cout<<endl<<endl;

    int u;
    cin >> u;

    return u;
}