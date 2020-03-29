#include <iostream>
using namespace std;

int main(){
    float pesoInformado, pesoMais, pesoMenos;
    cout << "Informe seu peso em Kg ";
    cin >> pesoInformado;

    pesoMais = pesoInformado += (pesoInformado * 0.15);
    pesoMenos = pesoInformado -= (pesoInformado * 0.20);

    cout << "Peso atual: " << pesoInformado << "Kg\n" ;
    cout << "Peso se você engordar 15%: " << pesoMais << "Kg\n";
    cout << "Peso se você emagrecer 20%: " << pesoMenos << "Kg\n";
    cout << "Fim";


}