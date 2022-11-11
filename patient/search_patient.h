void search_patient()
{
    read_patient();
    cin.ignore();
    string idd;
    cout<<"Please give me the patient's ID : ";
    cin>>idd;
    for(int i=0;i<number_of_patient;i++)
    {
        if(pat[i].id==idd)
        {
        cout<<"ID          : "<<pat[i].id<<endl;
        cout<<"Name        : "<<pat[i].name<<endl;
        cout<<"Age         : "<<pat[i].age<<endl;
        cout<<"Gender      : "<<pat[i].gender<<endl;
        cout<<"Mobile NO.  : "<<pat[i].mobile_no<<endl;
        cout<<"Blood Group : "<<pat[i].blood_group<<endl;
        break;
        }
    }
    cout<<"Press any key to proceed...";
    cin.get();
}
