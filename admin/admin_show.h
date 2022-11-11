void show_admin()
{
    read_admin();
    for (int i = 0; i < n; i++)
        cout <<"\t\t"<< i + 1 << ".  " << admin[i].id << endl;
    cout << "\t\tPress ENTER to go back to main manu!"; // problem
    getchar();
    getchar();
}