string doctor_id_generator()
{
    ifstream ld(last_doc);
    int last_doctor;
    ld >> last_doctor;
    string str;
    int new_id = 1000 + last_doctor + 1;
    ld.close();
    last_doctor++;
    ofstream lsd(last_doc);
    lsd << last_doctor;
    lsd.close();
    str += 'D';
    str += to_string(new_id);

    return str;
}

void add_doctor() // adding new doctor.
{
    read_doctor();     // reading previous list for rewriting
    doctor new_doctor; // variable for new doctor
    cout << "\n\n\t\tADDING NEW DOCTOR DETAILS\n";
    cout << "\t\t------------------------\n";
    //  this line please   ↓         //taking all of the details below
    cout << "\t\t  ID             : ";
    new_doctor.id = doctor_id_generator();
    cout << new_doctor.id << endl;
    // getline(cin,new_doctor.id);
    cout << "\t\t  Doctor Name    : ";
    getline(cin, new_doctor.name);
    cout << "\t\t  Doctor Degree  : ";
    getline(cin, new_doctor.degree);
    cout << "\t\t  Doctor College : ";
    getline(cin, new_doctor.college);
    cout << "\t\t  Mobile No.     : ";
    getline(cin, new_doctor.mobile_no);
    cout << "\t\t  Specialist     : ";
    getline(cin, new_doctor.specialist);

    ofstream doo(doc_file); // opening file in write mode to rewrite every doctor
    int i = 0;
    dr[number_of_doctor].id = new_doctor.id; // setting new_doctor data in array varible
    dr[number_of_doctor].name = new_doctor.name;
    dr[number_of_doctor].degree = new_doctor.degree;
    dr[number_of_doctor].college = new_doctor.college;
    dr[number_of_doctor].mobile_no = new_doctor.mobile_no;
    dr[number_of_doctor].specialist = new_doctor.specialist;
    dr[number_of_doctor].pass = "doc123";
    number_of_doctor++;          // total doctor number increase by one
    while (i < number_of_doctor) // rewriting doctor data again in txt file.   ** BE AWARE WITH THE VAUE OF i
    {
        doo << dr[i].id << endl;
        doo << dr[i].name << endl;
        doo << dr[i].degree << endl;
        doo << dr[i].college << endl;
        doo << dr[i].mobile_no << endl;
        doo << dr[i].specialist << endl;
        doo << dr[i].pass << endl;
        i++;
        doo << "\n";
    }
    doo.close(); // close file after writing is done
    cout << "\n\n\t\tNew Doctor information added!";
    cout << "\n\n\t\tYour Password is \"doc123\"";
    cout << "\n\n\t\tPress any key to proceed...";
    doc_ent = getch();
}
