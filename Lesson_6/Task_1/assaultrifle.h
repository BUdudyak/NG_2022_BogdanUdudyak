#ifndef ASSAULTRIFLE_H
#define ASSAULTRIFLE_H
#include "weapon.h"
#include <string>

using namespace std;

class assaultRifle
{
public:
    assaultRifle();

    void setRange(int range);
    int getRange(){return m_range;}

private:
    int m_range;
};


#endif // ASSAULTRIFLE_H
