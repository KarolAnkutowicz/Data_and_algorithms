/********** BEGIN_OF_FILE **********/
/*
 * author: Karol Ankutowicz
 * file: clistmy.cpp
 */

#include "clistmy.h"

using namespace std;

/********** PUBLIC: BEGINNING **********/

/*
 * cListMy()
 */
cListMy::cListMy()
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true; // lista jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
    mPrintAllElements(); // wypisanie wszystkich elementow listy
}

/*
 * cListMy(typeLoop aSize)
 */
cListMy::cListMy(typeLoop aSize)
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true; // lista jest pusta
    vDrawingRange = 0; // zakres losowania elementow jest zerowy
    for (typeLoop i = 0; i < aSize; i++) // przechodzimy przez wszystkie elementy
        mAddElementToEnd(0); // dodajemy nowy element na koniec listy
    mPrintAllElements(); // wypisanie wszystkich elementow listy
}

/*
 * cListMy(typeLoop aSize, typeData aDrawingRange)
 */
cListMy::cListMy(typeLoop aSize, typeData aDrawingRange)
{
    vListMyBegin = NULL; // brak pierwszego elementu
    vListMyEnd = NULL; // brak ostatniego elementu
    vSize = 0; // zerowy rozmiar listy
    vIsEmpty = true;
    vDrawingRange = aDrawingRange; // przypisanie zakresu losowania elementow
    mDrawElements(aSize); // wywolanie dodawania losowych elementow
    mPrintAllElements(); // wypisanie wszystkich elementow listy
}



/*
 * typeData getFirstElement()
 */
typeData cListMy::getFirstElement()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return vListMyBegin->getValue(); // zwracamy wartosc pierwszego elementu
}

/*
 * typeData getLastElement()
 */
typeData cListMy::getLastElement()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return NULL; // jesli tak to nie mamy co zwracac
    else // jesli lista nie jest pusta
        return vListMyEnd->getValue(); // zwracamy wartosc ostatniego elementu
}



/*
 * void mAddElementToBegin(typeData aElement)
 */
void cListMy::mAddElementToBegin(typeData aElement)
{
    cListMyElement Elem(aElement); // utworzenie nowego elementu
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
    {
        Elem.setNext(NULL); // nowy element poki co nie ma nastepnika
        vListMyEnd = &Elem; // wskaznik na element koncowy ustawiamy na dodawany element
    }
    else // jesli na liscie jest juz co najmniej jeden element
        Elem.setNext(vListMyBegin); // ustanawiamy nastepnik nowego elementu jako aktualnie pierwszy element
    vListMyBegin = &Elem; // ustanawiamy poczatek listy na nowododany element
    vSize++; // zwiekszamy rozmiar listy
    vIsEmpty = false; // ustanawiamy ze lista nie jest pusta
}

/*
 * void mAddElementToEnd(typeData aElement)
 */
void cListMy::mAddElementToEnd(typeData aElement)
{
    cListMyElement Elem(aElement); // utworzenie nowego elementu
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        vListMyBegin = &Elem; // jesli jest pusta to wskaznik na element poczatkowy ustanawiamy na dodawany element
    else // jesli na liscie jest juz co najmniej jeden element
    {
        vListMyEnd->setNext(&Elem); // ustanawiamy nowy element jako nastepnik aktualnie ostatniego elementu
        Elem.setNext(NULL); // nowy element aktualnie wskazuje na NULL
    }
    vListMyEnd = &Elem; // ustanawiamy koniec listy na nowododany element
    vSize++; // zwiekszamy rozmiar listy
    vIsEmpty = false; // ustanawiamy ze lista nie jest pusta
}

/*
 * bool mRemoveElementFromBegin()
 */
bool cListMy::mRemoveElementFromBegin()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac z listy
    else // jesli lista nie jest pusta
    {
        if (vSize == 1) // jesli jest na niej jeden element
        {
            vListMyBegin->~cListMyElement(); // likwidujemy pierwszy element listy
            vListMyBegin = NULL; // poczatek listy ustanawiamy na NULL
            vListMyEnd = NULL; // koniec listy ustanawiamy na NULL
            vIsEmpty = true; // ustanawiamy ze lista jest pusta
        }
        else // jesli jest na niej wiecej niz jeden element
        {
            cListMyElement Elem;// tworzymy element pomocniczy
            Elem.setNext(vListMyBegin->getNext()); // nastepnik elementu pomocniczego jest nastepnikiem elementu z poczatku listy
            vListMyBegin->~cListMyElement(); // usuwamy element z poczatku listy
            vListMyBegin = Elem.getNext(); // ustanawiamy poczatek listy jako nastepnik elementu pomocniczego
            Elem.~cListMyElement(); // usuwamy element pomocniczy
        }
        vSize--; // zmniejszamy rozmiar listy
        return true; // zwrasamy informacje, ze element zostal usuniety
    }
}

/*
 * bool mRemoveElementFromEnd()
 */
bool cListMy::mRemoveElementFromEnd()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        return false; // jesli tak to nie mamy co usuwac z listy
    else // jesli lista nie jest pusta
    {
        if (vSize == 1) // jesli jest na niej jeden element
        {
            vListMyBegin->~cListMyElement(); // likwidujemy pierwszy element listy
            vListMyBegin = NULL; // poczatek listy ustanawiamy na NULL
            vListMyEnd =  NULL; // koniec listy ustanawiamy na NULL
            vIsEmpty = true; // ustanawiamy ze lista jest pusta
        }
        else // jesli jest na niej wiecej niz jeden element
        {
            cListMyElement *Elem; // tworzymy element pomocniczy
            Elem = vListMyBegin; // przypisujemy pomocniczy element jako pierwszy element
            for (typeLoop i = 0; i < vSize; i++)// przechodzimy przez wszystkie elementy
            {
                if ((Elem->getNext()) == vListMyEnd)// sprawdzamy czy analizowany element wskazuje jako nastepnik na ostatni element
                {
                    Elem->setNext(NULL); // jesli tak to zmieniamy jego wskazanie na nastepnik jako NULL
                    vListMyEnd->~cListMyElement(); // usuwamy aktualnie ostatni element
                    vListMyEnd = Elem; // ustanawiamy nowy ostatni element jako biezacy
                }
                else// jesli tak nie jest
                    Elem = Elem->getNext(); // wowczas jako element pomocniczy wskazujemy nastepnik biezacego elementu
            }
            Elem->~cListMyElement(); // niszczymy element pomocniczy
        }
        vSize--; // zmniejszamy rozmiar listy
        return true; // zwracamy informacje, ze element zostal usuniety
    }
}

/*
 * void mDrawElements(typeLoop aSize)
 */
void cListMy::mDrawElements(typeLoop aSize)
{
    if (aSize != 0) // sprawdzamy czy rozmiar jest niezerowy
    {
        //vIsEmpty = false; // jesli tak to lista nie bedzie pusta
        srand(time_t(NULL)); // ustanowienie zmiennej losowej
        for (typeLoop i = 0; i < aSize; i++) // przejscie po wszystkich elementach
            mAddElementToEnd(rand() % vDrawingRange); // dodanie nowego elementu na koniec listy
    }
}



/*
 * void mPrintFirstElement()
 */
void cListMy::mPrintFirstElement()
{
    if (vIsEmpty == false) // sprawdzenie czy lista nie jest pusta
        cout << vListMyBegin->getValue() << endl; // wypisanie wartosci pierwszego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta 2!" << endl; // wypisujemy odpowiedni komunikat
}

/*
 * void mPrintLastElement()
 */
void cListMy::mPrintLastElement()
{
    if (vIsEmpty == false) // sprawdzenie czy lista nie jest pusta
        cout << vListMyEnd->getValue() << endl; // wypisanie wartosci ostatniego elementu
    else // jesli lista jest pusta
        cout << "Lista jest pusta!" << endl; // wypisujemy odpowiedni komunikat
}

/*
 * void mPrintAllElements()
 */
void cListMy::mPrintAllElements()
{
    if (vIsEmpty == true) // sprawdzamy czy lista jest pusta
        cout << "Lista jestpusta!" << endl; // jesli tak to wypisujemy odpowiedni komunikat
    else // jesli lista nie jest pusta
    {
        cListMyElement *Elem; // tworzymy element pomocniczy
        Elem = vListMyBegin; // przypisujemy element pomocniczy rowny wartosci pierwszego elementu listy
        for (typeLoop i = 0; i < vSize; i++) // przechodzimy przez wszystkie elementy
        {
            cout << Elem->getValue() << endl; // wypisujemy wartosc elementu
            Elem = Elem->getNext(); // przypisujemy nastepnik do elementu pomocniczego
        }
    }
}

/********** PUBLIC: END **********/

/* clistmy.cpp */
/********** END_OF_FILE **********/
