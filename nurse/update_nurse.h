void update_nurse()
{
    up:
    system("CLS");
    read_nurse();
    string idd,option;
    cout<<"\n\n\t\tWhich info do you want to update?\n\n";
    cout<<"\t\t  1: Mobile Number?\n";
    getline(cin,option);
    if(option!="1")
    {
        system("CLS");
        cout<<"\n\n\t\tInvalid Option, Please try Again..\n\n";
        sleep(1);
        goto up;
    }
    else
    { 
        here:
        system("CLS");
        int flag=1;
        cout<<"\n\n\t\t  Please enter the nurse's ID you want to change : ";
        sleep(1);
        getline(cin,idd);
        ofstream on(nurse_file);
        for(int i=0;i<number_of_nurse;i++)
        {
            if(nrs[i].id==idd)
            {
                string m;
                cout<<"\n\t\t  Enter the Mobile Number : ";
                getline(cin,m);
                nrs[i].mobile_no=m;
                cout << "\n\t\t  Mobile Number Updated successfully!";
                sleep(1);
                flag=0;
            }
        }
        if(flag)
        {
            cout << "\n\t\tID not found! Press any key to try again."<<endl;
            nur_ent = getch();
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
