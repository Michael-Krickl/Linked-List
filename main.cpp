#include <iostream>

#include "list.h"

using namespace std;

int main()
{
    List list;

    list.insertElement("A");
    list.insertElement("B");
    list.insertElement("Q");
    list.insertElement("D");

    list.deleteElement("Q");
    list.insertElement("C");

    list.insertElement("Y");
    list.insertElement("Z");
    list.insertElement("X");

    list.deleteElement("D");

    list.showList();

    return 0;
}

