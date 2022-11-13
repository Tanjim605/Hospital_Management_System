#include<bits/stdc++.h>
#include<unistd.h>
// #include "person.h"
using namespace std;

class patient:public person
{
    public:
    string id,blood_group,age,gender,reason;
};
int number_of_patient=0;
patient pat[100];
char x;
int nm=0;
int r=0;


#include "read_patient.h"
#include "add_patient.h"
#include "remove_patient.h"
#include "search_patient.h"
#include "show_patient.h"
#include "update_patient.h"


