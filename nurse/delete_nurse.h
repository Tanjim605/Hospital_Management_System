int f=1;
void delete_nurse()             //deleting a person. We take the ID of the person and rewrite the txt file without that specific ID person
{
    up:
    read_nurse();
    system("CLS");
    string del_id;
    cout<<"\n\n\t\tDELTETING NURSE DETAILS\n";
    cout<<"\t\t-----------------------\n";
    cout<<"\t\t  ID          : ";
    getline(cin,del_id);                //get the ID of the person who we want to delete
    ofstream no(nurse_file);           //opening file in write mode
    int i =0;
    bool found=0;
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
        else
        {
            found = 1;
        }
        i++;
    }
    if(!found)
    {
        cout<<"\t\tID not found...."<<endl
            <<"\t\tPlease try again.."<<endl;
        sleep(1);
        no.close();  
        goto up;   
    }
    else
    {
        cout<<"\n\t\tDeleted Successfully!";
        sleep(1);
    }
    number_of_nurse--;               //total nurse number reduce by one as one nurse is deleted
    no.close();                     //write mode file close

}
