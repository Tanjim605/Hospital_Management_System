void show_admin()
{
    read_admin();
    cout<<endl<<endl;
    for (int i = 0; i < n; i++)
        cout <<"\t\t  "<< i + 1 << ".  " << admin[i].id << endl;
    cout << "\n\t\tPress ENTER to go back to main menu!"; // problem
    ENT = getch();
}
