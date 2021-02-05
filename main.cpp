#include <iostream>
#include "pilha.h"

using namespace std;

int main(int argc, char const *argv[]){
    Pilha<const char*> p(100);

    p.add("Senhor dos Aneis");
    p.add("Star Wars");
    p.add("C++ e Java");
    p.pop();

    if (p.vazia())
        cout << "Pilha vazia!" << endl;
    else cout << "Pilha NAO vazia!" << endl;

    if (p.getTopo() != NULL)
        cout << "Topo: " << p.getTopo() << endl;

    return 0;
}
