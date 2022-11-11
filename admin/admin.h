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

login admin[1000];
int n = 0, m,logout=0,back=0; // m is the position of given id while logging in

#include "admin_read.h"
#include "admin_login.h"
#include "admin_write.h"
#include "add_admin.h"
#include "admin_check.h"
#include "admin_show.h"
#include "admin_delete.h"
#include "admin_update.h"