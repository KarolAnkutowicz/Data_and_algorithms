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

}

/*
 * cStackTemplate(typeLoop aSize)
 */
cStackTemplate::cStackTemplate(typeLoop aSize)
{

}

/*
 * cStackTemplate(typeLoop aSize, typeData aDrawingRange)
 */
cStackTemplate::cStackTemplate(typeLoop aSize, typeData aDrawingRange)
{

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
    while (!StackTemplate.empty())
    {
        cout << StackTemplate.top(); // wypisujemy element ze szczytu stosu
        mRemoveElement(); // usuwamy element dajac dostep do kolejnego
    }
}

/********** PUBLIC: END **********/

/* cstacktemplate.cpp */
/********** END_OF_FILE **********/
