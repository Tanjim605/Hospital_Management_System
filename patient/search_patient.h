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
            cout<<"\t\tID              : "<<pat[i].id<<endl;
            cout<<"\t\tName            : "<<pat[i].name<<endl;
            cout<<"\t\tAge             : "<<pat[i].age<<endl;
            cout<<"\t\tGender          : "<<pat[i].gender<<endl;
            cout<<"\t\tMobile NO.      : "<<pat[i].mobile_no<<endl;
            cout<<"\t\tBlood Group     : "<<pat[i].blood_group<<endl;
            cout<<"\t\tPatient Problem : "<<pat[i].reason<<endl;
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
    cin.get();
}
