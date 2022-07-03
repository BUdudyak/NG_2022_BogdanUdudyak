#include "assaultrifle.h"
#include "weapon.h"

assaultRifle::assaultRifle()
{
    m_range = -1;
}

void assaultRifle::setRange(int range)
{
    if(range < 0)
    {
        cout << "The range can't be lower then 0." << endl;
        return;
    }
    m_range = range;
}
