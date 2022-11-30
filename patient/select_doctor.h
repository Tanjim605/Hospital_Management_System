bool valid_doc_id(string a)
{
    int op = stoi(a);
    return (number_of_doctor<op && op>-1);
}

void select_doctor()
{
    show_doctor();
    cout<<"\n\t\t  Select Doctor (ex. 1/2/3/...) : ";
    string doc_id;
    cin>>doc_id;
    while(!valid_doc_id(doc_id))
    {
        cout<<"Invalid please try again...!\n";
        cout<<"\t\t  Select Doctor : ";
        cin>>doc_id;
    }
    



}
