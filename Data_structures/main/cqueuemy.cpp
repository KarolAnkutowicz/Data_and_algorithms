/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cqueuemy.cpp
 */

#include "cqueuemy.hpp"

/********** PUBLIC: BEGINNING **********/

/*
 * cQueueMy()
 */
cQueueMy::cQueueMy()
{
    QueueMy = new typeData[1]; // utworzenie nowej kolejki
    vSize = 1; // ustanowienie rozmiaru kolejki
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    QueueMy[0] = 0; // nadanie wartosci jedynego elementu
}

/*
 * cQueueTemplate()
 */
cQueueMy::cQueueMy(typeLoop aSize)
{
    QueueMy = new typeData[aSize]; // utworzenie nowej kolejki
    vSize = aSize; // ustanowienie rozmiaru kolejki
    vDrawingRange = 0; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * cQueueTemplate()
 */
cQueueMy::cQueueMy(typeLoop aSize, typeData aDrawingRange)
{
    QueueMy = new typeData[aSize]; // utworzenie nowej kolejki
    vSize = aSize; // ustanowienie rozmiaru kolejki
    vDrawingRange = aDrawingRange; // ustanowienie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie metody losujacej elementy
}

/*
 * ~cQueueMy()
 */
cQueueMy::~cQueueMy()
{
    delete[]QueueMy; // zwalnianie zasobow przydzielanych dynamicznie
}



/*
 * typeData getFirstElement()
 */
typeData cQueueMy::getFirstElement()
{
    if (!vSize) // sprawdzamy czy kolejka nie jest pusta
        return QueueMy[0]; // jesli nie to zwracamy pierwszy element
    else // jesli jest pusta...
        return NULL; // ...to nie mamy co zwrocic
}

/*
 * typeData getLastElement()
 */
typeData cQueueMy::getLastElement()
{
    if (!vSize) // sprawdzamy czy kolejka nie jest pusta
        return QueueMy[vSize - 1]; // jesli nie to zwracamy ostatni element
    else // jesli jest pusta...
        return NULL; // ...to nie mamy co zwrocic
}



/*
 * void mAddElement(typeData aElement)
 */
void cQueueMy::mAddElement(typeData aElement)
{
    vSize++; // zwiekszamy rozmiar kolejki
    typeData* QueueMyAux; // deklarujemy wskaznik do kolejki pomocniczej
    QueueMyAux = new typeData[vSize]; // tworzymy kolejke pomocnicza
    for (typeLoop i = 0; i < (vSize - 1); i++) // przejscie po wszystkich elementach w kolejce
        QueueMyAux[i] = QueueMy[i]; // kopiowanie elementow do kolejki pomocniczej
    QueueMyAux[vSize - 1] = aElement; // dopisanie nowego elementu
    delete[]QueueMy; // zwalnienie zasobow przydzielanych dynamicznie
    QueueMy = new typeData[vSize]; // utworzenie nowej kolejki
    for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce
        QueueMy[i] = QueueMyAux[i]; // kopiowanie elementow z kolejki pomocniczej
    delete[]QueueMyAux; // zwalnianie zasobow przydzielanych dynamicznie
}

/*
 * bool mRemoveElement()
 */
bool cQueueMy::mRemoveElement()
{
    if (vSize == 0) // sprawdzamy czy kolejka jest pusta
        return false; // jesli tak to nie mamy co usuwac
    else
    {
        vSize--; // zmniejszamy rozmiar kolejki
        typeData* QueueMyAux; // deklarujemy wskaznik do kolejki pomocniczej
        QueueMyAux = new typeData[vSize]; // tworzymy kolejke pomocnicza
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce
            QueueMyAux[i] = QueueMy[i + 1]; // kopiowanie elementow do kolejki pomocniczej - pominiecie pierwszego elementu
        delete[]QueueMy; // zwalnienie zasobow przydzielanych dynamicznie
        QueueMy = new typeData[vSize]; // utworzenie nowej kolejki
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach w kolejce
            QueueMy[i] = QueueMyAux[i]; // kopiowanie elementow z kolejki pomocniczej
        delete[]QueueMyAux; // zwalnianie zasobow przydzielanych dynamicznie
        return true; // zwrocenie infromacji o pomyslnym usunieciu elementu
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cQueueMy::mDrawElements(typeLoop aSize)
{
    srand(time_t(NULL)); // ustanowienie zmiennej losowej
    for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
        QueueMy[i] = rand() % vDrawingRange; // przypisanie wylosowanej wartosci
}



/*
 * void mPrintFirstElement()
 */
void cQueueMy::mPrintFirstElement()
{
    if (vSize == 0) // sprawdzenie czy kolejka jest pusta
        std::cout << "Kolejka jest pusta!\n"; // wypisanie odpowiedniego komunikatu
    else // w przypadku jesli cokolwiek jest w kolejce
        std::cout << QueueMy[0] << " "; // wypisujemy wartosc pierwszego elementu kolejki
}

/*
 * void mPrintLastElement()
 */
void cQueueMy::mPrintLastElement()
{
    if (vSize == 0) // sprawdzenie czy kolejka jest pusta
        std::cout << "Kolejka jest pusta!\n"; // wypisanie odpowiedniego komunikatu
    else // w przypadku jesli cokolwiek jest w kolejce
        std::cout << QueueMy[vSize - 1] << " "; // wypisujemy wartosc ostatniego elementu kolejki
}

/*
 * void mPrintAllElements()
 */
void cQueueMy::mPrintAllElements()
{
    if (vSize == 0) // sprawdzenie czy kolejka jest pusta
        std::cout << "Kolejka jest pusta!\n"; // wypisanie odpowiedniego komunikatu
    else // w przypadku jesli cokolwiek jest w kolejce
    {
        for (typeLoop i = 0; i < vSize; i++) // przejscie po wszystkich elementach kolejki
            std::cout << QueueMy[i] << " "; // wypisanie wskazanego elementu
        std::cout << "\n"; // przejscie do nowej linii
    }
}

/********** PUBLIC: END **********/

/* cqueuemy.cpp */
/********** END_OF_FILE **********/
