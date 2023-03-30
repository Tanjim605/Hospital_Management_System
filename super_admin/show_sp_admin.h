void show_sp_admin()
{
    read_sp_admin();
    cout<<endl<<endl;
    for (int i = 0; i < super_n; i++)
        cout <<"\t\t  "<< i + 1 << ".  " << super_admin[i].id << endl;
    cout << "\n\t\tPress ENTER to go back to main menu!"; // problem
    super_ENT = getch();
}
