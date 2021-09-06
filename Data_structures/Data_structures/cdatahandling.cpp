/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: cdatahandling.cpp
 */

#include "cdatahandling.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cDataHandling()
 */
cDataHandling::cDataHandling()
{
    mMainMenu(); // wywolanie menu glownego
}



/*
 * void mPrintMenu()
 */
void cDataHandling::mPrintMainMenu()
{
    cout << endl << "Wybierz opcje:" << endl // menu glowne
         << "(1) - dynamiczna tablica jednowymiarowa" << endl // opcja dla dynamicznej tablicy jednowymiarowej
         << "(2) - dynamiczna tablica jednowymiarowa z wykorzystaniem <vector>" << endl // opcja dla dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <vector>
         << "(3) - dynamiczna tablica dwuwymiarowa" << endl // opcja dla dynamicznej tablicy dwuwymiarowej
         //<< "(4) - dynamiczna tablica dwuwymiarowa z wykorzystaniem <vector>" << endl // opcja dla dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <vector>
         << "(5) - stos w oparciu o szablon <stack>" << endl // opcja dla stosu z wykorzystaniem <stack>
         << "(6) - stos bez wykorzystania szablonu <stack>" << endl // opcja dla stosu bez wykorzystania <stack>
         << "(7) - lista z wykorzystaniem szblonu <list>" << endl // opcja dla listy z wykorzystaniem <list>
         //<< "(8) - lista bez wykorzystanie szablonu <list>" << endl // opcja dla listy  bez wykorzystania <list>
         << "(9) - kolejka z wykorzystaniem szablonu <queue>" << endl // opcja dla kolejki z wykorzystaniem szablonu <queue>
         //<< "(10) - kolejka bez wykorzystanis szablonu <queue<" << endl // opcja dla kolejki bez wykorzystania szablonu <queue>
         //<< "(11) - kopiec binarny" << endl // opcja dla kopca binarnego
         << endl << "(0) - zakonczenie dzialania programu" << endl; // opcja dla wyjscia z programu
}

/*
 * void mMainMenu()
 */
void cDataHandling::mMainMenu()
{
    do
    {
        mPrintMainMenu(); // wypisanie glownego menu
        cin >> vOption; // wczytanie opcji
        switch(vOption) // wybor opcji
        {
            case 0 : break; // wybor zakonczenia dzialana programu
            case 1 : mMenuDynamicOneDimensionTable(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej
            case 2 : mMenuVectorOneDimension(); break; // wybor dzialan na dynamicznej tablicy jednowymiarowej z wykorzystaniem szablonu <vector>
            case 3 : mMenuDynamicTwoDimensionTable(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej
            //case 4 : mMenuVectorTwoDimension(); break; // wybor dzialan na dynamicznej tablicy dwuwymiarowej z wykorzystaniem szablonu <vector>
            case 5 : mMenuStackTemplate(); break; // wybor dzialan na stosie w oparciu o szablon <stack>
            case 6 : mMenuStackMy(); break; // wybor dzialan na stosie bez wykorzystania szablonu <stack>
            case 7 : mMenuListTemplate(); break; // wybor dzialan na liscie z wykorzystaniem szablonu <list>
            //case 8 : mMenuListMy(); break; // wybor dzialan na liscie bez wykorzystania szablonu <list>
            case 9 : mMenuQueueTemplate(); break; // wybor dzialan na kolejce z wykorzystaniem szablonu <queue>
            //case 10 : mMenuQueueMy(); break; // wybor dzialan na kolejce bez wykorzystania szablonu <queue>
            //case 11 : mMenuHeapBinary(); break; // wybor dzialan na kopcu binarnym
            default : cout << "Nie ma takiej opcji!" << endl; mMainMenu(); break; // komunikat o braku opcji
        }
        if (vOption != 0) // dodatkowe przejscie do kolejnego wyboru menu po dzialaniu jednej ze struktur
        {
            cout << "    Nacisnij dowolny klawisz..." << endl; // chwilowe "wstrzymanie" wyswietlonych wynikow
            getch(); // wymuszenie nacisniecia dowolnego klawisza
        }
    } while (vOption != 0); // sprawdzenie czy nie chcemy wyjsc z programu
}

/*
 * void mMenuDynamicOneDimensionTable()
 */
void cDataHandling::mMenuDynamicOneDimensionTable()
{
    typeLoop vLengthTable; // zmienna okreslajaca dlugosc tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry tablicy:" << endl // wczytywanie parametrow
         << "    Liczba elementow: ";
    cin >> vLengthTable; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicOneDimensionTable D(vLengthTable, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuVectorOneDimension()
 */
void cDataHandling::mMenuVectorOneDimension()
{
    typeLoop vLengthVector; // zmienna okreslajaca liczbe elementow wektora
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    typeData vElement; // zmienna wykorzystywana do dodawania elementow
    cout << "Okresl parametry wektora:" << endl // wczytywanie parametrow
         << "    Liczba elementow: ";
    cin >> vLengthVector; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cVectorOneDimension V(vLengthVector, vDrawingRange); //utworzenie obiektu
    cout << "    Podaj nowy element: ";
    cin >> vElement;
    V.mAddElement(vElement);
    cout << "    Podaj jeszcze jeden nowy element: ";
    cin >> vElement;
    V.mAddElement(vElement);
    cout << "    Usuwamy ostatni element..." << endl;
    V.mRemoveElement();
    cout << "    Zawartosc tablicy: " << endl;
    V.mPrintAllElements();
    cout << endl << "    Liczba elementow: " << V.getVectorSize() << endl;
}

/*
 * void mMenuDynamicTwoDimensionTable()
 */
void cDataHandling::mMenuDynamicTwoDimensionTable()
{
    typeLoop vColumns, vRows; // zmienne okreslajace wymiary tablicy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry tablicy:" << endl // wczytywanie parametrow
         << "    Liczba kolumn: ";
    cin >> vColumns; // wczytanie liczby kolumn
    cout << "    Liczba wierszy: ";
    cin >> vRows; // wczytanie liczby wierszy
    cout << "    Zakres liczb od 0 do...: ";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cDynamicTwoDimensionTable D(vColumns, vRows, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuVectorTwoDimension()
 */
void cDataHandling::mMenuVectorTwoDimension()
{
    //
}

/*
 * void mMenuStackTemplate()
 */
void cDataHandling::mMenuStackTemplate()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry stosu" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackTemplate S(vElements, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuStackMy()
 */
void cDataHandling::mMenuStackMy()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow stosu
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry stosu" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cStackMy S(vElements, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuListTemplate()
 */
void cDataHandling::mMenuListTemplate()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow listy
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry listy" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cListTemplate L(vElements, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuListMy()
 */
void cDataHandling::mMenuListMy()
{
    //
}

/*
 * void mMenuQueueTemplate()
 */
void cDataHandling::mMenuQueueTemplate()
{
    typeLoop vElements; // zmienna okreslajaca liczbe elementow kolejki
    typeData vDrawingRange; // zmienna okreslajaca zakres losowania elementow
    cout << "Okresl parametry kolejki" << endl // wczytanie parametrow
         << "    Liczba elementow: ";
    cin >> vElements; // wczytanie liczby elementow
    cout << "    Zakres liczb od 0 do...";
    cin >> vDrawingRange; // wczytanie granicy zakresu
    cQueueTemplate Q(vElements, vDrawingRange); // utworzenie obiektu
}

/*
 * void mMenuQueueMy()
 */
void cDataHandling::mMenuQueueMy()
{
    //
}

/*
 * void mMenuHeapBinary()
 */
void cDataHandling::mMenuHeapBinary()
{
    //
}

/********** PUBLIC: END **********/

/* cdatahandling.cpp */
/********** END_OF_FILE **********/
