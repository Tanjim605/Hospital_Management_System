void search_patient()
{
    read_patient();
    cin.ignore();
    here:
    string idd;
    int flag=1;
    cout<<"\n\n\t\tPlease give me the patient's ID : ";
    getline(cin,idd);
    for(int i=0;i<number_of_patient;i++)
    {
        if(pat[i].id==idd)
        {
            cout<<endl<<endl;       //just to make things beautiful
            cout<<"\t\tID          : "<<pat[i].id<<endl;
            cout<<"\t\tName        : "<<pat[i].name<<endl;
            cout<<"\t\tAge         : "<<pat[i].age<<endl;
            cout<<"\t\tGender      : "<<pat[i].gender<<endl;
            cout<<"\t\tMobile NO.  : "<<pat[i].mobile_no<<endl;
            cout<<"\t\tBlood Group : "<<pat[i].blood_group<<endl;
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout << "\n\n\t\tSorry Patient not found! Please try again.";
        system("CLS");
        goto here;
        // search_patient();
    }
    cout<<"\n\t\tPress any key to proceed...";
    cin.get();
}
