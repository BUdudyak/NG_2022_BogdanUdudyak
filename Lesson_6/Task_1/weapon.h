#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
#include <random>
#include <time.h>

using namespace std;

class weapon
{
public:
    weapon();

    void setDamage(int damage);
    int getDamage(){return m_damage;}

    void setRapidity(int rapidity);
    int getRapidity(){return m_rapidity;}

    void setName(string name);
    string getName(){return m_name;}

    void setWear(int wear);
    int getWear(){return m_wear;}

    void setMisfire(bool misfire, int wear);
    bool getMisfire(){return m_misfire;}

    void setBlunted(bool blunted, int wear);
    bool getBlunted(){return m_blunted;}

protected:
    int m_damage;
    int m_rapidity;
    string m_name;
    int m_wear;
    bool m_misfire;
    bool m_blunted;
};

#endif // WEAPON_H
