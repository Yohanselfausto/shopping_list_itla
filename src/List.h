#ifndef LISTA_H
#define LISTA_H
#include "Elemento.h"

class List
{
    public:
        List();
        virtual ~List();

    void add1(Element* element);
    void delete1(Element* element);

    Element* getFirstElement(){
        return firstElement;
    }

    void setFirstElement(Element* firstElement){
        this -> firstElement = firstElement;
    }

    Element* getLastElement(){
        return lastElement;
    }

    void setLastElement(Element* lastElement){
        this -> firstElement = firstElement;
    }

    Element* getDeleteElement(){
        return deleteElement;
    }

    void setEliminarElemento(){
        this -> deleteElement = deleteElement;
    }


private:
    Elemento* firstElement;
    Element* deleteElement;
    Element* deleteElement;
};

#endif // LIST_H