void read_room()
{
    read_patient();

    for(int j=0;j<number_of_patient;j++)
    {
        hos_room.push_back(pat[j].room);
    }
}
