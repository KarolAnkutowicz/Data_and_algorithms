/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cuniquedynamiconedimensiontable.cpp
 */

#include "cuniquedynamiconedimensiontable.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cUniqueyDnamicOneDimensionTable()
 */
cUniqueDynamicOneDimensionTable::cUniqueDynamicOneDimensionTable()
{
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    std::unique_ptr<typeData[]> tabElements{new typeData[1]}; // utworzenie tablicy elementow
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    tabElements[0] = NULL; // nadanie wartosci potencjalnemu elementowi tablicy
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    mFindMinElement(); // wywolanie wyszukania najmniejszego elementu
    mFindMaxElement(); // wywolanie wyszukania najwiekszego elementu
}

/*
 * cUniqueDynamicOneDimensionTable(typeLoop aLengthTable)
 */
cUniqueDynamicOneDimensionTable::cUniqueDynamicOneDimensionTable(typeLoop aLengthTable)
{
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    std::unique_ptr<typeData[]> tabElements{ new typeData[aLengthTable] }; // utworzenie tablicy elementow
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aLengthTable); // wywolanie metody losujacej dodawane elementy
    mFindMinElement(); // wywolanie wyszukania najmniejszego elementu
    mFindMaxElement(); // wywolanie wyszukania najwiekszego elementu

}

/*
 * cUniqueDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
 */
cUniqueDynamicOneDimensionTable::cUniqueDynamicOneDimensionTable(typeLoop aLengthTable, typeData aDrawingRange)
{
    vLengthTable = 0; // ustanowienie rozmiaru tablicy
    std::unique_ptr<typeData[]> tabElements{ new typeData[aLengthTable] }; // utworzenie tablicy elementow
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aLengthTable); // wywolanie metody losujacej dodawane elementy
    mFindMinElement(); // wywolanie wyszukania najmniejszego elementu
    mFindMaxElement(); // wywolanie wyszukania najwiekszego elementu

}



/*
 * typeData getElement()
 */
typeData cUniqueDynamicOneDimensionTable::getElement()
{
    if (vLengthTable == 0) // jesli tablica jest pusta
        return NULL; // wowczas nie mamy co zwracac
    else // jesli tablica nie jest pusta
        return tabElements[vLengthTable - 1]; // domyslnie zwracamy ostatni element

}

/*
 * typeData getElement(typeLoop aIndex)
 */
typeData cUniqueDynamicOneDimensionTable::getElement(typeLoop aIndex)
{
    if (vLengthTable == 0) // jesli tablica jest pusta
        return NULL; // wowczas nie mamy co zwracac
    else // jesli w tablicy jest cokolwiek
    {
        if (aIndex > vLengthTable) // jesli indeks jest wiekszy niz rozmiar tablicy
            return NULL; // wowczas nie mamy co zwracac
        else // jesli indeks jest prawidlowa
            return tabElements[aIndex]; // zwrocenie wartosci wskazanego elementu
    }

}



/*
 * void mAddElement(typeData aElement)
 */
void cUniqueDynamicOneDimensionTable::mAddElement(typeData aElement)
{

}

/*
 * bool mRemoveElement()
 */
bool cUniqueDynamicOneDimensionTable::mRemoveElement()
{

}



/*
 * void mDrawElements(typeLoop aSize)
 */
void cUniqueDynamicOneDimensionTable::mDrawElements(typeLoop aSize)
{

}

/*
 * void mFindMinElement()
 */
void cUniqueDynamicOneDimensionTable::mFindMinElement()
{

}

/*
 * void mFindMaxElement()
 */
void cUniqueDynamicOneDimensionTable::mFindMaxElement()
{

}



/*
 * void mPrintElement()
 */
void cUniqueDynamicOneDimensionTable::mPrintElement()
{

}

/*
 * void mPrintElement(typeLoop aIndex)
 */
void cUniqueDynamicOneDimensionTable::mPrintElement(typeLoop aIndex)
{

}

/*
 * void mPrintTable()
 */
void cUniqueDynamicOneDimensionTable::mPrintTable()
{

}



/********** PUBLIC: END **********/

 /* cuniquedynamiconedimensiontable.hpp */
 /********** END_OF_FILE **********/