int is_valid(string bld_grp)
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

string nurse_id_generator()
{
    ifstream ln("nurse/last_nurse.txt");
    int last_nurse;
    ln >> last_nurse;
    string str;
    int new_id = 1000+last_nurse+1;
    ln.close();
    last_nurse++;
    ofstream lsn("nurse/last_nurse.txt");
    lsn << last_nurse;
    lsn.close();
    str+='N';
    str+=to_string(new_id);

    return str;
}

void add_nurse()
{
    read_nurse();
    cin.ignore();
    nurse new_nurse;
    cout<<"\n\nADDING NEW NURSE DETAILS\n";
    cout<<"------------------------\n";
    cout<<"ID          : ";
    new_nurse.id = nurse_id_generator();
    cout<<new_nurse.id<<endl;
    cout<<"Nurse Name  : ";
    getline(cin,new_nurse.name);
    cout<<"Mobile No.  : ";
    getline(cin,new_nurse.mobile_no);
    cout<<"Blood Group : ";
    while(getline(cin,new_nurse.blood_group))
    {
        if(is_valid(new_nurse.blood_group))
        {
            for(int i=0;i<new_nurse.blood_group.length();i++)
            {
                new_nurse.blood_group[i] = toupper(new_nurse.blood_group[i]);
            }
            break;
        }
    }
    ofstream no("nurse/nurse.txt");
    int i =0;
    nrs[number_of_nurse].id = new_nurse.id;
    nrs[number_of_nurse].name = new_nurse.name;
    nrs[number_of_nurse].mobile_no = new_nurse.mobile_no;
    nrs[number_of_nurse].blood_group = new_nurse.blood_group;
    number_of_nurse++;
    while(i<number_of_nurse)
    {
        no<<nrs[i].id<<endl;
        no<<nrs[i].name<<endl;
        no<<nrs[i].mobile_no<<endl;
        no<<nrs[i].blood_group<<endl;
        i++;
        no<<"\n";
    }
    no.close();
    
}
