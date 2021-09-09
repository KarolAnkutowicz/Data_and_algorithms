/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectortwodimension.h
 */

#ifndef CVECTORTWODIMENSION_H
#define CVECTORTWODIMENSION_H

#include "constantsandtypes.h"
#include <vector>

using namespace std;

/*
 * cVectorTwoDimension() - klasa modelujaca tablice
 * dwuwymiarowa (wektor wektorow) z wykorzystaniem
 * szablonu <vector>.
 */
class cVectorTwoDimension
{
/********** PRIVATE: BEGIN **********/

    /*
     * vector <vector <typeData> > VectorElements - wektor
     * przechowujacy wektory typu typeData.
     */
    vector <vector <typeData> > VectorElements;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow wektora wektorow.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:
    /*
     * cVectorTwoDimension() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension();

    /*
     * cVectorTwoDimension(typeLoop aSize) - konstruktor
     * wywolywany z jednym argumentem: rozmiarem, ktory
     * jest rownoczesnie liczba elementow poszczegolnych
     * wektorow oraz wektorow wektorow.
     * PRE:
     * - podanie wymiaru (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension(typeLoop aSize);

    /*
     * cVectorTwoDimension(typeLoop aRows, typeLoop aColumns) -
     * konstruktor wywolywany z dwoma argumentami: liczba
     * wierszy (liczba wektorow) oraz liczba kolumn (liczba
     * elementow w poszczegolnych wektorach).
     * PRE:
     * - podanie liczby wierszy (typ: typeLoop);
     * - podanie liczby kolumn (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension(typeLoop aRows, typeLoop aColumns);

    /*
     * cVectorTwoDimension(typeLoop aRows, typeLoop aColumns, typeData aDrawingRange) -
     * konstruktor wywolywany z trzema argumentami: liczba
     * wierszy (liczba wektorow), liczba kolumna (liczba
     * elementow w poszczegolnych wektorach) oraz
     * zakresem losowania elementow struktury.
     * PRE:
     * - podanie liczby wierszy (typ: typeLoop);
     * - podanie liczby kolumn (typ: typeLoop);
     * - podanie zakresu losowania elementow (typ: typeData);
     * POST:
     * - utworzenie obiektu klasy cVectorTwoDimension.
     */
    cVectorTwoDimension(typeLoop aRows, typeLoop aColumns, typeData aDrawingRange);



    /*
     * typeData getElement(typeLoop aRows, typeLoop aColumns) -
     * metoda zwracajaca wartosc wskazanego elementu.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - zwrocenie wartosci wskazanego elementu
     * (typ: typeData).
     */
    typeData getElement(typeLoop aRows, typeLoop aColumns);

    /*
     * typeLoop getRows() - metoda zwracajaca liczbe
     * wierszy (wektorow) struktury.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie liczby wierszy (typ: typeLoop).
     */
    typeLoop getRows();

    /*
     * typeLoop getColumns() - metoda zwracajaca liczbe
     * kolumn (liczbe elementow w poszczegolnych
     * wektorach) struktury.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie liczby kolumn (typ: typeLoop).
     */
    typeLoop getColumns();

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeData).
     */
    typeLoop getDrawingRange();



    /*
     * void mPrintElement(typeLoop aRows, typeLoop aColumns) -
     * metoda wypisujaca wskazany element.
     * PRE:
     * - podanie numeru wiersza (typ: typeLoop);
     * - podanie numeru kolumny (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aRows, typeLoop aColumns);

    /*
     * void mPrintAllElements() - metoda wypisujaca
     * wszystkie elementy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CVECTORTWODIMENSION_H

/* cvectortwodimension.h */
/********** END_OF_FILE **********/