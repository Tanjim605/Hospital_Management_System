int is_valid_gender(string s)
{
    for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
    }
    if(s=="M" or s=="F")
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
    if(!(bld_grp=="A+" or bld_grp=="B+" or bld_grp=="O+" or bld_grp=="AB+" or
        bld_grp=="A-" or bld_grp=="B-" or bld_grp=="AB-" or bld_grp=="O-"))
    {
        cout<<"\n\tInvalid Blood Group, press enter to Try Again..\n\n";
        f=0;
        return f;
    }
    return f;
}

string patient_id_generator()
{
    ifstream lp(last_patient_file);
    int last_patient;
    lp >> last_patient;
    string str;
    int new_id = 1000+last_patient+1;
    lp.close();
    last_patient++;
    ofstream lsp(last_patient_file);
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
    int doc_pos;

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


    cout<<endl;
    show_doctor();
    cout<<"\t\t  Choose Doctor(ID): ";

    while(getline(cin,new_patient.doc))         //new way to stop showing doctor list after pickup
    {        
        transform(new_patient.doc.begin(),new_patient.doc.end(),new_patient.doc.begin(),::toupper);
        cout<<endl;
        read_doctor();
        bool found  = false;
        for(int i=0;i<number_of_doctor;i++)
        {
            if(dr[i].id==new_patient.doc)
            {
                doc_pos=i;
                found = true;
                break;
            }
        }
        if(found)
        {
            break;
        }
        cout << "\n\n\t\tSorry, Doctor not found! Please try again.";
        sleep(1);

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
        cout<<"\t\t  Blood Group      : "<<new_patient.blood_group<<endl;
        cout<<endl;
        cout<<"\t\t  Patient problem  : "<<new_patient.reason<<endl;
        cout<<endl;
        show_doctor();
        cout<<"\t\t  Choose Doctor(ID): ";

    }
    
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
    cout<<"\t\t  Blood Group      : "<<new_patient.blood_group<<endl;
    cout<<endl;
    cout<<"\t\t  Patient problem  : "<<new_patient.reason<<endl;
    cout<<endl;
    cout<<"\t\t  Choosen Doctor   : Dr. "<<dr[doc_pos].name<<endl;
    cout<<endl;

    new_patient.room = get_room();
    new_patient.bill = "0";



    pat[number_of_patient].id = new_patient.id;
    pat[number_of_patient].name = new_patient.name;
    pat[number_of_patient].age = new_patient.age;
    pat[number_of_patient].gender = new_patient.gender;
    pat[number_of_patient].mobile_no = new_patient.mobile_no;
    pat[number_of_patient].blood_group = new_patient.blood_group;
    pat[number_of_patient].reason = new_patient.reason;
    pat[number_of_patient].bill = new_patient.bill;
    pat[number_of_patient].doc = new_patient.doc;
    pat[number_of_patient].room = new_patient.room;
    number_of_patient++;
    ofstream on(patient_file);
    int i=0;
    while(i<number_of_patient)
    {
        on<<pat[i].id<<endl;
        on<<pat[i].name<<endl;
        on<<pat[i].age<<endl;
        on<<pat[i].gender<<endl;
        on<<pat[i].mobile_no<<endl;
        on<<pat[i].blood_group<<endl;
        on<<pat[i].reason<<endl;
        on<<pat[i].bill<<endl;
        on<<pat[i].doc<<endl;
        on<<pat[i].room<<endl;
        i++;
        on<<"\n";
    }
    on.close();
    cout<<"\n\n\t\tYour given informations are added. Thanks for your co-operation.\n\n";
    cout<<"\t\t  Patient's room no. is : "<<new_patient.room<<endl<<endl;
    cout<<"\t\tPress any key to proceed...";
    pat_ent=getch();
}
