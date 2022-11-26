void read_nurse()            //reading from nurse.txt file. *** Mendatory for saving the info
{
    ifstream ni(nurse_file);  //open file in read mode
    int i=0;
    string ch;
    while(getline(ni,nrs[i].id))
    {
        getline(ni,nrs[i].name);
        getline(ni,nrs[i].mobile_no);
        getline(ni,nrs[i].blood_group);
        i++;
        getline(ni,ch);
    }
    number_of_nurse=i;          //total number of nurse is equal to i
}
