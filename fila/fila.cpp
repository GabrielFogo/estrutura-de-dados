#include <iostream>
#include "fila.h"

using namespace std;

Fila::Fila()
{
    Primeiro = 0;
    Ultimo = 0;
    Estrutura = new TipoItem[max_itens];
}
Fila::~Fila()
{
    delete [] Estrutura;
}
bool Fila::EstaCheia()
{
    return (Primeiro-Ultimo == max_itens);
}
bool Fila::EstaVazia()
{
    return (Primeiro == Ultimo);
}
void Fila::Inserir(TipoItem item)
{
    if (EstaCheia())
    {
        cout << "A fila esta cheia\n";
        cout << "Esse elemento nao pode ser inserido";
    }
    else{
        Estrutura[Ultimo % max_itens] = item;
        Ultimo++;
    }
    
}
TipoItem Fila::Remover()
{
    if (EstaVazia())
    {
        cout << "A fila esta vazia";
        cout << "Nao existem itens para remover";
    }else{
        Primeiro++;
        return Estrutura[(Primeiro-1)% max_itens];
    }
    
}
void Fila::Imprimir()
{
     cout << "Fila:[";
    for (int i = Primeiro; i < Ultimo; i++)
    {
        cout << Estrutura[i] << " ";
    }
    cout << "]\n";
}
int Fila::QualTamanho()
{
    return max_itens;
}