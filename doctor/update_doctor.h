void update_doctor()
{
    read_doctor();
    int option;
    string idd;
    cout<<"\t\tWhich info do you want to update?\n\n";
    cout<<"\t\t1: Mobile Number?\n";
    cin>>option;
    system("CLS");
    if(option!=1)
    {
        cout<<endl<<"\t\tInvalid Option, Please try Again..\n\n";
        goto here;
        // update_doctor();
    }
    here:
    cout<<endl<<"\t\tPlease give me the Doctor's ID you want to change : ";
    cin>>idd;
    int f=0;
    for(int i=0;i<number_of_doctor;i++)
    {
        if(dr[i].id==idd)
        {
            if(option==1)
            {
                string m;
                cout<<"\t\tEnter the Mobile Number : ";
                cin>>m;
                dr[i].mobile_no=m;
                cout<<endl<<"\t\tMobile Number has been updated successfully\n\n";
            }
            f=1;
        }
    }
    if(f==0)
    {
        system("CLS");
        cout<<endl<<"\t\t:( Sorry couldn't find that ID, Please try Again..\n\n";
        goto here;
        // update_doctor();
    }
    ofstream on("doctor/doctor.txt");
    int i=0;
    while(i<number_of_doctor)
    {
        on<<dr[i].id<<endl;
        on<<dr[i].name<<endl;
        on<<dr[i].degree<<endl;
        on<<dr[i].college<<endl;
        on<<dr[i].mobile_no<<endl;
        i++;
        on<<"\n";
    }

    on.close();
    cout<<"\t\tPress any key to proceed...";
    cin.get();
}