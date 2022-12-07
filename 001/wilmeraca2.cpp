#include <iostream>

using namespace std;


void resta (int numeroUNo, int numeroDos){
  int resta;
  resta= numeroDos - numeroUNo;
  std::cout << resta << std::endl;
}

int main()
{
    int numeroUNo,numeroDos;
    std::cin >> numeroUNo;
    std::cin >> numeroDos;
    resta(numeroUNo,numeroDos);
    return 0;
}
