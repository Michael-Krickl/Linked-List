#include "element.h"

using namespace std;

Element::Element(const string& name) : m_theName(name)
{
    cout << "Element::Element: New Element{m_theName=\"" << m_theName << "\"}" << endl;
}

Element::~Element()
{
    cout << "Element::~Element: Deleting Element{m_theName=\"" << m_theName << "\"}" << endl;
}

string Element::getName()
{
    return m_theName;
}

Element* Element::getNext()
{
    return m_theNext;
}

void Element::setNext(Element* element)
{
    m_theNext = element;
}
