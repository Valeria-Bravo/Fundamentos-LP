#include<iostream>
using namespace std;

int x, y, ini, medio, fin, multi;
int fini[14];
int medii[14];
string secuencia[10]={ "primer", "segundo" , "tercer" , "cuarto" , "quinto" , "sexto" , "septimo" , "octavo" , "noveno" , "X"};

void Eucli(){
    cout<<"Introduzca el primer valor:"; cin>> x;
    cout<<"Introduzca el segundo valor:"; cin>>y;
    if(x>=y){
        ini=x;
        medio=y;
        multi=ini/medio;
        fin=ini%medio;
    }
    else{
        ini=y;
        medio=x;
        multi=ini/medio;
        fin=ini%medio;
    }
}
void cambios(){
    int cuenta, nule=0;
    for(cuenta=0; cuenta <15; cuenta++){
        fini[cuenta]= fin;
        medii[cuenta]= medio;
        if (cuenta>=10){
            nule++;
        };
        cout<<"Este es el "<< secuencia[cuenta-nule]<< " paso.\n";
        cout << ini << "=" << medio << "(" << multi << ") +" << fin << "\n";
        if(fin==0){
            int variable=ini%medio;
            if(variable!=0){
                cout<<"Se han acabado los despalazamientos\n";
                cout<<"El maximo comun divisor es:"<< fini[cuenta-1]<<"\n\n";
            }
            else if(variable==0){
                cout<<"Se han acabado los despalazamientos\n";
                cout<<"El maximo comun divisor es:"<< medii[cuenta]<<"\n\n";
            }
            break;
        }
    ini=medio;
    medio=fin;
    multi= ini/medio;
    fin= ini%medio;
    }
}

int main(){
    int opcional;
    int why=0;
    while (!why){
        cout<<"1->Algoritmo de Euclides.\n2->Salir del programa";
        cin>> opcional;
        switch(opcional){
            case 1:{
                system("cls");
                cout<<"Bienvenido al algoritmo de Euclides.\n";
                Eucli();
                cambios();
                break;
            }
            case 2:{
                system("cls");
                cout << "Saliendo del programa";
                why++;
                break;
            }
        }
    }
}
