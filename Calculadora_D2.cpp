#include <iostream>
#include <string>
using namespace std;



//Crie uma função que recebe como parâmetro a quantidade de vitórias e derrotas de um jogador,
//depois disso retorne o resultado para uma variável, o saldo de Rankeadas deve ser feito através
//do calculo (vitórias - derrotas)

//Se vitórias for menor do que 10 = Ferro
//Se vitórias for entre 11 e 20 = Bronze
//Se vitórias for entre 21 e 50 = Prata
//Se vitórias for entre 51 e 80 = Ouro
//e vitórias for entre 81 e 90 = Diamante
//Se vitórias for entre 91 e 100= Lendário
//Se vitórias for maior ou igual a 101 = Imortal

//Ao final deve se exibir uma mensagem:
//"Esse Herói tem um saldo de **{saldoVitorias}** e está no nível: **{nivel}**"


int calculo_rank(int v, int d){

   return v - d;
   
}


int main(){
       
    int i = 0;
    
    int classe;
    string heroi;

    while(i == 0){

    cout << " Escolha um Heroi (Escolher pelos Numeros): \n";
    cout << "| (1) Médico | (2) Soldado | (3) Engenheiro | (4) Espião |\n";
    cin >> classe; 


    int x;
    int y;


   if (classe == 1 || classe == 2 || classe == 3 || classe == 4)
   {
    cout << "Quantas Vitorias Você Tem ? \n"; 
    cin >> x;

    cout << "Quantas Derrotas Você Tem ? \n" ;
    cin >> y;

   } else {
     
    cout << "Classe Invalida Por favor Tente Novamente.\n";
    i++;
    break;
   }

    string rank;

   int result = calculo_rank(x,y);


    if(result <= 10){
        rank = "Ferro";

    }else if(result > 10 && result <= 20){
        rank = "Bronze";

    }else if(result > 20 && result <= 50){
        rank = "Prata";

    }else if(result > 50 && result <= 80){
        rank = "Ouro";

    }else if(result > 80 && result <= 90){
        rank = "Diamante";

    }else if(result > 90 && result <= 100){
        rank = "Lendário";

    }else{
        rank = "Imortal";

    }

    switch (classe)
    {
    case 1:
        heroi = "Médico";
        break;

    case 2: 
        heroi = "Soldado";
        break;
    case 3:
        heroi = "Engenheiro";
        break;
    case 4: 
        heroi = "Espião";
    }
    


    int aceitar;


    cout << "Você é um: " << heroi << " e Esse Herói tem um saldo de: " << result << " Vitorias e está no nível: " << rank << endl;

    cout << "Deseja Continuar ? (sim = 1, não = 0)\n";
    cin >> aceitar;



    int z;

    do{
    if(aceitar == 1){

        cout << "Reiniciando..." << endl;
        z = 0;
        cin.clear();
        cin.ignore();

    }else if (aceitar == 0){

        cout << "Programa Encerrando..." << endl;
        i++;
        z = 0;
    }else{

        cout << "Por favor inserir um valor valido." << endl;
        z = 1;
        break;
    }
    
    }while(z > 0);


    }

}



 
