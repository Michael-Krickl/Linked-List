#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>

using namespace std;

class Element
{
public:
    Element(const string& name);
    ~Element();

    string getName();

    Element* getNext();
    void setNext(Element* next);

private:
    string m_theName;
    Element* m_theNext;

};

#endif // ELEMENT_H
