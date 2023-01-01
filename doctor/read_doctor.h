void read_doctor()                  //reading from doctor.txt file. *** Mendatory for saving the info
{
    ifstream di(doc_file);       //open file in read mode
    int i=0;
    string ch;
    while(getline(di,dr[i].id))
    {
        getline(di,dr[i].name);
        getline(di,dr[i].degree);
        getline(di,dr[i].college);
        getline(di,dr[i].mobile_no);
        getline(di,dr[i].specialist);
        getline(di,dr[i].pass);
        i++;
        getline(di,ch);
    }
    number_of_doctor=i;                 //total number of doctor is equal to i
}
