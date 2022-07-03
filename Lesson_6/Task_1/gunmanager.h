#ifndef GUNMANAGER_H
#define GUNMANAGER_H
#include "assaultrifle.h"
#include <vector>
#include <iostream>

using namespace std;

class gunManager
{
public:
    gunManager();
    void showInventory();
    assaultRifle* getAssaultRifle(){return &m_assaultRifle[m_gunIndex];}
private:
    vector<assaultRifle> m_assaultRifle;
    int m_gunIndex = -1;
};

#endif // GUNMANAGER_H
