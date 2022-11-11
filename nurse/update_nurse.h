void update_nurse()
{
    read_nurse();
    int option;
    string idd;
    cout<<"Which info do you want to update?\n\n";
    cout<<"1: Mobile Number?\n";
    cin>>option;
    system("CLS");
    if(option!=1)
    {
        cout<<"Invalid Option, Please try Again..\n\n";
        update_nurse();
    }
    cout<<"Please give me the patient's ID you want to change : ";
    cin>>idd;

    ofstream on("nurse/nurse.txt");
    for(int i=0;i<number_of_nurse;i++)
    {
        if(nrs[i].id==idd)
        {
            string m;
            cout<<"Enter the Mobile Number : ";
            cin>>m;
            nrs[i].mobile_no=m;
        }
    }
    int i=0;
    while(i<number_of_nurse)
    {
        on<<nrs[i].id<<endl;
        on<<nrs[i].name<<endl;
        on<<nrs[i].mobile_no<<endl;
        on<<nrs[i].blood_group<<endl;
        i++;
        on<<"\n";
    }
    on.close();

}