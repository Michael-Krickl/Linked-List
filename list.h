#ifndef LIST_H
#define LIST_H

#include "element.h"

class List
{
public:
    List();
    ~List();

    void insertElement(string name);
    void deleteElement(string name);
    void showList();

private:
    Element* m_start;
    Element* m_end;
};

#endif // LIST_H
