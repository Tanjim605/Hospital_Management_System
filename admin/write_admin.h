void write_admin()
{
    ofstream no(admin_file);
    for (int i = 0; i < n; i++)
        no << admin[i].id << endl
           << admin[i].get_pass() << endl;
    no.close();
}
