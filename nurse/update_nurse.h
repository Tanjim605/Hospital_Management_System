void update_nurse()
{
    system("CLS");
    read_nurse();
    int option;
    string idd;
    cout<<"Which info do you want to update?\n\n";
    cout<<"  1: Mobile Number?\n";
    cin>>option;
    system("CLS");
    int p=1;
    if(option!=1)
    {
        cout<<"Invalid Option, Please try Again..\n\n";
        update_nurse();
    }
    else
    { 
        here:
        system("CLS");
        int flag=1;
        cout<<"Please give me the patient's ID you want to change : ";
        sleep(1);
        if(p)
        {
            cin.ignore();
            p=0;
        }
        getline(cin,idd);
        ofstream on("nurse/nurse.txt");
       
        for(int i=0;i<number_of_nurse;i++)
        {
            if(nrs[i].id==idd)
            {
                string m;
                cout<<"Enter the Mobile Number : ";
                getline(cin,m);
                nrs[i].mobile_no=m;
                flag=0;
            }
        }
        if(flag)
        {
            cout << "ID not found! Press Enter to try again."<<endl;
            cin.get();
            goto here;
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
}