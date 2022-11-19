void remove_patient()
{
    read_patient();
    string del_id;
    int i=0,f=0;
    system("CLS");
    while(1)
    {
        cout<<"\n\n\t\tDELTETING PATIENT DETAILS\n";
        cout<<"\t\t-----------------------\n";
        cout<<"\t\tID          : ";
        getline(cin,del_id);
        i=0,f=0;
        while(i<number_of_patient)
        {
            if(del_id==pat[i].id)
            {
                f=1;
            }
            i++;
        }
        if(f==0)
        {
            system("CLS");
            cout<<"\n\n\t\tInvalid ID, Please try again\n\n";
            sleep(1);
            system("CLS");
        }
        else break;
    }
    f=0;
    i=0;
    ofstream inn(patient_file);
    while(i<number_of_patient)
    {
        if(del_id!=pat[i].id)
        {
            inn<<pat[i].id<<endl;
            inn<<pat[i].name<<endl;
            inn<<pat[i].age<<endl;
            inn<<pat[i].gender<<endl;
            inn<<pat[i].mobile_no<<endl;
            inn<<pat[i].blood_group<<endl;
            inn<<pat[i].reason<<endl;
            inn<<"\n";
        }
        else if(del_id==pat[i].id)
        {
            f=1;
        }
        i++;
    }
    system("CLS");
    cout<<"\n\n\t\tYour given information is removed. Thanks for your co-operation.\n\n";
    number_of_patient--;
    cout<<"\n\t\tPress any key to proceed...";
    cin.get();
    inn.close();

}
