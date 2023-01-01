void read_archive_doctor()
{
    ifstream old_d(archive_doctor_file);

    string ch;
    int ad=0;
    while(getline(old_d, archive_dr[ad].id))
    {
        getline(old_d, archive_dr[ad].name);
        getline(old_d, archive_dr[ad].degree);
        getline(old_d, archive_dr[ad].college);
        getline(old_d, archive_dr[ad].mobile_no);
        getline(old_d, archive_dr[ad].specialist);
        ad++;
        getline(old_d, ch);
    }
    number_of_ad=ad;
    old_d.close();
}
