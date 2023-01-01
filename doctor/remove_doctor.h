//deleting a person. We take the ID of the person and rewrite the txt file without that specific ID person
void delete_doctor()
{
    here:
    system("CLS");
    read_doctor();
    string del_id,ch;

    read_archive_doctor();
    
    cout<<"\n\t\tDELTETING DOCTOR DETAILS\n";
    cout<<"\t\t------------------------\n";
    cout<<"\t\t  ID          : ";
    string ss;

    getline(cin,del_id);                    //get the ID of the person who we want to delete
    ofstream doo(doc_file);             //opening file in write mode
    
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
            doo<<dr[i].specialist<<endl;
            doo<<dr[i].pass<<endl;
            doo<<"\n";
        }
        else
        {
            found =1;
            archive_dr[number_of_ad].id=dr[i].id;
            archive_dr[number_of_ad].name=dr[i].name;
            archive_dr[number_of_ad].degree=dr[i].degree;
            archive_dr[number_of_ad].college=dr[i].college;
            archive_dr[number_of_ad].mobile_no=dr[i].mobile_no;
            archive_dr[number_of_ad].specialist=dr[i].mobile_no;
            number_of_ad++;
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

    ofstream adoo(archive_doctor_file);     //writing in archive file
    i=0;
    while(i<number_of_ad)
    {
        adoo<<archive_dr[i].id<<endl;
        adoo<<archive_dr[i].name<<endl;
        adoo<<archive_dr[i].degree<<endl;
        adoo<<archive_dr[i].college<<endl;
        adoo<<archive_dr[i].mobile_no<<endl;
        adoo<<archive_dr[i].specialist<<endl;
        adoo<<"\n";
        i++;
    }

    number_of_doctor--;         //total doctor number reduce by one as one doctor is deleted
    doo.close();                //write mode file close
    cout<<"\n\n\t\tDeleted successfully...\n\n";
    cout<<"\t\tPress any key to proceed...";
    doc_ent=getch();      
}
