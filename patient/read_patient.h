void read_patient()
{
     ifstream in("patient/patient.txt");
     int i=0;
     string s;
     while(getline(in,pat[i].id))
     {
        getline(in,pat[i].name);
        getline(in,pat[i].age);
        getline(in,pat[i].gender);
        getline(in,pat[i].mobile_no);
        getline(in,pat[i].blood_group);
        i++;
        getline(in,s);
     }
     number_of_patient=i;
}

