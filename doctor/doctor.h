#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

class doctor:public person
{
public:
    string id,degree,college,spacialist;
};

string doc_file="doctor/doctor.txt";        //file declaration as string
string last_doc="doctor/last_doctor.txt";

char y,doc_ent;
int mm=0;
doctor dr[100];
int number_of_doctor=0;      //gobal declaretion of total_doctor as we need everytime

#include"read_doctor.h"
#include"show_doctor.h"
#include"add_doctor.h"
#include"update_doctor.h"
#include"remove_doctor.h"
#include"show_doc_profile.h"
