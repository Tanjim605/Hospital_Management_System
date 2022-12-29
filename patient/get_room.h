#include<string>
#include<bitset>
string get_room()
{
    read_room();
    string ret,room_count="101";
    int flg=0,j;
    sort(hos_room.begin(),hos_room.end());
    for(j=0;j<number_of_patient;j++)
    {
        if(hos_room[j]!=room_count)
        {
            ret=room_count;
            flg=1;
            break;
        }
        int str=stoi(room_count);
        str++;
        room_count=to_string(str);
    }
    if(flg==0)
    {
        ret=room_count;
    }
    hos_room.clear();
    return ret;
}
