/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstacktemplate.cpp
 */

#include "cstacktemplate.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cStackTemplate()
 */
cStackTemplate::cStackTemplate()
{
    mPrintAllElements(); // wypisujemy zawartosc stosu
}

/*
 * cStackTemplate(typeLoop aSize)
 */
cStackTemplate::cStackTemplate(typeLoop aSize)
{
    for (typeData i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementow
        mAddElement(0); // dodanie nowego elementu
    mPrintAllElements(); // wypisujemy zawartosc stosu
}

/*
 * cStackTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cStackTemplate::cStackTemplate(typeLoop aSize, typeData aDrawingRange)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeData i = 0; i < aSize; i++) // sprawdzenie liczby dodanych elementiw
        StackTemplate.push(rand() % aDrawingRange); // dodanie nowego wylosowanego elementu
    mPrintAllElements(); // wypisujemy zawartosc stosu
}



/*
 * typeData getElement()
 */
typeData cStackTemplate::getElement()
{
    if (!StackTemplate.empty()) // sprawdzamy czy stos nie jest pusty
        return StackTemplate.top(); // zwracamy element ze szczytu
    else // jesli stos jest pusty
        return NULL; // nie mamy nic do zwrocenia
}



/*
 * bool mRemoveElement()
 */
bool cStackTemplate::mRemoveElement()
{
    if (!StackTemplate.empty()) // sprawdzamy czy stos nie jest pusty
    {
        StackTemplate.pop(); // usuwamy element
        return true; // zwracamy wartosc logiczna
    }
    else // jesli stos jest pusty
        return false; // zwracamy wartosc logiczna
}



/*
 * void mPrintAllElements()
 */
void cStackTemplate::mPrintAllElements()
{
    if (StackTemplate.empty())
        cout << "    Stos jest pusty!" << endl; // wypisujemy elementy az do ostatniego
    else
    {
        cout << "    Zawartosc stosu:" << endl; // rozpoczynamy wypisywanie zawartosci stosu
        while (!StackTemplate.empty())
        {
            mPrintElement(); // wypisujemy element ze szczytu stosu
            mRemoveElement(); // usuwamy element dajac dostep do kolejnego
        }
    }
}

/********** PUBLIC: END **********/

/* cstacktemplate.cpp */
/********** END_OF_FILE **********/
