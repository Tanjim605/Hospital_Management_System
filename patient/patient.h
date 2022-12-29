#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

class patient:public person
{
    public:
    string id,blood_group,age,gender,reason,bill;
    string doc,room;
};

string patient_file="patient/patient.txt";
string last_patient_file="patient/last_patient.txt";
string archive_patient_file="patient/archive_patient.txt";

vector<string> hos_room;

vector<string> tests = {"Admit ","ECG ","MRI ","Echo ","Dengue ","Typhoid ","Malaria ","Endoscopy ","X-Ray ","Urine test "};
vector<int> cost = {500,350,8000,3000,300,350,250,4000,600,300};
long long total_bill;

int number_of_patient=0,number_of_ap=0;
patient pat[1000];
patient archive_pat[1000];

char x,pat_ent;
int nm=0;
int r=0;

#include "read_patient.h"
#include "read_room.h"
#include "get_room.h"
#include "add_patient.h"
#include "read_archive_patient.h"
#include "remove_patient.h"
#include "search_patient.h"
#include "show_patient.h"
#include "update_patient.h"
#include "select_doctor.h"
#include "check_patient.h"
#include "pat_under_doc.h"
#include "show_archive_patient.h"
