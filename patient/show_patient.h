string st[8] ={"ID","NAME","AGE","GENDER","MOBILE NO.","BLOOD GROUP","PATIENT PROBLEM","ROOM NO."};

void rowline(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+9;i++)
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
    cout<<"\t\t  ";
    for(int i=0;i<8;i++)
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
    system("CLS");
    read_patient();               //read the txt file first
    cout<<"\n\n\t\t  Patient List : \n";
    cout<<"\t\t  ------------\n";
    int length[8]={0};
    for(int j=0;j<8;j++)
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
            else if(j==6)
                length[j] = max(length[j],(int)pat[i].reason.length());
            else 
                length[j] = max(length[j],(int)pat[i].room.length());
            i++;
        }
    }
    int  len_row = 0;
    for(int i=0;i<8;i++)
        len_row+=max(length[i],(int)st[i].length());
    sort(length,length+8);
    int mx_size = length[7];
    mx_size+=2;
    rowline(mx_size*8);
    first_line(mx_size);
    rowline(mx_size*8);
    int i = 0;
    while(i<number_of_patient)
    {
        cout<<"\t\t  ";
        infoline(pat[i].id,mx_size);
        infoline(pat[i].name,mx_size);
        infoline(pat[i].age,mx_size);
        infoline(pat[i].gender,mx_size);
        infoline(pat[i].mobile_no,mx_size);
        infoline(pat[i].blood_group,mx_size);
        infoline(pat[i].reason,mx_size);
        infoline(pat[i].room,mx_size);
        cout<<"|"<<endl;
        rowline(mx_size*8);
        i++;
    }
    cout<<"\n\n\t\tTotal patient in this hospital : "<<number_of_patient<<endl;
    cout<<"\n\t\tPress any key to proceed...";
    pat_ent=getch();

    // string enter;
    // getchar();//1st getchar is for the chosen option 2nd is for enter
}
