/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cstaticonedimensiontable.h
 */

#ifndef CSTATICONEDIMENSIONTABLE_H
#define CSTATICONEDIMENSIONTABLE_H

#include "constantsandtypes.h"

using namespace std;

/*
 * cStaticOneDimensionTable - klasa modelujaca
 * statyczna tablice jednowymiarowa o zadanym
 * i niemodyfikowalnym pozniej rozmiarze.
 */
class cStaticOneDimensionTable
{
/********** PRIVATE: BEGINNING **********/

    /*
     * typeData tabElements[conLengthTable] - tablica
     * elementow.
     */
    typeData tabElements[];

    /*
     * const typeLoop conLengthTable - stala okreslajaca
     * liczbe elementow tablicy.
     */
    typeLoop conLengthTable;

    /*
     * typeData vDrawingRange - maksymalna liczba jaka mozemy
     * wylosowac (zakres od 0 do vDarwingRange).
     */
    typeData vDrawingRange;

    /*
     * typeData vMinElement - najmniejszy element tablicy.
     */
    typeData vMinElement;

    /*
     * typeData vMaxElement - najwiekszy element tablicy.
     */
    typeData vMaxElement;

    /********** PRIVATE: END **********/

    /********** PUBLIC: BEGINNING **********/
public:

    /*
     * cStaticOneDimensionTable() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cStaticOneDimensionTable.
     */
    cStaticOneDimensionTable();

    /*
     * cStaticOneDimensionTable(typeData aDrawingRange) -
     * konstruktor wywolywany z jednym parametrem: zakresem
     * losowania elementow.
     * PRE:
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cStaticOneDimensionTable.
     */
    cStaticOneDimensionTable(typeData aDrawingRange);



    /*
     * typeData getElement(typeLoop aIndex) - metoda zwracajaca
     * wskazany element tablicy.
     * PRE:
     * - podanie indeksu (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci elementu (typ: typeData).
     */
    typeData getElement(typeLoop aIndex);

    /*
     * typeLoop getLenthtTable() - metoda zwracajaca dlugosc tablicy
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola conLengthTable (typ: typeLoop).
     */
    typeLoop getLenthtTable();

    /*
     * typeData getDrawingRange() - metoda zwracajaca maksymalny
     * zakres losowania elementow tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange(typ: typeData).
     */
    typeData getDrawingRange();

    /*
     * typeData getMinElement() - metoda zwracajaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMinElement(typ: typeData).
     */
    typeData getMinElement();

    /*
     * typeData getMaxElement() - metoda zwracajaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vMaxElement(typ: typeData).
     */
    typeData getMaxElement();



    /*
     * void mReplaceElement(typeData aElement) - metoda zmieniajaca
     * wartosc wskazanego elementu tablicy.
     * PRE:
     * - podanie indeksu elementu (typ: typeLoop);
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mReplaceElement(typeLoop aIndex, typeData aElement);

    /*
     * void mRemoveElement() - metoda resetujaca wskazany element
     * tablicy.
     * PRE:
     * - podanie indeksu elementu (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mClearElement(typeLoop aIndex);



    /*
     * void mDrawElements() - metoda losujaca elementy tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mDrawElements();

    /*
     * void mFindMinElement() - metoda znajdujaca najmniejszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMinElement();

    /*
     * void mFindMaxElement() - metoda znajdujaca najwiekszy
     * element tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMaxElement();



    /*
     * void mPrintElement(typeLoop aIndex) - metoda wypisujaca
     * wskazany element tablicy.
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aIndex);

    /*
     * void mPrintTable() - metoda wypisujaca zawartosc tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintTable();

};

#endif // CSTATICONEDIMENSIONTABLE_H

/* cstaticonedimensiontable.h */
/********** END_OF_FILE **********/
