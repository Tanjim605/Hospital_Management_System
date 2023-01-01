void show_doc_profile(string doc_id)
{
    read_doctor();
            // taile eikhane doctor er profile show korbo
            cout<<"\n\n";
            cout<<"\t\t   Showing your profile "<<endl
                <<"\t\t  ----------------------"<<endl<<endl;
cout<<
"                         .'''''''''''.\n"
"                        :  ___   ___  :\n"
"                        :   o     o   :\n"
"                        :      l      :\t\t       |   Your ID      : "<<dr[log_doc].id<< endl <<
"                        :    _____    :\t\t       |   Name         : "<<dr[log_doc].name<< endl <<
"                         :           : \t\t       |   Degree       : "<<dr[log_doc].degree<< endl <<
"                           '''''''''   \t\t       |   College      : "<<dr[log_doc].college<< endl <<
"                            |    |     \t\t       |   Mobile No.   : "<<dr[log_doc].mobile_no<< endl <<
"                        .'''      '''. \t\t       |   Specialist   : "<<dr[log_doc].specialist<< endl <<
"                     ..::::::::::::::::..\n"
"                    :::::::::::::::::::::: \n"<<endl<<endl<<endl;
    cout<<"\n\t\tPress any key to proceed...";
    doc_ent=getch();
}
