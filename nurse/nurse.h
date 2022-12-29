#include<bits/stdc++.h>
#include<unistd.h>          // Header file for sleep function
using namespace std;

class nurse:public person   //inherited nurse class from person
{
    public:
    string id,blood_group;
};

string nurse_file="nurse/nurse.txt";        //file declaration as string
string last_nurse_file="nurse/last_nurse.txt";
string archive_nurse_file="nurse/archive_nurse.txt";


int number_of_nurse=0,number_of_an=0;;      //gobal declaretion of total_nurse as we need everytime
nurse nrs[1000];             //nurse array
nurse archive_nrs[1000];

int nn=0;
char nur_ent;


#include "read_nurse.h"
#include "read_archive_nurse.h"
#include "show_archive_nurse.h"
#include "add_nurse.h"
#include "delete_nurse.h"
#include "nurse_list.h"
#include "update_nurse.h"
