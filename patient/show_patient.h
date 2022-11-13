string st[7] ={"ID","NAME","MOBILE NO.","AGE","GENDER","BLOOD GROUP","PATIENT PROBLEM"};

void rowline(int a)
{
    for(int i=0;i<a+6;i++)
        cout<<"-";
    cout<<endl;
}

void infoline(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void first_line(int mx)
{
    for(int i=0;i<7;i++)
    {
        cout<<"| "<<st[i];
        for(int j=st[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void show_patient()               //presenting the nurse list in console
{
    read_patient();               //read the txt file first
    cout<<"Patient List : \n";
    cout<<"------------\n";
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
        len_row+=max(length[i],(int)st[i].length());
    sort(length,length+7);
    int mx_size = length[6];
    mx_size++;
    rowline(mx_size*7);
    first_line(mx_size);
    rowline(mx_size*7);
    int i = 0;
    while(i<number_of_patient)
    {
        infoline(pat[i].id,mx_size);
        infoline(pat[i].name,mx_size);
        infoline(pat[i].age,mx_size);
        infoline(pat[i].gender,mx_size);
        infoline(pat[i].mobile_no,mx_size);
        infoline(pat[i].blood_group,mx_size);
        infoline(pat[i].reason,mx_size);
        cout<<"|"<<endl;
        rowline(mx_size*7);
        i++;
    }
    cout<<"\n\t\tPress any enter to proceed...";
    string enter;
    getchar();
    getchar();//1st getchar is for the chosen option 2nd is for enter
}
