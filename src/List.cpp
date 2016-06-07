#include "Lista.h"
#include <iostream>

List::List(){
    firstElement = NULL;
    lastElement = NULL;
}

List::~List(){
    //dtor
}

void List::add(Element* element){
    if (firstElement == NULL){
        firstElement = element;
        lastElement = element;
    } else {
        lastElement -> setNext(element);
        lastElement = element;
    }
}

void List::delete1(Element* element){
    Element* i = getFirstElement();
   
    Element* _element;
    cout<< i -> getCod();
    cout<< element -> getCod();
   
        if (element -> getCod() == _element -> getCod()){
            cout << "there are a concidence";
           
    }
}