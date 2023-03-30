#include <bits/stdc++.h>
#include <cstdlib>
#include <unistd.h>
#define sz(n) (int)n.size()
using namespace std;

class super_login
{
private:
    string super_pass;

public:
    string id;
    void set_pass(string s)
    {
        super_pass = s;
    }
    string get_pass()
    {
        return super_pass;
    }
};

string sp_admin_file="super_admin/super_admin.txt";

char super_ENT;

super_login super_admin[1000];
int super_n = 0, M,super_logout=0,super_back=0; // M is the position of given id while logging in

#include "read_sp_admin.h"
#include "login_sp_admin.h"
#include "write_sp_admin.h"
// #include "add_admin.h"
// #include "check_admin.h"
#include "show_sp_admin.h"
#include "update_sp_admin.h"
