void update_doctor()
{
    here:
    read_doctor();
    system("CLS");
    int f=1;
    string idd,option;
    cout<<"\n\n\t\tWhich info do you want to update?\n\n";
    cout<<"\t\t  1: Mobile Number?\n";
    cout<<"\t\t  2: Password?\n";
    cout<<"\n\t\tPress 0 to Escape\n";
    getline(cin,option);
    system("CLS");
    if(option=="1")
    {
        system("CLS");
        cout<<"\n\n\t\tEnter the new Mobile Number : ";
        getline(cin,idd);
        dr[log_doc].mobile_no=idd;
        cout<<"\n\n\t\tMobile Number has been updated successfully\n\n";
    }
    else if(option=="2")
    {
        system("CLS");
        string idc;
        cout<<"\n\n\t\tEnter the new Password : ";
        getline(cin,idd);
        for(int i=0; ; i++)
        {
            system("CLS");
            cout<<"\n\n\t\tEnter the new Password : " << idd;
            cout << "\n\t\tConfirm Your Password  : ";
            getline(cin,idc);
            if(idd!=idc)
            {
                cout << "\n\n\n\t\tPassword didn't matched! Press Enter to try again";
                doc_ent = getch();
            }
            else
                break;
        }
        dr[log_doc].pass=idd;
        cout<<"\n\n\t\tPassword has been updated successfully\n\n";
    }
    else if(option=="0")
    {
        system("CLS");
        f=0;
    }
    else
    {
        cout<<"\n\n\t\t  Invalid Option, Please try Again..\n\n";
        sleep(1);
        goto here;
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
        on<<dr[i].specialist<<endl;
        on<<dr[i].pass<<endl;
        i++;
        on<<"\n";
    }
    on.close();
    if(f)
    {
        cout<<"\t\tPress any key to proceed...";
        doc_ent=getch();
        goto here;
    }
}
