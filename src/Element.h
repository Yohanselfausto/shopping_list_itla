#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>

using namespace std;

class Element
{
    public:
        Element(int cod, string name, int quantity);
        virtual ~Element();

    int getCod(){
        return cod;
    }

    void setCod(int cod){
        this -> cod = cod;
    }

    string getName(){
        return name;
    }

    void setName(string name){
        this -> name = name;
    }

    int getQuantity(){
        return quantity;
    }

    void setQuantity(int Quantity){
        this -> quantity = quantity;
    }

    Element* getNext(){
        return next;
    }

    void setNext (Element* Next){
        this -> next = next;
    }

private:
    int cod;
    string name;
    int quantity;
    Element* next;

};

#endif // ELEMENTO_H