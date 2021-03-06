/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: csettemplate.cpp
 */

#include "csettemplate.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cSetTemplate()
 */
cSetTemplate::cSetTemplate()
{
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
}

/*
 * cSetTemplate(typeLoop aSize)
 */
cSetTemplate::cSetTemplate(typeLoop aSize, typeData aDrawingRange)
{
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}



/*
 * bool mRemoveElement(typeData aValue)
 */
bool cSetTemplate::mRemoveElement(typeData aValue)
{
    for (std::set<int>::iterator it = SetTemplate.begin(); it != SetTemplate.end(); it++) // przejscie po wszystkich elememntach zbioru
    {
        if (*it == aValue) // sprawdzenie czy wartosc jest ta wskazana
        {
            SetTemplate.erase(it); // usuniecie elementu
            return true; // zwrocenie informacji o powodzeniu usuniecia elementu
        }
    }
    return false; // zwrocenie informacji o niepowodzeniu usuniecia elementu
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cSetTemplate::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        mAddElement(rand() % vDrawingRange); // dodanie nowego elementu
}



/*
 * void mPrintAllElements()
 */
void cSetTemplate::mPrintAllElements()
{
    for (std::set<int>::iterator it = SetTemplate.begin(); it != SetTemplate.end(); it++) // przejscie po wszystkich elememntach zbioru
        std::cout << *it << " "; // wypisanie elementu
    std::cout << "\n"; // przejscie do nowej linii
}

/********** PUBLIC: END **********/

/* csettemplate.cpp */
/********** END_OF_FILE **********/
