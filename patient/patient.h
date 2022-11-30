#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

class patient:public person
{
    public:
    string id,blood_group,age,gender,reason;
};

string patient_file="patient/patient.txt";
string last_patient_file="patient/last_patient.txt";

int number_of_patient=0;
patient pat[100];
char x,pat_ent;
int nm=0;
int r=0;


#include "read_patient.h"
#include "add_patient.h"
#include "remove_patient.h"
#include "search_patient.h"
#include "show_patient.h"
#include "update_patient.h"
#include "select_doctor.h"
