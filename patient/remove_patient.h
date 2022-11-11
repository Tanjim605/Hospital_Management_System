void remove_patient()
{
    read_patient();
    string o,del_id;
    getline(cin,o);
    int i=0,f=0;
    system("CLS");
    while(1)
    {
        cout<<"\nDELTETING PATIENT DETAILS\n";
        cout<<"-----------------------\n";
        cout<<"ID          : ";
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
            cout<<"\n\tInvalid ID, Please try again\n\n";
            sleep(2);
            system("CLS");
        }
        else break;
    }
    f=0;
    i=0;
    ofstream inn("patient/patient.txt");
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
            inn<<"\n";
        }
        else if(del_id==pat[i].id)
        {
            f=1;
        }
        i++;
    }
    system("CLS");
    cout<<"\n\tYour given information's are removed. Thanks for your co-operation.\n\n";
    number_of_patient--;
    cout<<"\n\tPress any key to proceed...";
    cin.get();
    inn.close();

}

