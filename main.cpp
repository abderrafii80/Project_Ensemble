#include <iostream>
#include "Ensemble.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	Ensemble e(4) , e1(3) , e3(5) ;
	if(e.estvide())
	  cout<<"e est vide"<<endl;
	  
	  cin>>e;
	  cout<<e;
	  cout<<"Le Cardinal de e est : "<<e.cardinal()<<endl;
	  cout<<"Ensemble e + 2 "<<endl;
	  e+2;
	  cout<<e;
	  cout<<"--------------------------------"<<endl;
	  cin>>e1;
	  cout<<e1;
	  cout<<"Le Cardinal de e est : "<<e1.cardinal()<<endl;
	  cout<<"Ensemble e + Ensemble e1 "<<endl;
	  e3=e+e1;
	  cout<<e3;
	  cout<<"--------------------------------"<<endl;
	  if(e>e1)
	    cout<<"e est contient  e2 "<<endl;
	  else
	    cout<<"e ne contient pas e2 "<<endl;  
	  
	 
	  
	return 0;
}
