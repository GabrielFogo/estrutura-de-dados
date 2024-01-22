//Escreve o que cada metodo da classe pilha faz

#include <iostream>
#include "pilha.h"

using namespace std;

Pilha::Pilha()
{
    Tamanho = 0;
    Estrutura = new TipoItem[max_itens];
}

Pilha::~Pilha()
{
    delete [] Estrutura;
}

bool Pilha::EstaCheia()
{
    return (Tamanho == max_itens);
}


bool Pilha::EstaVazia()
{
    return (Tamanho == 0);
}

void Pilha::Inserir(TipoItem item)
{
    if(EstaCheia())
    {
        cout << "A pilha esta cheia\n";
        cout << "Nao é possivel inserir um elementoz\n"; 
    }else{
        Estrutura[Tamanho] = item;
        Tamanho++;
    }
}

TipoItem Pilha::Remover()
{
    if (EstaVazia())
    {
        cout << "A pilha esta vazia";
        cout << "Nao é possivel remover itens";
        return 0;
    }else{
        Tamanho--;
        return Estrutura[Tamanho];
    }
    
}

void Pilha::Imprimir()
{
    cout << "Pilha:[";
    for (int i = 0; i < Tamanho; i++)
    {
        cout << Estrutura[i] << " ";
    }
    cout << "]\n";
}

int Pilha::QualTamanho()
{
    return Tamanho;
}
