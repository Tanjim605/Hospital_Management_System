string st_ap[8] ={"ID","NAME","AGE","GENDER","MOBILE NO.","BLOOD GROUP","PATIENT PROBLEM","BILL (BDT)"};

void rowline_ap(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+9;i++)
        cout<<"-";
    cout<<endl;
}

void infoline_ap(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void first_line_ap(int mx)
{
    cout<<"\t\t  ";
    for(int i=0;i<8;i++)
    {
        cout<<"| "<<st_ap[i];
        for(int j=st_ap[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void show_archive_patient()
{
    system("CLS");
    read_archive_patient();
    cout<<"\n\n\t\t  Archive Patient List : \n";
    cout<<"\t\t  --------------------\n";
    int length[8]={0};
    for(int j=0;j<8;j++)
    {
        int i = 0;
        while(i<number_of_ap)
        {
            if(j==0)
                length[j] = max(length[j],(int)archive_pat[i].id.length());
            else if(j==1)
                length[j] = max(length[j],(int)archive_pat[i].name.length());
            else if(j==2)
                length[j] = max(length[j],(int)archive_pat[i].age.length());
            else if(j==3)
                length[j] = max(length[j],(int)archive_pat[i].gender.length());
            else if(j==4)
                length[j] = max(length[j],(int)archive_pat[i].mobile_no.length());
            else if(j==5)
                length[j] = max(length[j],(int)archive_pat[i].blood_group.length());
            else if(j==6)
                length[j] = max(length[j],(int)archive_pat[i].reason.length());
            else 
                length[j] = max(length[j],(int)archive_pat[i].bill.length());
            i++;
        }
    }

    int  len_row = 0;
    for(int i=0;i<8;i++)
        len_row+=max(length[i],(int)st_ap[i].length());
    sort(length,length+8);
    int mx_size = length[7];
    mx_size+=4;
    rowline_ap(mx_size*8);
    first_line_ap(mx_size);
    rowline_ap(mx_size*8);
    int i = 0;
    while(i<number_of_ap)
    {
        cout<<"\t\t  ";
        infoline_ap(archive_pat[i].id,mx_size);
        infoline_ap(archive_pat[i].name,mx_size);
        infoline_ap(archive_pat[i].age,mx_size);
        infoline_ap(archive_pat[i].gender,mx_size);
        infoline_ap(archive_pat[i].mobile_no,mx_size);
        infoline_ap(archive_pat[i].blood_group,mx_size);
        infoline_ap(archive_pat[i].reason,mx_size);
        infoline_ap(archive_pat[i].bill,mx_size);
        cout<<"|"<<endl;
        rowline_ap(mx_size*8);
        i++;
    }
    cout<<"\n\n\t\tTotal archive patient : "<<number_of_ap<<endl;
    cout<<"\n\t\tPress any key to proceed...";
    pat_ent=getch();
}
