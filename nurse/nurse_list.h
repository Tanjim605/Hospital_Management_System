string str[4] ={"ID","NAME","MOBILE NO.","BLOOD GROUP"};
void row_line(int a)
{
    for(int i=0;i<a+5;i++)
        cout<<"-";
    cout<<endl;
}
void info_line(string a,int len)
{
    cout<<"|"<<a;
    for(int j=a.length();j<len;j++)
    {
        cout<<" ";
    }
}
void firstline(int mx)
{
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
    cout<<"Nurse List : \n";
    cout<<"------------\n";
    int length[4]={0};
    for(int j=0;j<4;j++)
    {
        int i = 0;
        while(i<number_of_nurse)
        {
            if(j==0)
                length[j] = max(length[j],(int)nrs[i].id.length());
            else if(j==1)
                length[j] = max(length[j],(int)nrs[i].name.length());
            else if(j==2)
                length[j] = max(length[j],(int)nrs[i].mobile_no.length());
            else if(j==3)
                length[j] = max(length[j],(int)nrs[i].blood_group.length());
            i++;
        }
    }
    int  len_row = 0;
    for(int i=0;i<4;i++)
        len_row+=max(length[i],(int)str[i].length());
    sort(length,length+4);    
    int mx_size = length[3];
    row_line(mx_size*4);
    firstline(mx_size);
    row_line(mx_size*4);
    int i = 0;
    while(i<number_of_nurse)
    {
        info_line(nrs[i].id,mx_size);
        info_line(nrs[i].name,mx_size);
        info_line(nrs[i].mobile_no,mx_size);
        info_line(nrs[i].blood_group,mx_size);
        cout<<"|"<<endl;
        row_line(mx_size*4);
        i++;
    }
    while(i<number_of_nurse)
    {
        cout<<"\tID          : "<<nrs[i].id<<endl;
        cout<<"\tName        : "<<nrs[i].name<<endl;
        cout<<"\tMobile NO.  : "<<nrs[i].mobile_no<<endl;
        cout<<"\tBlood Group : "<<nrs[i].blood_group<<endl;
        i++;
        cout<<"\n"<<endl;
    }
}
