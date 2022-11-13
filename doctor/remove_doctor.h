int sp=0;
void delete_doctor()         //deleting a person. We take the ID of the person and rewrite the txt file without that specific ID person
{
    here:
    system("CLS");
    read_doctor();
    string del_id;
    cout<<"\n\t\tDELTETING DOCTOR DETAILS\n";
    cout<<"\t\t------------------------\n";
    cout<<"\t\t  ID          : ";
    string ss;
    if(!sp)
    {
        getline(cin,ss);
        sp=1;
    }
    getline(cin,del_id);                    //get the ID of the person who we want to delete
    ofstream doo("doctor/doctor.txt");             //opening file in write mode
    int i =0;
    bool found = 0;
    while(i<number_of_doctor)
    {
        if(del_id!=dr[i].id)                //if not the delete person ID then write his details
        {
            doo<<dr[i].id<<endl;
            doo<<dr[i].name<<endl;
            doo<<dr[i].degree<<endl;
            doo<<dr[i].college<<endl;
            doo<<dr[i].mobile_no<<endl;
            doo<<"\n";
        }
        else
        {
            found =1;
        }
        i++;                    //***** KEEP THIS INCREAMENT OUTSIDE OF "if condition"   *****
    }
    if(!found)
    {
        cout<<"\t\tID not found...\n"
        <<"\t\tPlease try again...\n";
        sleep(1);
        goto here;
    }
    number_of_doctor--;         //total doctor number reduce by one as one doctor is deleted
    doo.close();
    cout<<"\t\tDeleted successfully...\n\n";
    cout<<"\t\tPress any key to proceed...";
    cin.get();             //write mode file close
}
