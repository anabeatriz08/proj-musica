#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "");

    int musica, op_01, op_02;
    cout << "Escolha o primeiro numero de 0 a 5: " << endl;
    cin >> op_01;

    if(op_01 > 5 || op_01 < 0){
        cout << "Opcao invalida" << endl;
        exit(0);
    }

    cout << "Escolha o segundo numero de 0 a 5: " << endl;
    cin >> op_02;

    if(op_02 > 5 || op_02 < 0){
        cout << "Opcao invalida" << endl;
        exit(0);
    }

    musica = (op_01 + op_02);

    switch (musica) {
        case 0:
            cout << "Meio dia";
            break;
        case 1:
            cout << "Rock do sertao";
            break;
        case 2:
            cout << "Saga de um vaqueiro";
            break;
        case 3:
            cout << "Bota pegado parea";
            break;
        case 4:
            cout << "Ponto final";
            break;
        case 5:
            cout << "Luz camera acao";
            break;
        case 6:
            cout << "Toma conta de mim";
            break;
        case 7:
            cout << "Olha pro ceu";
            break;
        case 8:
            cout << "Olinhos de fogueira";
            break;
        case 9:
            cout << "Rancheira";
            break;
        case 10:
            cout << "Avoante";
            break;
        default:
            cout << "Opcao invalida!";
    }

    return 0;
}
