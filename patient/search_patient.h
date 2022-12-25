void search_patient()
{
    read_patient();
    here:
    system("CLS");
    string idd;
    int flag=1;
    cout<<"\n\n\t\tPlease enter patient's ID : ";
    getline(cin,idd);
    for(int i=0;i<number_of_patient;i++)
    {
        if(pat[i].id==idd)
        {
            cout<<endl<<endl;       //just to make things beautiful
            cout<<"\t\t  ID              : "<<pat[i].id<<endl;
            cout<<"\t\t  Name            : "<<pat[i].name<<endl;
            cout<<"\t\t  Age             : "<<pat[i].age<<endl;
            cout<<"\t\t  Gender          : "<<pat[i].gender<<endl;
            cout<<"\t\t  Mobile NO.      : "<<pat[i].mobile_no<<endl;
            cout<<"\t\t  Blood Group     : "<<pat[i].blood_group<<endl;
            cout<<"\t\t  Patient Problem : "<<pat[i].reason<<endl;
            cout<<"\t\t  Room No.        : "<<pat[i].room<<endl;
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout << "\n\n\t\tSorry Patient not found! Please try again.";
        sleep(1);
        goto here;
    }
    cout<<"\n\t\tPress any key to proceed...";
    pat_ent=getch();
}
