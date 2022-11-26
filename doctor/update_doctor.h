void update_doctor()
{
    read_doctor();
    here:
    system("CLS");
    string idd,option;
    cout<<"\t\tWhich info do you want to update?\n\n";
    cout<<"\t\t1: Mobile Number?\n";
    getline(cin,option);
    system("CLS");
    if(option!="1")
    {
        cout<<"\n\n\t\t  Invalid Option, Please try Again..\n\n";
        sleep(1);
        goto here;
    }
    heree:
    system("CLS");
    cout << "\n\n\t\tPlease enter the Doctor's ID you want to change : ";
    getline(cin,idd);
    int f=0;
    for(int i=0;i<number_of_doctor;i++)
    {
        if(dr[i].id==idd)
        {
            string m;
            system("CLS");
            cout<<"\n\n\t\tEnter the Mobile Number : ";
            getline(cin,m);
            dr[i].mobile_no=m;
            cout<<endl<<"\t\tMobile Number has been updated successfully\n\n";
            f=1;
            break;
        }
    }
    if(f==0)
    {
        system("CLS");
        cout<<endl<<"\t\t:( Sorry couldn't find that ID, Please try Again..\n\n";
        sleep(1);
        goto heree;
    }
    ofstream on(doc_file);
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
    doc_ent=getch();
}
