#include "list.h"

List::List()
{
    cout << "List::List" << endl;

    m_start = new Element("start");
    m_end = new Element("end");

    m_start -> setNext(m_end);
    m_end -> setNext(m_end);
}

List::~List()
{
    cout << "List::~List" << endl;

    Element* currentElement = m_start;
    Element* previousElement;

    while(currentElement -> getNext() != m_end)
    {
        previousElement = currentElement;
        currentElement = currentElement -> getNext();
        delete previousElement;
    }

    delete currentElement;
    delete m_end;
}

void List::insertElement(string name)
{
    Element* newElement = new Element(name);
    Element* currentElement = m_start -> getNext();
    Element* previousElement = m_start;

    if(name.compare("start") == 0 || name.compare("end") == 0)
    {
        cout << "Illegal element name" << endl;
        return;
    }

    while(currentElement -> getName().compare(name) < 0 && currentElement != m_end)
    {
        previousElement = currentElement;
        currentElement = currentElement -> getNext();
    }

    previousElement -> setNext(newElement);
    newElement -> setNext(currentElement);
}

void List::deleteElement(string name)
{
    Element* currentElement = m_start -> getNext();
    Element* previousElement = m_start;

    if(name.compare("start") == 0 || name.compare("end") == 0)
    {
        cout << "Illegal element name" << endl;
        return;
    }

    while(currentElement -> getName().compare(name) != 0)
    {
        if(currentElement == m_end)
        {
            cout << "Element not found" << endl;
            return;
        }

        previousElement = currentElement;
        currentElement = currentElement -> getNext();
    }

    previousElement -> setNext(currentElement -> getNext());
    delete currentElement;
}

void List::showList()
{
    Element* element = m_start -> getNext();

    cout << endl << "Elements:" << endl;
    cout << "--------------------" << endl;
    while(element != m_end)
    {
        cout << "Name: " << element -> getName() << endl;
        element = element -> getNext();
    }
    cout << "--------------------" << endl << endl;
}
