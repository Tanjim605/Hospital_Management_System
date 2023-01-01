#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

class doctor:public person
{
public:
    string id,degree,college,specialist,pass;
};

string doc_file="doctor/doctor.txt";        //file declaration as string
string last_doc="doctor/last_doctor.txt";
string archive_doctor_file="doctor/archive_doctor.txt";


int number_of_doctor=0,number_of_ad=0;      //gobal declaretion of total_doctor as we need everytime
doctor dr[100];
doctor archive_dr[1000];

char y,doc_ent;
int mm=0,log_doc;


#include"read_doctor.h"
#include"show_doctor.h"
#include"read_archive_doctor.h"
#include"show_archive_doctor.h"
#include"add_doctor.h"
#include"update_doctor.h"
#include"remove_doctor.h"
#include"show_doc_profile.h"
#include"login_doctor.h"
