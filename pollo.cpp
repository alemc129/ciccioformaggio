#include <cstdlib>
#include <iostream>
#define MAX 3
using namespace std;

void leggi (int vett[]);
void calcola (int vett[], int& max, int& pos);
void stampa (int vett[], int max, int pos);

int main(int argc, char *argv[])
{
    int vett[MAX], max, pos;
    leggi(vett);
    calcola(vett, max, pos);
    stampa(vett, max, pos);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void leggi (int vett []){
    for (int i=0; i<MAX; i++){
            cout << "inserisci";
            cin >> vett[i];
    }
}
 
void calcola (int vett[], int& max, int& pos){
     max = INT_MIN;
     for (int i=0; i<MAX; i++){
         if (vett[i] > max){ 
            max = vett[i];
            pos = i+1;
         }     
     }
     //cout << "depo" << max << " " << pos;
}

void stampa (int vett [], int max, int pos){    
    for (int i=0; i<MAX; i++){
            cout << vett[i] << " ";
    }
    cout << endl << max << " " << pos;
    
}    
