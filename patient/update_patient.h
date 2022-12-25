void update_patient()
{
    opp:
    system("CLS");
    read_patient();
    string option,idd;
    cout<<"\n\n\t\tWhich info do you want to update?\n\n";
    cout<<"\t\t  1: Mobile Number?\n";
    cout<<"\t\t  2: Age?\n";
    getline(cin,option);
    if(option!="1" && option != "2")
    {
        system("CLS");
        cout << "\n\n\t\tInvalid Option, Please try Again..\n\n";
        sleep(1);
        goto opp;
    }
    else
    {
        op:
        system("CLS");
        cout<<"\n\n\t\t  Please enter the patient's ID you want to change : ";
        getline(cin,idd);
        int f=0;
        for(int i=0;i<number_of_patient;i++)
        {
            if(pat[i].id==idd)
            {

                if(option=="1")
                {
                    string m;
                    cout<<"\n\n\t\t  Enter the Mobile Number : ";
                    getline(cin,m);
                    pat[i].mobile_no=m;
                    cout<<"\n\n\t\t  Mobile Number has been updated successfully\n\n";
                }
                else if(option=="2")
                {
                    string m;
                    cout<<"\t\tEnter the Age : ";
                    getline(cin,m);
                    pat[i].age=m;
                    cout<<"\n\n\t\tAge has been updated successfully\n\n";
                }
                f=1;
            }
        }
        if(f==0)
        {
            system("CLS");
            cout<<"\n\n\t\t:( Sorry couldn't find that ID, Please try Again..\n\n";
            sleep(1);
            goto op;
        }
        ofstream on(patient_file);
        int i=0,ff=0;
        while(i<number_of_patient)
        {
            on<<pat[i].id<<endl;
            on<<pat[i].name<<endl;
            on<<pat[i].age<<endl;
            on<<pat[i].gender<<endl;
            on<<pat[i].mobile_no<<endl;
            on<<pat[i].blood_group<<endl;
            on<<pat[i].reason<<endl;
            on<<pat[i].bill<<endl;
            on<<pat[i].doc<<endl;
            on<<pat[i].room<<endl;
            i++;
            on<<"\n";
            f=1;
            ff=1;
        }
        on.close();
        if(ff){
            cout<<"\t\tPress any key to proceed...";
            pat_ent=getch();
            ff=0;
        }
    }
}
