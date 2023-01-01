string tr[6] ={"ID","NAME","DEGREE","COLLEGE","MOBILE NO.","SPECIALIST"};

void row_lin(int a)
{
    cout<<"\t\t  ";
    for(int i=0;i<a+7;i++)
        cout<<"-";
    cout<<endl;
}

void info_lin(string a,int len)
{
    cout<<"| "<<a;
    for(int j=a.length();j<len-1;j++)
    {
        cout<<" ";
    }
}

void firstlin(int mx)
{
    cout<<"\t\t  ";
    for(int i=0;i<6;i++)
    {
        cout<<"| "<<tr[i];
        for(int j=tr[i].length();j<mx-1;j++)
        {
            cout<<" ";
        }
    }
    cout<<"|"<<endl;
}

void show_doctor()               //presenting the nurse list in console
{
    read_doctor();               //read the txt file first
    cout<<"\n\n\t\t  Doctor List : \n";
    cout<<"\t\t  ------------\n";
    int length[6]={0};
    for(int j=0;j<6;j++)
    {
        int i = 0;
        while(i<number_of_doctor)
        {
            if(j==0)
                length[j] = max(length[j],(int)dr[i].id.length());
            else if(j==1)
                length[j] = max(length[j],(int)dr[i].name.length());
            else if(j==2)
                length[j] = max(length[j],(int)dr[i].degree.length());
            else if(j==3)
                length[j] = max(length[j],(int)dr[i].college.length());
            else if(j==4)
                length[j] = max(length[j],(int)dr[i].mobile_no.length());
            else
                length[j] = max(length[j],(int)dr[i].specialist.length());

            i++;
        }
    }
    int  len_row = 0;
    for(int i=0;i<6;i++)
        len_row+=max(length[i],(int)tr[i].length());
    sort(length,length+6);
    int mx_size = length[5];
    mx_size+=2;
    row_lin(mx_size*6);
    firstlin(mx_size);
    row_lin(mx_size*6);
    int i = 0;
    while(i<number_of_doctor)
    {
        cout<<"\t\t  ";
        info_lin(dr[i].id,mx_size);
        info_lin(dr[i].name,mx_size);
        info_lin(dr[i].degree,mx_size);
        info_lin(dr[i].college,mx_size);
        info_lin(dr[i].mobile_no,mx_size);
        info_lin(dr[i].specialist,mx_size);
        cout<<"|"<<endl;
        row_lin(mx_size*6);
        i++;
    }
    // string enter;
    // getchar();//1st getchar is for the chosen option 2nd is for enter
}
