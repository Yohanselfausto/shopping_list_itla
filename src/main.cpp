#include <iostream>
#include <stdlib.h>
#include "Lista.h"

using namespace std;

int option = 0, cod = 1;
List* list = new List();

void list(){
    system("cls");
    Element* i = list -> getFirstElement();

    while (i != NULL){
        cout << i -> getCod() << ".- " << i -> getName() << " " << i -> getQuantity() <<endl;
        i = i -> getNext();
    }
    Element *list2 = list -> getFirstElement();
    while (i != NULL){
        cout << list2 -> getCod() << ".- " << list2 -> getName() << " " << list2 -> getQuantity() <<endl;
        lista2 = list2 -> getNext();
    }
    system("pause");
}

void add(){
    system("cls");
    string name;
    int quantity;
    cout<<"add article" <<endl;
    cout<<"\n add article ";
    cin >> nombre;
    cout<<"add the quantity:";
    cin >> quantity;
    Element* article = new Element(cod, name, quantity);
    list -> add(article);
    cod++;
    system("pause");
}

void delete1(){
    system("cls");
    int _cod, Cod;
    cout<<"DELETE ARTICLE\n ";
    cout<<"ADD COD ARTICLE: ";
    cin >> _cod;
    Element* i = list -> getFirstElement();
    while (i != NULL){
        if (_cod == i -> getCod()) {
            Element* article = new Element(i -> getCod(), i -> getName(), i -> getQuantity());
            list -> delete1(article);
        }
        i = i -> getNext();
    }
    system("pause");
}

void menu(){
    while (option != 4){
        system("cls");
        cout<<"PURCHASING MANAGER\n";
        cout<<endl << "1.- LIST articles\n2.- Add ARTICLES\n3.- DELETE ARTICLE\n4.- EXITE";
        cout<<endl <<"\n Choose Option: ";
        cin >> option;
        switch (option){
            case 1: list();
                break;
            case 2 : add1();
                break;
            case 3: delete1();
                break;
        }
    }
}

int main(){
    menu();
}