void show_doc_profile(string doc_id)
{
    read_doctor();

    for(int i=0;i<number_of_doctor;i++)
    {
        if(dr[i].id==doc_id)
        {
            // taile eikhane doctor er profile show korbo
            cout<<"\n\n";
            cout<<"\t\t   Showing your profile "<<endl
                <<"\t\t  ----------------------"<<endl<<endl;
cout<<
"                        .'''''''''''.\n"
"                       :  ___   ___  :\n"           
"                       :   o     o   :\n"         
"                       :      l      :\n"       
"                        :   _____   :\n"         
"                         '''''''''''\n"                  
"                            |    |\n"
"                        .'''      '''.\n"           
"                     ..::::::::::::::::..\n"      
"                    :::::::::::::::::::::: \n"<<endl<<endl<<endl;
            cout<<"\t\t  Your ID      : "<<dr[i].id<<endl
                <<"\t\t  Name         : "<<dr[i].name<<endl
                <<"\t\t  Degree       : "<<dr[i].degree<<endl
                <<"\t\t  College      : "<<dr[i].college<<endl
                <<"\t\t  Mobile No.   : "<<dr[i].mobile_no<<endl;
        }
    }
    cout<<"\n\t\tPress any key to proceed...";
    doc_ent=getch();
}
