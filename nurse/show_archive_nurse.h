string str_an[4] ={"ID","NAME","MOBILE NO.","BLOOD GROUP"};

void row_line_an(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+5;i++)
        cout<<"-";
    cout<<endl;
}

void info_line_an(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void firstline_an(int mx)
{
    cout<<"\t\t  ";
    for(int i=0;i<4;i++)
    {
        cout<<"| "<<str_an[i];
        for(int j=str_an[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void show_archive_nurse()
{
    read_archive_nurse();               //read the txt file first
    cout<<"\n\n\t\t  Archive Nurse List : \n";
    cout<<"\t\t  --------------------\n";
    int mx_size = 0;
    int i = 0;
    while(i<number_of_an)
    {
        mx_size= max(mx_size,(int)archive_nrs[i].id.length());
        mx_size= max(mx_size,(int)archive_nrs[i].name.length());
        mx_size= max(mx_size,(int)archive_nrs[i].mobile_no.length());
        mx_size= max(mx_size,(int)archive_nrs[i].blood_group.length());
        i++;
    }
    mx_size = max(mx_size,11);
    mx_size+=2;
    row_line_an(mx_size*4);
    firstline_an(mx_size);
    row_line_an(mx_size*4);
    i = 0;
    while(i<number_of_an)
    {
        cout<<"\t\t  ";
        info_line_an(archive_nrs[i].id,mx_size);
        info_line_an(archive_nrs[i].name,mx_size);
        info_line_an(archive_nrs[i].mobile_no,mx_size);
        info_line_an(archive_nrs[i].blood_group,mx_size);
        cout<<"|"<<endl;
        row_line_an(mx_size*4);
        i++;
    }
    cout<<"\n\n\t\tTotal archive nurse : "<<number_of_an<<endl;
}
