#pragma once
#include <string>
#include <map>
#include "Resource.h"
using namespace std;


struct Location
{
    int ID = 0, DangerRate = 0, x = 0, y = 0;
    string Name = "";
    bool Looted =false;
    map<ResourceType, int> loot;

};
