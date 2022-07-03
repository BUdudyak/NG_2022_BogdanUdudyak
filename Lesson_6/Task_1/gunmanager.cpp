#include "gunmanager.h"

gunManager::gunManager()
{

}

void gunManager::showInventory()
{
    cout << "Assault Rifle weapon: " << m_assaultRifle.size() << " guns" << endl;
}
