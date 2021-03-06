/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmy.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include "celementsmystructures.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

/*
 * cListMy - klasa modelujaca liste bez wykorzystania
 * szablonu <list>.
 */
class cListMy
{
/********** PUBLIC: BEGINNING **********/

public:

    /*
     * cListMy() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cListMy.
     */
    cListMy();

    /*
     * cListMy(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy
     * dodac do listy.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cListMy.
     */
    cListMy(typeLoop aSize);

    /*
     * cListMy(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do listy oraz zakresem
     * z jakiego mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie maksymalnego zakresu losowania elementow
     * (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cListMy.
     */
    cListMy(typeLoop aSize, typeData aDrawingRange);

    /*
     * ~cListMy() - destruktor klasy cListMy.
     * PRE:
     * - brak;
     * POST:
     * - zwalnianie zasobow przydzielanych dynamicznie.
     */
    ~cListMy();


    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z listy
     * (typ: typeData).
     */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z listy  (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z listy
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getListSize() - zwrocenie rozmiaru listy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru listy (typ: typeLoop).
     */
    inline typeLoop getListSize()
    {
        return vSize;
    }

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeLoop).
     */
    inline typeLoop getDrawingRange()
    {
        return vDrawingRange;
    }



    /*
     * void mAddElementToBegin(typeData aElement) - metoda
     * dopisujaca element na sam poczatek listy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToBegin(typeData aElement);

    /*
     * void mAddElementToEnd(typeData aElement) - metoda
     * dopisujaca element na samym koncu listy.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToEnd(typeData aElement);

    /*
     * bool mRemoveElementFromBegin() - metoda usuwajaca
     * element z poczatku listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromBegin();

    /*
     * bool mRemoveElementFromEnd() - metoda usuwajaca
     * element z konca listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromEnd();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy listy.
     * PRE:
     * - podanie liczby elementow (typ: typeData);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc listy (o ile lista nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGINNING **********/

private:

    /*
     * cElementListAndDeque *vListMyBegin - wskaznik do
     * pierwszego elementu listy.
     */
    cElementListAndDeque* vListMyBegin;

    /*
     * cElementListAndDeque *vListMyEnd - wskaznik do
     * ostatniego elementu listy.
     */
    cElementListAndDeque* vListMyEnd;

    /*
     *  typeLoop vSize - zmienna przechowujaca rozmiar listy.
     */
    typeLoop vSize;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow stosu.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/
};

/* clistmy.hpp */
/********** END_OF_FILE **********/
