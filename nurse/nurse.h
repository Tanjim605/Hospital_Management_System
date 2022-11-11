#include<bits/stdc++.h>
#include<unistd.h>          // Header file for sleep function
// #include "person.h"         // including person class
using namespace std;

class nurse:public person   //inherited nurse class from person
{
    public:
    string id,blood_group;
};

int nn=0;
nurse nrs[100];             //nurse array
int number_of_nurse=0;      //gobal declaretion of total_nurse as we need everytime


#include "read_nurse.h"
#include "add_nurse.h"
#include "delete_nurse.h"
#include "nurse_list.h"
#include "update_nurse.h"