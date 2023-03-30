void write_sp_admin()
{
    ofstream sno(sp_admin_file);
    for (int i = 0; i < super_n; i++)
        sno << super_admin[i].id << endl
           << super_admin[i].get_pass() << endl;
    sno.close();
}
