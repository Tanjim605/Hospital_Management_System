string str[4] ={"ID","NAME","MOBILE NO.","BLOOD GROUP"};

void row_line(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+5;i++)
        cout<<"-";
    cout<<endl;
}

void info_line(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void firstline(int mx)
{
    cout<<"\t\t  ";
    for(int i=0;i<4;i++)
    {
        cout<<"| "<<str[i];
        for(int j=str[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void nurse_list()               //presenting the nurse list in console
{
    read_nurse();               //read the txt file first
    cout<<"\n\n\t\t  Nurse List : \n";
    cout<<"\t\t  ------------\n";
    int mx_size = 0;
    int i = 0;
    while(i<number_of_nurse)
    {
        mx_size= max(mx_size,(int)nrs[i].id.length());
        mx_size= max(mx_size,(int)nrs[i].name.length());
        mx_size= max(mx_size,(int)nrs[i].mobile_no.length());
        mx_size= max(mx_size,(int)nrs[i].blood_group.length());
        i++;
    }
    mx_size = max(mx_size,11);
    mx_size+=2;
    row_line(mx_size*4);
    firstline(mx_size);
    row_line(mx_size*4);
    i = 0;
    while(i<number_of_nurse)
    {
        cout<<"\t\t  ";
        info_line(nrs[i].id,mx_size);
        info_line(nrs[i].name,mx_size);
        info_line(nrs[i].mobile_no,mx_size);
        info_line(nrs[i].blood_group,mx_size);
        cout<<"|"<<endl;
        row_line(mx_size*4);
        i++;
    }
    cout<<"\n\n\t\tTotal nurse in this hospital : "<<number_of_nurse<<endl;
}
