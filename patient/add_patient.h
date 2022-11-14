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
    cout<<"\n\tInvalid Gender, press enter to Try Again..";
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
        cout<<"\n\tInvalid Blood Group, press enter to Try Again..\n\n";
        f=0;
        return f;
    }
    return f;
}

string patient_id_generator()
{
    ifstream lp("patient/last_patient.txt");
    int last_patient;
    lp >> last_patient;
    string str;
    int new_id = 1000+last_patient+1;
    lp.close();
    last_patient++;
    ofstream lsp("patient/last_patient.txt");
    lsp << last_patient;
    lsp.close();
    str+='P';
    str+=to_string(new_id);

    return str;
}

void add_patient()
{
    read_patient();
    system("CLS");
    patient new_patient;
    cout<<"\n\n\t\tADDING NEW PATIENT DETAILS\n";
    cout<<"\t\t--------------------------\n";
    cout<<"\t\t  ID               : ";
    new_patient.id = patient_id_generator();
    cout<<new_patient.id<<endl;
    cout<<endl;
    cout<<"\t\t  Patient Name     : ";
    getline(cin,new_patient.name);
    cout<<endl;
    cout<<"\t\t  Age              : ";
    getline(cin,new_patient.age);
    cout<<endl;
    cout<<"\t\t  Gender(M/F)      : ";

    while(getline(cin,new_patient.gender))
    {
        if(is_valid_gender(new_patient.gender))
        {
            new_patient.gender[0]=toupper(new_patient.gender[0]);
//            for(int i=1;i<new_patient.gender.length();i++)
//            {
//                new_patient.gender[i] = tolower(new_patient.gender[i]);
//            }
            break;
        }
        cin.ignore();
        system("CLS");
        cout<<"\n\n\t\tADDING NEW PATIENT DETAILS\n";
        cout<<"\t\t--------------------------\n";
        cout<<"\t\t  ID               : "<<new_patient.id<<endl;
        cout<<endl;
        cout<<"\t\t  Patient Name     : "<<new_patient.name<<endl;
        cout<<endl;
        cout<<"\t\t  Age              : "<<new_patient.age<<endl;
        cout<<endl;
        cout<<"\t\t  Gender(M/F)      : ";
    }
    cout<<endl;
    cout<<"\t\t  Moblie No.       : ";
    getline(cin,new_patient.mobile_no);
    cout<<endl;
    cout<<"\t\t  Blood Group      : ";
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
        cin.ignore();
        system("CLS");
        cout<<"\n\n\t\tADDING NEW PATIENT DETAILS\n";
        cout<<"\t\t--------------------------\n";
        cout<<"\t\t  ID               : "<<new_patient.id<<endl;
        cout<<endl;
        cout<<"\t\t  Patient Name     : "<<new_patient.name<<endl;
        cout<<endl;
        cout<<"\t\t  Age              : "<<new_patient.age<<endl;
        cout<<endl;
        cout<<"\t\t  Gender(M/F)      : "<<new_patient.gender<<endl;
        cout<<endl;
        cout<<"\t\t  Moblie No.       : "<<new_patient.mobile_no<<endl;
        cout<<endl;
        cout<<"\t\t  Blood Group      : ";
    }
    cout<<endl;
        cout<<"\t\t  Patient problem  : ";
    getline(cin,new_patient.reason);
    ofstream on("patient/patient.txt");
    int i=0;
    pat[number_of_patient].id = new_patient.id;
    pat[number_of_patient].name = new_patient.name;
    pat[number_of_patient].age = new_patient.age;
    pat[number_of_patient].gender = new_patient.gender;
    pat[number_of_patient].mobile_no = new_patient.mobile_no;
    pat[number_of_patient].blood_group = new_patient.blood_group;
    pat[number_of_patient].reason = new_patient.reason;
    number_of_patient++;
    while(i<number_of_patient)
    {
        on<<pat[i].id<<endl;
        on<<pat[i].name<<endl;
        on<<pat[i].age<<endl;
        on<<pat[i].gender<<endl;
        on<<pat[i].mobile_no<<endl;
        on<<pat[i].blood_group<<endl;
        on<<pat[i].reason<<endl;
        i++;
        on<<"\n";
    }
    on.close();
    cout<<"\n\n\t\tYour given informations are added. Thanks for your co-operation.\n";
    cout<<"\t\tPress any key to proceed...";
    cin.get();
}
