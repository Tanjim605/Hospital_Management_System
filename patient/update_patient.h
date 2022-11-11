void update_patient()
{
    opp:
    read_patient();
    int option;
    string idd;
    cout<<"Which info do you want to update?\n\n";
    cout<<"1: Mobile Number?\n";
    cout<<"2: Age?\n";
    cin>>option;
    system("CLS");
    if(option!=1 && option != 2)
    {
        cout<<endl<<"Invalid Option, Please try Again..\n\n";
        goto opp;
    }
    else
    {
        op:
        cout<<endl<<"Please give me the patient's ID you want to change : ";
        cin>>idd;
        int f=0;

        for(int i=0;i<number_of_patient;i++)
        {
            if(pat[i].id==idd)
            {

                if(option==1)
                {
                    string m;
                    cout<<"Enter the Mobile Number : ";
                    cin>>m;
                    pat[i].mobile_no=m;
                    cout<<endl<<"Mobile Number has been updated successfully\n\n";
                }
                else if(option==2)
                {
                    string m;
                    cout<<"Enter the Age : ";
                    cin>>m;
                    pat[i].age=m;
                    cout<<endl<<"Age has been updated successfully\n\n";
                }
                f=1;
            }
        }
        if(f==0)
        {
            system("CLS");
            cout<<endl<<":( Sorry couldn't find that ID, Please try Again..\n\n";
            goto op;
        }
        ofstream on("patient/patient.txt");
        int i=0,ff=0;
        while(i<number_of_patient)
        {
            on<<pat[i].id<<endl;
            on<<pat[i].name<<endl;
            on<<pat[i].age<<endl;
            on<<pat[i].gender<<endl;
            on<<pat[i].mobile_no<<endl;
            on<<pat[i].blood_group<<endl;
            i++;
            on<<"\n";
            f=1;
            ff=1;
        }
        on.close();
        if(ff){
            cout<<"Press any key to proceed...";
            cin.get();
            ff=0;
        }
    }
}
