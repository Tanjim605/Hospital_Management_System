int f=1;
 //deleting a person. We take the ID of the person and rewrite the txt file without that specific ID person
void delete_nurse()            
{
    up:
    read_nurse();
    system("CLS");
    string del_id,ch;

    read_archive_nurse();

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
            archive_nrs[number_of_an].id = nrs[i].id;
            archive_nrs[number_of_an].name = nrs[i].name;
            archive_nrs[number_of_an].mobile_no = nrs[i].mobile_no;
            archive_nrs[number_of_an].blood_group = nrs[i].blood_group;
            number_of_an++;
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
    
    ofstream anoo(archive_nurse_file);
    i=0;
    while(i<number_of_an)
    {
        anoo<<archive_nrs[i].id <<endl;
        anoo<<archive_nrs[i].name <<endl;
        anoo<<archive_nrs[i].mobile_no <<endl;
        anoo<<archive_nrs[i].blood_group <<endl;
        anoo<<"\n";
        i++;
    }
    
    cout<<"\n\t\tDeleted Successfully!";
    sleep(1);
    
    number_of_nurse--;               //total nurse number reduce by one as one nurse is deleted
    no.close();                     //write mode file close

}
