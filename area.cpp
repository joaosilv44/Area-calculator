#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    while(true){
        cout << "Este é um programa para o cálculo de áreas\n";
        cout << "1--Quadrado\n2--Retângulo\n3--Triângulo\n4--Losango\n5--Trapézio\n6--Círculo\n0--Sair" << endl;
        int option;
        cout << "Digite a opção a ser utilizada: "<< endl;
        cin >> option;
        
        if(option == 1 || option == 2){
            float largura, comp;
            cout << "Área do Quadrado/Retângulo----\n";
            cout << "Digite comprimento: ";
            cin >> comp;
            cout << "Largura: ";
            cin >> largura;
            
            float result = largura*comp;
            cout << "A área do quadrado/retângulo é " << result << endl;
        }
        else if(option == 3){
            float base, altura;
            cout << "Área do Triângulo----\n";
            cout << "Digite a base do triângulo: ";
            cin >> base;
            cout << "Altura: ";
            cin >> altura;
            
            float result = (base*altura) / 2;
            cout << "A área do triângulo é " << result << endl;
        }
        else if(option == 4){
            float Dmaior, Dmenor;
            cout << "Área do Losango----\n";
            cout << "Digite a diagonal maior: ";
            cin >> Dmaior;
            cout << "Digite a diagonal menor: ";
            cin >> Dmenor;
            
            float result = (Dmaior*Dmenor) / 2;
            cout << "A área do losango é " << result << endl;
        }
        else if(option == 5){
            float baseMaior, baseMenor, altura;
            cout << "Área do Trapézio----\n";
            cout << "Digite a base menor: ";
            cin >> baseMenor;
            cout << "Digite a base maior: ";
            cin >> baseMaior;
            cout << "Digite a altura: ";
            cin >> altura;
            
            float result = ((baseMaior + baseMenor)*altura) / 2;
            cout << "A área do trapézio é " << result << endl;
        }
        else if(option == 6){
            float pi = 3.14;
            float raio;
            cout << "Área do Círculo----\n";
            cout << "Digite o raio: ";
            cin >> raio;
            
            float result = pi * (pow(raio,2));
            cout << "A área do círculo é " << result << endl;
        }
        else if(option == 0){
            cout << "Saindo do programa" << endl;
        }
        else {
            cout << "Opção inválida, tente novamente" << endl;
        }
    }

    return 0;
}