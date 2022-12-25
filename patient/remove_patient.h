void remove_patient()
{
    read_patient();
    string del_id;
    int i=0,f=0;
    system("CLS");
    while(1)
    {
        cout<<"\n\n\t\t  DISCHARGING PATIENT\n";
        cout<<"\t\t  -------------------\n";
        cout<<"\t\t  ID          : ";
        getline(cin,del_id);
        i=0,f=0;
        while(i<number_of_patient)
        {
            if(del_id==pat[i].id)
            {
                f=1;
            }
            i++;
        }
        if(f==0)
        {
            system("CLS");
            cout<<"\n\n\t\tInvalid ID, Please try again\n\n";
            sleep(1);
            system("CLS");
        }
        else break;
    }
    f=0;
    i=0;
    ifstream old_p(archive_patient_file);
    string s;
    int ap=0;
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
    


    ofstream inn(patient_file);

    while(i<number_of_patient)
    {
        if(del_id!=pat[i].id)
        {
            inn<<pat[i].id<<endl;
            inn<<pat[i].name<<endl;
            inn<<pat[i].age<<endl;
            inn<<pat[i].gender<<endl;
            inn<<pat[i].mobile_no<<endl;
            inn<<pat[i].blood_group<<endl;
            inn<<pat[i].reason<<endl;
            inn<<pat[i].bill<<endl;
            inn<<pat[i].doc<<endl;
            inn<<pat[i].room<<endl;
            inn<<"\n";
        }
        else if(del_id==pat[i].id)
        {
            f=1;
            archive_pat[ap].id=pat[i].id;
            archive_pat[ap].name=pat[i].name;
            archive_pat[ap].age=pat[i].age;
            archive_pat[ap].gender=pat[i].gender;
            archive_pat[ap].mobile_no=pat[i].mobile_no;
            archive_pat[ap].blood_group=pat[i].blood_group;
            archive_pat[ap].reason=pat[i].reason;
            archive_pat[ap].bill=pat[i].bill;
            archive_pat[ap].doc=pat[i].doc;
            archive_pat[ap].room=pat[i].room;
            number_of_ap++;
        }
        i++;
    }
    inn.close();

    system("CLS");
    cout<<"\n\n\t\t  Your targeted patient is discharged. Thanks for your co-operation.\n\n\n";
    number_of_patient--;

    cout << "\t\t  Name : " << archive_pat[ap].name<<endl<<endl;
    cout<<"\t\t  Here is your bill:\n";
    cout<<"\t\t    sl.  Tests      ------- Cost\n"
        <<"\t\t  --------------------------------\n";

    long long total_bill=0;
    for(int i=0;i<archive_pat[ap].bill.size();i++)
    {
        int tp=archive_pat[ap].bill[i]-'0';
        cout<<"\t\t    "<<i+1 <<". " << tests[tp] <<"      ------- "<< cost[tp]<<endl;
        total_bill+=cost[tp];
    }
    cout<<"\t\t  ------------------------------------------"
        <<"\n\t\t  Total bill               :"<<total_bill<< "/= BDT"<<endl;

    archive_pat[ap].bill=to_string(total_bill);
    
    ofstream iinn(archive_patient_file);
    i=0;
    while(i<number_of_ap)
    {
        iinn<<archive_pat[i].id<<endl;
        iinn<<archive_pat[i].name<<endl;
        iinn<<archive_pat[i].age<<endl;
        iinn<<archive_pat[i].gender<<endl;
        iinn<<archive_pat[i].mobile_no<<endl;
        iinn<<archive_pat[i].blood_group<<endl;
        iinn<<archive_pat[i].reason<<endl;
        iinn<<archive_pat[i].bill<<endl;
        iinn<<archive_pat[i].doc<<endl;
        iinn<<archive_pat[i].room<<endl;
        iinn<<"\n";
        i++;
    }

    cout<<"\n\t\tPress any key to proceed...";
    pat_ent=getch();
}
