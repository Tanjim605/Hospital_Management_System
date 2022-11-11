void show_patient()
{
    read_patient();
    int i = 0;
    cout<<"Patient List : \n";
    cout<<"-------------\n";
    while(i<number_of_patient)
    {
        cout<<"ID          : "<<pat[i].id<<endl;
        cout<<"Name        : "<<pat[i].name<<endl;
        cout<<"Age         : "<<pat[i].age<<endl;
        cout<<"Gender      : "<<pat[i].gender<<endl;
        cout<<"Mobile NO.  : "<<pat[i].mobile_no<<endl;
        cout<<"Blood Group : "<<pat[i].blood_group<<endl;
        i++;
        cout<<"\n"<<endl;
    }
    cout<<"Press any character to proceed...";
    getchar();
    getchar();
}
