void check_admin() // to check if there any existing admin or not
{
    read_admin();
    if (n == 0)
    {
        cout << "\n\n\t\tNO existing Admin. Press ENTER key to become an Admin!";
        cin.get();
        add_admin();
    }
}
