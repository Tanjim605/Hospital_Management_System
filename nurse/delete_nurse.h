void delete_nurse()             //deleting a person. We take the ID of the person and rewrite the txt file without that specific ID person
{
    read_nurse();
    string del_id;
    cout<<"\nDELTETING NURSE DETAILS\n";
    cout<<"-----------------------\n";
    cout<<"ID          : ";
    string s;
    getline(cin,s);                     //for ignoring 
    getline(cin,del_id);                //get the ID of the person who we want to delete
    ofstream no("nurse/nurse.txt");           //opening file in write mode
    int i =0;
    while(i<number_of_nurse)            
    {
        if(del_id!=nrs[i].id)           //if not the delete person ID then write his detail
        {
            no<<nrs[i].id<<endl;
            no<<nrs[i].name<<endl;
            no<<nrs[i].mobile_no<<endl;
            no<<nrs[i].blood_group<<endl;
            no<<"\n";
        }
        i++;
    }
    number_of_nurse--;               //total nurse number reduce by one as one nurse is deleted
    no.close();                     //write mode file close

}