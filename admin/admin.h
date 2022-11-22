#include <bits/stdc++.h>
#include <cstdlib>
#include <unistd.h>
#define sz(n) (int)n.size()
using namespace std;

class login
{
private:
    string pass;

public:
    string id;
    void set_pass(string s)
    {
        pass = s;
    }
    string get_pass()
    {
        return pass;
    }
};

string admin_file="admin/login.txt";

char ENT;

login admin[1000];
int n = 0, m,logout=0,back=0; // m is the position of given id while logging in

#include "read_admin.h"
#include "login_admin.h"
#include "write_admin.h"
#include "add_admin.h"
#include "check_admin.h"
#include "show_admin.h"
#include "update_admin.h"
