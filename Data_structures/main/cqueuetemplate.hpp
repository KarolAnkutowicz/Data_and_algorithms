/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuetemplate.hpp
 */

#pragma once

#include "constantsandtypes.hpp"
#include "cstdlib"
#include "ctime"
#include <iostream>
#include <queue>

/*
 * class cQueueTemplate - klasa modelujaca kolejke
 * z wykorzystaniem szablonu <queue>.
 */
class cQueueTemplate
{
/********** PUBLIC: BEGIN **********/

public:

    /*
     * cQueueTemplate() - konstruktor wywolywany bez argumentow.
     * PRE:
     * - brak;
     * POST:
     * - tworzenie obiektu klasy cQueueTemplate.
     */
    cQueueTemplate();

    /*
     * cQueueTemplate(typeLoop aSize) - konstruktor wywolywany
     * z jednym argumentem - liczba elementow jakie mamy dodac
     * do kolejki.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * POST:
     * - tworzenie obiektu klasy cQueueTemplate.
     */
    cQueueTemplate(typeLoop aSize);

    /*
     * cQueueTemplate(typeLoop aSize, typeData aDrawingRange) -
     * konstruktor wywolywany z dwoma argumentami - liczba
     * elementow jakie mamy dodac do kolejki oraz zakresem
     * z jakiego mamy te elementy losowac.
     * PRE:
     * - podanie liczby elementow (typ: typeLoop);
     * - podanie zakresu losowanie elementow (typ: typeData);
     * POST:
     * - tworzenie obiektu klasy cQueueTemplate.
     */
    cQueueTemplate(typeLoop aSize, typeData aDrawingRange);



    /*
     * typeData getFirstElement() - metoda zwracajaca
     * pierwszy element z kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie pierwszego elementu z kolejki
     * (typ: typeData).
     */
    typeData getFirstElement();

    /*
     * typeData getLastElement() - metoda zwracajaca
     * ostatni element z kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie ostatniego elementu z kolejki
     * (typ: typeData).
     */
    typeData getLastElement();

    /*
     * size_t getQueueSize() - zwrocenie rozmiaru kolejki.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie rozmiaru kolejki (typ: size_t).
     */
    inline size_t getQueueSize()
    {
        return QueueTemplate.size();
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
     * bool getQueueIsEmpty() - metoda zawracajaca
     * informacje o tym czy kolejka jest pusta.
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy kolejka jest pusta
     * (typ: bool).
     */
    inline bool getQueueIsEmpty()
    {
        return QueueTemplate.empty();
    }



    /*
     * void mAddElement(typeData aElement) - metoda
     * dopisujaca element do kolejki.
     * PRE:
     * - podanie wartosci elementu (typ: typeData);
     * POST:
     * - brak.
     */
    inline void mAddElement(typeData aElement)
    {
        QueueTemplate.push(aElement);
    }

    /*
     * bool mRemoveElement() - metoda usuwajaca
     * element z kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - zwrocenie informacji o tym czy usuniecie elementu
     * sie udalo (typ: bool).
     */
    bool mRemoveElement();

    /*
     * void mDrawElements(typeLoop aSize) - metoda losujaca
     * elementy kolejki.
     * PRE:
     * - podanie liczby elementow (typ: typeData);
     * POST:
     * - brak.
     */
    void mDrawElements(typeLoop aSize);



    /*
     * void mPrintFirstElement() - metoda wyswietlajaca
     * pierwszy element kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintFirstElement();

    /*
     * void mPrintLastElement() - metoda wyswietlajaca
     * ostatni element kolejki (o ile kolejka nie jest pusta!).
     * PRE:
     * - brak;
     * POST:
     * - brak.
     */
    void mPrintLastElement();

    /*
     * void mPrintAllElements() - metoda wyswietlajaca
     * cala zawartosc kolejki (o ile kolejka nie jest pusta!).
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
     * queue <typeData> QueueTemplate - kolejka
     * elementow typu typeData.
     */
    std::queue <typeData> QueueTemplate;

    /*
     * typeData vDrawingRange - zakres losowania
     * elementow kolejki.
     */
    typeData vDrawingRange;

/********** PRIVATE: END **********/
};

/* cqueuetemplate.hpp */
/********** END_OF_FILE **********/
