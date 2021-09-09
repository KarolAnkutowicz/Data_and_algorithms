/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cheapbinary.h
 */

#ifndef CHEAPBINARY_H
#define CHEAPBINARY_H

#include "constantsandtypes.h"

using namespace std;

/*
 * class cHeapBinary - klasa modelujaca
 * kopiec binarny.
 */
class cHeapBinary
{
/********** PRIVATE: BEGIN **********/

    /*
     * typeData *HeapBinary - wskaznik do tablicy
     * reprezentujacej kopiec binarny.
     */
    typeData *HeapBinary;

    /*
     *  typeLoop vSize - zmienna przechowujaca rozmiar kopca.
     */
    typeLoop vSize;

    /*
     * bool vIsEmpty - zmienna logiczna okreslajaca czy kopiec
     * jest pusta czy nie.
     */
    bool vIsEmpty;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow kopca.
     */
    typeData vDrawingRange;


/********** PRIVATE: END **********/

/********** PUBLIC: BEGIN **********/
public:

    /*
     * cHeapBinary() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cHeapBinary.
     */
    cHeapBinary();

    /*
     * cHeapBinary(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy
     * dodac do kopca.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cHeapBinary.
     */
    cHeapBinary(typeLoop aSize);

    /*
     * cHeapBinary(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do listy oraz zakresem
     * z jakiego mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie maksymalnego zakresu losowania elementow
     * (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cHeapBinary.
     */
    cHeapBinary(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getRootHeap() - metoda zwracajaca
     * korzen kopca.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie korzenia kopca (typ: typeData).
     */
    typeData getRootHeap();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z kopca.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z kopca
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * typeLoop getHeapSize() - zwrocenie rozmiaru kopca.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru kopca (typ: typeLoop).
     */
    typeLoop getHeapSize();

    /*
     * typeLoop getDrawingRange() - metoda zwracajaca
     * wartosc zakresu losowania elementow.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie wartosci pola vDrawingRange
     * (typ: typeLoop).
     */
    typeLoop getDrawingRange();

    /*
     * bool getHeapIsEmpty() - metoda zawracajaca
     * informacje o tym czy kopiec jest pusty.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy kopiec jest pusty
     * (typ: bool).
     */
    bool getHeapIsEmpty();



    /*
     * void mAddElementToRoot(typeData aElement) - metoda
     * dopisujaca element w korzeniu kopca.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToRoot(typeData aElement);

    /*
     * void mAddElementToEnd(typeData aElement) - metoda
     * dopisujaca element na samym koncu kopca.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    void mAddElementToEnd(typeData aElement);

    /*
     * bool mRemoveRootHeap() - metoda usuwajaca
     * element z korzenia kopca (o ile kopiec nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveRootHeap();

    /*
     * bool mRemoveElementFromEnd() - metoda usuwajaca
     * element z konca kopca (o ile kopiec nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElementFromEnd();

    /*
     * void mRepairHeap() - metoda przywracajaca
     * wlasnosc kopca.
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mRepairHeap();



    /*
     * void mPrintRootHeap() - metoda wyswietlajaca
     * korzen kopca (o ile kopiec nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintRootHeap();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element kopca (o ile kopiec nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc kopca (o ile kopiec nie jest pusty!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintAllElements();

/********** PUBLIC: END **********/
};

#endif // CHEAPBINARY_H

/* cheapbinary.h */
/********** END_OF_FILE **********/