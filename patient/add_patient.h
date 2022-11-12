int is_valid_gender(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
    }
    if(s=="M" || s=="F")
    {
        return 1;
    }
    cout<<"\n\tInvalid Gender Try Again..\n\n";
    cout<<"Gender : ";
    return 0;
}
int is_valid_Blood_Group(string bld_grp)
{
    for(int i=0;i<bld_grp.length();i++)
    {
        bld_grp[i] = toupper(bld_grp[i]);
    }
    int f=1;
    if(!(bld_grp=="A+"||bld_grp=="B+"||bld_grp=="O+"||bld_grp=="AB+"||
        bld_grp=="A-"||bld_grp=="B-"||bld_grp=="AB-"||bld_grp=="O-"))
    {
        cout<<"\n\tInvalid Blood Group Try Again..\n\n";
        cout<<"Blood Group : ";
        f=0;
        return f;
    }
    return f;
}
string patient_id_generator()
{
    string str;
    int new_id = 1000+number_of_patient+1;
    str+='P';
    str+=to_string(new_id);
    return str;
}
void add_patient()
{
    read_patient();
    patient new_patient;
    cout<<"\n\nADDING NEW PATIENT DETAILS\n";
    cout<<"------------------------\n";
    cin.ignore();
    cout<<"ID           : ";
    new_patient.id = patient_id_generator();
    cout<<new_patient.id<<endl;
    cout<<endl;
    cout<<"Patient Name : ";
    getline(cin,new_patient.name);
    cout<<endl;
    cout<<"Age          : ";
    getline(cin,new_patient.age);
    cout<<endl;
    cout<<"Gender(M/F)  : ";
    while(getline(cin,new_patient.gender))
    {
        if(is_valid_gender(new_patient.gender))
        {
            new_patient.gender[0]=toupper(new_patient.gender[0]);
            for(int i=1;i<new_patient.gender.length();i++)
            {
                new_patient.gender[i] = tolower(new_patient.gender[i]);
            }
            break;
        }
    }
    cout<<endl;
    cout<<"Moblie No.   : ";
    getline(cin,new_patient.mobile_no);
    cout<<endl;
    cout<<"Blood Group  : ";
    while(getline(cin,new_patient.blood_group))
    {
        if(is_valid_Blood_Group(new_patient.blood_group))
        {
            for(int i=0;i<new_patient.blood_group.length();i++)
            {
                new_patient.blood_group[i] = toupper(new_patient.blood_group[i]);
            }
            break;
        }
    }
    cout<<endl;
    ofstream on("patient/patient.txt");
    int i=0;
    pat[number_of_patient].id = new_patient.id;
    pat[number_of_patient].name = new_patient.name;
    pat[number_of_patient].age = new_patient.age;
    pat[number_of_patient].gender = new_patient.gender;
    pat[number_of_patient].mobile_no = new_patient.mobile_no;
    pat[number_of_patient].blood_group = new_patient.blood_group;
    number_of_patient++;
    while(i<number_of_patient)
    {
        on<<pat[i].id<<endl;
        on<<pat[i].name<<endl;
        on<<pat[i].age<<endl;
        on<<pat[i].gender<<endl;
        on<<pat[i].mobile_no<<endl;
        on<<pat[i].blood_group<<endl;
        i++;
        on<<"\n";
    }
    on.close();
    system("CLS");
    cout<<"\n\tYour given information's are added. Thanks for your co-operation.\n\n";
    system("CLS");
    cout<<"Press any key to proceed...";
    cin.get();
}
