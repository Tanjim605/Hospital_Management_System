string st_pud[7] ={"ID","NAME","AGE","GENDER","MOBILE NO.","BLOOD GROUP","PATIENT PROBLEM"};

void rowline_pud(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+8;i++)
        cout<<"-";
    cout<<endl;
}

void infoline_pud(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void first_line_pud(int mx)
{
    cout<<"\t\t  ";
    for(int i=0;i<7;i++)
    {
        cout<<"| "<<st_pud[i];
        for(int j=st_pud[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void pat_under_doc(string find_doc_id)
{
    read_patient();
    cout<<"\n\n\t\t  showing patients admitted under you:\n";
    cout<<"\t\t  ------------------------------------\n\n";


    int length[7]={0};
    for(int j=0;j<7;j++)
    {
        int i = 0;
        while(i<number_of_patient)
        {
            if(j==0)
                length[j] = max(length[j],(int)pat[i].id.length());
            else if(j==1)
                length[j] = max(length[j],(int)pat[i].name.length());
            else if(j==2)
                length[j] = max(length[j],(int)pat[i].age.length());
            else if(j==3)
                length[j] = max(length[j],(int)pat[i].gender.length());
            else if(j==4)
                length[j] = max(length[j],(int)pat[i].mobile_no.length());
            else if(j==5)
                length[j] = max(length[j],(int)pat[i].blood_group.length());
            else
                length[j] = max(length[j],(int)pat[i].reason.length());
            i++;
        }
    }
    int  len_row = 0;
    for(int i=0;i<7;i++)
        len_row+=max(length[i],(int)st_pud[i].length());
    sort(length,length+7);
    int mx_size = length[6];
    mx_size+=2;
    rowline_pud(mx_size*7);
    first_line_pud(mx_size);
    rowline_pud(mx_size*7);


    int total_pat_under_me=0;
    for(int i=0;i<number_of_patient;i++)
    {
        if(pat[i].doc==find_doc_id)
        {
            total_pat_under_me++;
            cout<<"\t\t  ";
            infoline_pud(pat[i].id,mx_size);
            infoline_pud(pat[i].name,mx_size);
            infoline_pud(pat[i].age,mx_size);
            infoline_pud(pat[i].gender,mx_size);
            infoline_pud(pat[i].mobile_no,mx_size);
            infoline_pud(pat[i].blood_group,mx_size);
            infoline_pud(pat[i].reason,mx_size);
            cout<<"|"<<endl;
            rowline_pud(mx_size*7);
        }
    }
    cout<<"\n\t\t  Total patient under you : "<<total_pat_under_me<<endl;
    cout<<"\n\n\t\tPress any key to proceed...";
    doc_ent=getch();
}
