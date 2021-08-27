#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

int zgadnij,proba,gra,start,ilosc;
bool gram = true;
string nie; 




int main()
{
    srand(time(NULL));
    cout<<"Witam w grze! Podaj pierwsza liczbe z zakresu losowania"<<endl;
    cin>>start;
    cout<<"Podaj ilosc liczb do wylosowania, pamietaj poczatkowa sie wlicza."<<endl;
    cin>>ilosc;
    
    int liczba = ((rand()%ilosc)+start);
    
    cout<<"gramy!Gdy program zapyta mozesz przerwac gre wpisujac n lub grac dalej wpisujac y. Zaczynamy! zgadnij liczbe!"<<endl;
    while(gram)
    {
        
        cout<<"pyk pyk pyk pyk. wylosowane! Zgaduj zgadula!"<<endl;
        cin>>zgadnij;
        
        if(liczba==zgadnij)
        {
            gra++;
            cout<<"wygrales brawo! Chcesz zagrac jeszcze raz? Wpisz tak - y nie - n."<<endl;
            cin>>nie;
            int liczba = ((rand()%ilosc)+start);
            
            
        }else if(liczba>zgadnij)
        {
            proba++;
            cout<< "za malo. Gramy dalej? ";
            cin>>nie;
            
        }else
        {
            proba++;
            cout<< "za duzo. Gramy dalej? ";
            cin>>nie;
            
        }
         
        
        if(nie=="n")
        {
            
            gram = false;
            cout<<"zagrales "<<gra<<" razy. probowales zgadnac liczbe "<<proba<<" razy"<<endl;
        }
            
    }
    
  
}
