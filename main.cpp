#include <cstdlib>
#include <iostream>
#define MAX_ELE 10
using namespace std;
// inserisce valori nel vettore
void leggi (int vett[], int& q);
// calcola la media dei positivi e la somma dei negativi
void calcola (int vett[], int q, double& media, int& somma);
// stampa media e somma
void stampa (double media, int somma);

int main(int argc, char *argv[])
{
    int vett[MAX_ELE], q, somma;
    double media;
    leggi(vett, q);
    calcola(vett, q, media, somma);
    stampa(media, somma);
    system("PAUSE");
    return EXIT_SUCCESS;
}

void leggi(int vett[], int& q){
     do{
        cout<<"inserisci numero elementi";
        cin>>q;
     }     
     while(q<0 || q>MAX_ELE);
     for(int i=0; i<q; i++){
         cout<<i<<": ";
         cin>>vett[i];
         cout<<endl;    
     }
}

void calcola(int vett[], int q, double& media, int& somma){
     int cont=0;
     media=0;
     somma=0;
     for(int i=0; i<q; i++){
         if(vett[i]>0){
            cont++;
            media+=vett[i];      
         }    
         else
         if(vett[i]<0){
            somma+=vett[i];      
         }     
         media=media/double(cont);     
     }
}

void stampa(double media, int somma){
     cout<<"la media dei positivi e': "<<media<<endl;
     cout<<"la somma dei negativi e': "<<somma<<endl;     
}
