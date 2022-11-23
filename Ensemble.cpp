#include "Ensemble.h"
#include<iostream>
using namespace std;
//Constructeur par defaut
Ensemble::Ensemble(){
	taille = 0;
	nbelts = 0;
	Tab = NULL;
	
}

Ensemble::Ensemble(int t){
	taille = t;
	nbelts = 0;
	Tab = new int[taille];
	
}

//Constructeur par copie
Ensemble::Ensemble(const Ensemble &E){
	taille = E.taille;
	nbelts = E.nbelts;
	Tab = new int[taille];
	for(int i=0;i<nbelts;i++)
	     Tab[i] = E.Tab[i];
	
}

//Destructeur
Ensemble::~Ensemble(){
	delete Tab;
}

bool Ensemble::estvide(){
	if(nbelts == 0)
		return true;
	else
		return false;	 
}

int Ensemble::cardinal(){
	
	return nbelts;
}


//operator > int
bool Ensemble::operator>(int a){
	for(int i=0;i<nbelts;i++){
		if(Tab[i] == a)
		    return true;
	}
	return false;
}

bool Ensemble::operator>(const Ensemble &E){
	for(int i=0;i<nbelts;i++){
		if( !( (*this) > E.Tab[i] ))
		    return false;
	}
	return true;
}

void Ensemble::operator+(int a){
	if(!(*this > a)){
		if(taille > nbelts){
			Tab[nbelts] = a;
			nbelts++;
		}else{
			int *Table = new int[taille];
			for(int i=0;i<nbelts;i++)
				Table[i] = Tab[i];
			delete Tab;
			
		 Tab = new int[taille+1];
		for(int i=0;i<nbelts;i++)
		     Tab[i] = Table[i];
		     Tab[nbelts++] = a;
			
			delete Table;		
			
		}
		
	}else{
		cout<<a<<" existe deja ."<<endl;
	}
}

//operator + (class Ensemble )
Ensemble Ensemble::operator+(const Ensemble &E){
	Ensemble E2;
	
	for(int i=0;i<nbelts;i++)
	   E2 + Tab[i];
	   
	for(int i=0;i<E.nbelts;i++)
	   E2 + E.Tab[i];
	   
	   return E2;   
}

//ostream <<
ostream& operator<<(ostream & cout , const Ensemble &E){
	cout<<"La taille du tableau d'Ensemble est : "<<E.taille<<endl;
	cout<<"Nombre d elements de l ensemble est : "<<E.nbelts<<endl;
	cout<<" Affichage de la table : "<<endl;
	   for(int i=0;i<E.nbelts;i++)
	      cout<<E.Tab[i]<<"\t";
	 cout<<endl;
	 
	 return cout;
}

istream& operator>>(istream & cin ,  Ensemble &E){
	
	cout<<"Saisir La taille du tableau d'Ensemble  : ";
	cin>>E.taille;
	cout<<"Saisir le Nombre d elements de l ensemble : ";
	cin>>E.nbelts;
	cout<<" Affichage de la table : "<<endl;
	   for(int i=0;i<E.nbelts;i++){
	   	cout<<"Tab["<<i<<"] = ";
	      cin>>E.Tab[i];
	   }
	      
	 cout<<endl;
	 
	 return cin;
}









