/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cvectoronedimension.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

/*
 * cVectorOneDimension() - klasa modelujaca tablice
 * jednowymiarowa (wektor) z wykorzystaniem szablonu
 * <vector>.
 */
class cVectorOneDimension
{
/********** PUBLIC: BEGIN **********/

public:

    /*
     * cVectorOneDimension() - konstruktor wywolywany
     * bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - utworzenie obiektu klasy cVectorOneDimension.
     */
    cVectorOneDimension();

    /*
     * cVectorOneDimension(typeLoop aSize) - konstruktor
     * wywolywany z jednym argumentem - liczba elementow
     * jakie mamy umiescic w wektorze.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - utworzenie obiektu klasy cVectorOneDimension.
     */
    cVectorOneDimension(typeLoop aSize);

    /*
     * cVectorOneDimension(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy umiescic w wektorze oraz zakres
     * losowanie elementow wektora.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowania elementow (typData);
     * POST:
     * - utworzenie obiektu klasy cVectorOneDimension.
     */
    cVectorOneDimension(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getElement() - metoda zwracajaca ostatni
     * element wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu wektora (typ: typeData).
     */
    typeData getElement();

    /*
     * typeData getElement(typeLoop aIndex) - metoda zwracajaca
     * wskazany element wektora (o ile wskazany indeks istnieje!).
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - zwrocenie wskazanego elementu wektora (typ: typeData).
     */
    typeData getElement(typeLoop aIndex);

    /*
     * size_t getVectorSize() - metoda zwracajaca rozmiar
     * wektora.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru wektora (typ: size_t).
     */
    inline size_t getVectorSize()
    {
        return VectorElements.size();
    }

    /*
     * bool getVectorIsEmpty() - zwrocenie informacji o tym
     * czy wektor jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy wektor jest pusty
     * (typ: bool).
     */
    inline bool getVectorIsEmpty()
    {
        return VectorElements.empty();
    }

    /*
     * typeData getDrawingRange() - metoda zwracaja
     * zakres losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeData).
     */
    inline typeData getDrawingRange()
    {
        return vDrawingRange;
    }

    /*
     * typeData getMinElement() - metoda zwracajaca
     * najmniejsza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosc pola vMinElement (typ: typeData).
     */
    inline typeData getMinElement()
    {
        return vMinElement;
    }

    /*
     * typeData getMaxElement() - metoda zwracajaca
     * najwieksza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosc pola vMaxElement (typ: typeData).
     */
    inline typeData getMaxElement()
    {
        return vMaxElement;
    }



    /*
     * void mAddElement(typeData aElement) - metoda dodajaca
     * nowy element na koniec wektora.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElement(typeData aElement);

    /*
     * bool mRemoveElement() - metoda usuwajaca ostatni element
     * wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie powiodlo (typ: bool).
     */
    bool mRemoveElement();



    /*
     * void mDrawElements(typeLoop aSize) - metoda
     * losujaca elementy wektora.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);

    /*
     * void mFindMinElement() - metoda znajdujaca
     * najmniejsza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMinElement();

    /*
     * void mFindMaxElement() - metoda znajdujaca
     * najwieksza wartosc w tablicy.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mFindMaxElement();



    /*
     * void mPrintElement() - metoda wypisujaca ostatni element
     * wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintElement();

    /*
     * void mPrintElement(typeLoop aIndex) - metoda wypisujaca
     * wskazany element wektora (o ile wskazany indeks istnieje!).
     * PRE:
     * - podanie numeru indeksu (typ: typeLoop);
     * POST:
     * - brak.
     */
    void mPrintElement(typeLoop aIndex);

    /*
     * void mPrintAllElements() - wypisanie calej zawartosci
     * wektora (o ile wektor nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/

/********** PRIVATE: BEGIN **********/

private:

    /*
     * vector <typeData> VectorElements - wektor
     * przechowujacy elementy typu TypeData.
     */
    std::vector <typeData> VectorElements;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow wektora.
     */
    typeData vDrawingRange;

    /*
     * typeData vMinElement - pole przechowujaca
     * najmniejsza wartosc tablicy.
     */
    typeData vMinElement;

    /*
     * typeData vMaxElement - pole przechowujace
     * najwieksza wartosc tablicy.
     */
    typeData vMaxElement;

/********** PRIVATE: END **********/
};

/* cvectoronedimension.hpp */
/********** END_OF_FILE **********/
