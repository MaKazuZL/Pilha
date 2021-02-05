//
// Created by Makazu on 04/02/2021.
//

#ifndef PILHA_PILHA_H
#define PILHA_PILHA_H

#include <iostream>

using namespace std;

template <class Type>
class Pilha {
private:
    Type* vet;
    int max_tam;
    int topo;

public:
    Pilha(int tam){
        vet = new Type[tam];
        max_tam = tam - 1;
        topo = -1;
    }
    ~Pilha(){
        delete[] vet;
    }
    void add(Type e) {
        if (topo == max_tam)
            cout << "Pilha cheia!!" << endl;
        else
            vet[++topo] = e;
    }
    void pop(){
        if (topo == -1)
            cout << "Pilha vazia!" << endl;
        else topo--;
    }
    Type getTopo(){
        if (topo != -1)
            return vet[topo];
        return NULL;
    }
    int vazia(){
        return (topo == -1);
    }
};

#endif //PILHA_PILHA_H
