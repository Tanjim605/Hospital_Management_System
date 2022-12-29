string tr_ad[5] ={"ID","NAME","DEGREE","COLLEGE","MOBILE NO."};

void row_lin_ad(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+6;i++)
        cout<<"-";
    cout<<endl;
}

void info_lin_ad(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void firstlin_ad(int mx)
{
    cout<<"\t\t  ";
    for(int i=0;i<5;i++)
    {
        cout<<"| "<<tr_ad[i];
        for(int j=tr_ad[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void show_archive_doctor()
{
    read_archive_doctor();               //read the txt file first
    cout<<"\n\n\t\t  Archive Doctor List : \n";
    cout<<"\t\t  ---------------------\n";
    int length[5]={0};
    for(int j=0;j<5;j++)
    {
        int i = 0;
        while(i<number_of_ad)
        {
            if(j==0)
                length[j] = max(length[j],(int)archive_dr[i].id.length());
            else if(j==1)
                length[j] = max(length[j],(int)archive_dr[i].name.length());
            else if(j==2)
                length[j] = max(length[j],(int)archive_dr[i].degree.length());
            else if(j==3)
                length[j] = max(length[j],(int)archive_dr[i].college.length());
            else
                length[j] = max(length[j],(int)archive_dr[i].mobile_no.length());

            i++;
        }
    }
    int  len_row = 0;
    for(int i=0;i<5;i++)
        len_row+=max(length[i],(int)tr[i].length());
    sort(length,length+5);
    int mx_size = length[4];
    mx_size+=2;
    row_lin_ad(mx_size*5);
    firstlin_ad(mx_size);
    row_lin_ad(mx_size*5);
    int i = 0;
    while(i<number_of_ad)
    {
        cout<<"\t\t  ";
        info_lin_ad(archive_dr[i].id,mx_size);
        info_lin_ad(archive_dr[i].name,mx_size);
        info_lin_ad(archive_dr[i].degree,mx_size);
        info_lin_ad(archive_dr[i].college,mx_size);
        info_lin_ad(archive_dr[i].mobile_no,mx_size);
        cout<<"|"<<endl;
        row_lin_ad(mx_size*5);
        i++;
    }
    cout<<"\n\n\t\tTotal archive doctor : "<<number_of_ad<<endl;
}
