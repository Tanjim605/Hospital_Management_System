void nurse_list()               //presenting the nurse list in console
{
    read_nurse();               //read the txt file first
    int i =0;
    cout<<"Nurse List : \n";
    cout<<"------------\n";
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