#include<iostream>
using namespace std;
#ifndef ENSEMBLE_H
#define ENSEMBLE_H

class Ensemble{
	private:
		int *Tab;
		int taille;
		int nbelts;
	public:
		Ensemble();
		Ensemble(int);
		Ensemble(const Ensemble &);
		~Ensemble();
		bool estvide();
		int cardinal();
		bool operator>(int);
		bool operator>(const Ensemble &);
		void operator+(int);
		Ensemble operator+(const Ensemble &);
		friend ostream &operator<<(ostream & , const Ensemble &);
		friend istream &operator>>(istream & , Ensemble &);
		
};

#endif
