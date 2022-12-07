#include <iostream>

using namespace std;


void suma (int numeroUNo, int numeroDos){
  int suma;
  suma= numeroDos + numeroUNo;
  std::cout << suma << std::endl;
}

int main()
{
    int numeroUNo,numeroDos;
    std::cin >> numeroUNo;
    std::cin >> numeroDos;
    suma(numeroUNo,numeroDos);
    return 0;
}
