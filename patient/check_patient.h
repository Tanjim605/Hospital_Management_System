void check_patient(string find_doc_id)
{
    shuru:
    system("CLS");
    string pat_check_id,temp_bill;
    vector<string> ids,idss;
    int j=1;

    cout<<"\n\n\t\t  Choose a patient: \n\n";
    for(int i=0;i<number_of_patient;i++)
    {
        if(pat[i].doc==find_doc_id)
        {
            ids.push_back(pat[i].id);
            cout<<"\t\t  ";
            cout<<j <<". "
                <<pat[i].id<<endl
                <<"\t\t     "<<pat[i].name<<endl<<endl;
            j++;
        }
        idss.push_back(pat[i].id);
    }
    cout<<"\t\t  ";
    getline(cin,pat_check_id);
    
    for(int i=0;i<pat_check_id.size();i++)
    {
        if(pat_check_id[i]<'0' or pat_check_id[i]>'9')
        {
            cout<<"\n\t\t  Invalid input! ";
            sleep(1);
            goto shuru;
        }
            
    }

    int pos=stoi(pat_check_id);
    if(pos<1 or pos>=j)
    {
        cout<<"\n\t\t  Invalid input! ";
        sleep(1);
        goto shuru;
    }
    pos--;
    pat_check_id=ids[pos];
    auto itt = find(idss.begin(),idss.end(),pat_check_id) - idss.begin();

    
    while(1)
    {
        system("CLS");
        cout<< "\n\n\t\t  Select test for your patient: "<<endl<<endl;
        for(int i=1;i<tests.size();i++)
        {
            cout<<"\t\t    "<< i << ". "<<tests[i]<<endl;
        }
        cout<<"\n\t\t  Enter 0 when you are done!\n\n";
        
        cout<<endl<<endl<<"\t\t  ";
        for(int i=0;i<temp_bill.size();i++)
            cout<< temp_bill[i] << "  ";
        
        char c,d;
        
        d=getch();
        cout<<d<<endl;
        
        if(d=='0')
            break;
        else if(d>='1' and d<='9')
        {
            temp_bill+=d;
        }
        else
        {
            cout<<"\n\t\t  Invalid input! Enter again! ";
            sleep(2);
            continue;
        }
        cout<<"\n\t\t  Please press ENTER to confirm or BACKSPACE to cancel";
        while(1)
        {
            c=getch();
            if(c==13)
                break;
            else if(c==8)
            {
                temp_bill.pop_back();
                break;
            }
        }

    }
    
    read_patient();

    pat[itt].bill+=temp_bill;

    ofstream inn(patient_file);
    int i=0;
    while(i<number_of_patient)
    {
        inn<<pat[i].id<<endl;
        inn<<pat[i].name<<endl;
        inn<<pat[i].age<<endl;
        inn<<pat[i].gender<<endl;
        inn<<pat[i].mobile_no<<endl;
        inn<<pat[i].blood_group<<endl;
        inn<<pat[i].reason<<endl;
        inn<<pat[i].bill<<endl;
        inn<<pat[i].doc<<endl;
        inn<<pat[i].room<<endl;
        inn<<"\n";

        i++;
    }
}