void show_patient()
{
    read_patient();
    int i = 0;
    cout<<"\n\n\t\tPatient List : \n";
    cout<<"\t\t-------------\n";
    while(i<number_of_patient)
    {
        cout<<"\t\tID          : "<<pat[i].id<<endl;
        cout<<"\t\tName        : "<<pat[i].name<<endl;
        cout<<"\t\tAge         : "<<pat[i].age<<endl;
        cout<<"\t\tGender      : "<<pat[i].gender<<endl;
        cout<<"\t\tMobile NO.  : "<<pat[i].mobile_no<<endl;
        cout<<"\t\tBlood Group : "<<pat[i].blood_group<<endl;
        i++;
        cout<<"\n"<<endl;
    }
    cout<<"Press any character to proceed...";
    getchar();
    getchar();
}
