void read_sp_admin()
{
    ifstream sni(sp_admin_file);
    string ID, PASS;
    super_n = 0;
    for (int i = 0; getline(sni, ID); i++)
    {
        getline(sni, PASS);
        if (sz(ID) < 6 || sz(PASS) < 6)
            continue;
        super_admin[i].id = ID;
        super_admin[i].set_pass(PASS);
        super_n++;
    }
}
