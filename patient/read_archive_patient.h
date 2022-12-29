void read_archive_patient()
{
    ifstream old_p(archive_patient_file);
    int ap=0;
    string s;
    while (getline(old_p, archive_pat[ap].id))
    {
        getline(old_p, archive_pat[ap].name);
        getline(old_p, archive_pat[ap].age);
        getline(old_p, archive_pat[ap].gender);
        getline(old_p, archive_pat[ap].mobile_no);
        getline(old_p, archive_pat[ap].blood_group);
        getline(old_p, archive_pat[ap].reason);
        getline(old_p, archive_pat[ap].bill);
        getline(old_p, archive_pat[ap].doc);
        getline(old_p, archive_pat[ap].room);
        ap++;
        getline(old_p, s);
    }
    number_of_ap=ap;
    old_p.close();
}
