void check_admin() // to check if there any existing admin or not
{
    read_admin();
    if (n == 0)
    {
        // cout << "\n\n\t\tNO existing Admin. Press ENTER key to become an Admin!";
        admin[0].id="admin1";
        admin[0].set_pass("admin2");
        n++;
        write_admin();
        // cin.get();
        // login_admin();
    }
}
