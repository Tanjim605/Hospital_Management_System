void show_doctor()           //presenting the doctor list in console
{
    read_doctor();           //read the txt file first
    int i =0;
    cout<<"\t\tDoctor List : \n";
    cout<<"\t\t-------------\n";
    while(i<number_of_doctor)
    {
      //please check this line   ↓   this colon should be in line **********
        cout<<"\t\t  ID          : "<<dr[i].id<<endl;
        cout<<"\t\t  Name        : "<<dr[i].name<<endl;
        cout<<"\t\t  Degree      : "<<dr[i].degree<<endl;
        cout<<"\t\t  College     : "<<dr[i].college<<endl;
        cout<<"\t\t  Mobile NO.  : "<<dr[i].mobile_no<<endl;
        i++;
        cout<<"\n"<<endl;
    }
    cout<<"\t\tPress any key to proceed...";
    getchar();
    getchar();
}
