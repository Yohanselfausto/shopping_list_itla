#include "Element.h"

Element::Element1(int cod, string name, int quantity)
{
    siguiente = NULL;
    this -> cod = cod;
    this -> name = name;
    this -> quantity = quantity;
}

Element::~Element()
{
    //dtor
}