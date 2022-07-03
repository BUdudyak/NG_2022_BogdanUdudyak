#include "weapon.h"

weapon::weapon()
{
    srand(time(NULL));
    m_damage = -1;
    m_rapidity = -1;
    m_name = "NONE";
    m_wear = -1;
    m_misfire = false;
    m_blunted = false;
}

void weapon::setDamage(int damage)
{
    if(damage <= 0)
    {
        cout << "The damage can't be lower or equal 0." << endl;
        return;
    }
    m_damage = damage;
}

void weapon::setRapidity(int rapidity)
{
    if(rapidity < 0)
    {
        cout << "The rapidity can't be lower then 0." << endl;
        return;
    }
    m_rapidity = rapidity;
}

void weapon::setWear(int wear)
{
    if(wear < 0)
    {
        cout << "The wear can't be lower then 0." << endl;
        return;
    }
    m_wear = wear;
}

void weapon::setMisfire(bool misfire, int wear)
{
    if(wear > 50)
    {
        misfire = rand()%2 + 0;
    }
    m_misfire = misfire;
}

void weapon::setBlunted(bool blunted, int wear)
{
    if(wear > 50)
    {
        blunted = true;
    }
    m_blunted = blunted;
}
