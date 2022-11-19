void read_admin()
{
    ifstream ni(admin_file);
    string ID, PASS;
    n = 0;
    for (int i = 0; getline(ni, ID); i++)
    {
        getline(ni, PASS);
        if (sz(ID) < 6 || sz(PASS) < 6)
            continue;
        admin[i].id = ID;
        admin[i].set_pass(PASS);
        n++;
    }
}
