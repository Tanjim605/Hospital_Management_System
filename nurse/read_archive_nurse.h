void read_archive_nurse()
{
    ifstream old_n(archive_nurse_file);
    int an=0;
    string ch;
    while(getline(old_n, archive_nrs[an].id))
    {
        getline(old_n, archive_nrs[an].name);
        getline(old_n, archive_nrs[an].mobile_no);
        getline(old_n, archive_nrs[an].blood_group);
        an++;
        getline(old_n, ch);
    }
    number_of_an=an;
    old_n.close();
}
