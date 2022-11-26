string get_user()
{
    again:
    system("CLS");
    for(int i=0;i<172;i++)
    {
        cout<<'_';
    }
    cout << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\t\tSelect an option: " << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  1: Admin" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  2: Doctor" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  3: Patient" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t  0: Exit" << endl;
    cout << endl;
    for(int i=0;i<172;i++)
    {
        cout<<'_';
    }
    cout<<endl<<endl;
    string u;
    getline(cin,u);
    if(u!="1" && u!="2" && u!="0" && u!="3")
    {
        system("CLS");
        cout<<"\n\n\t\tInvalid option. Please Try Again.."<<endl;
        sleep(1);
        goto again;
    }
    return u;
}
