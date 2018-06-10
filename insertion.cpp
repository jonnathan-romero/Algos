// insertion.cpp
// compile with... 
// c++ insertion.cpp -o insert
// execute with...
// ./insert

#include <iostream>

void randomDouble (double *a, const int & si){
    for (int j = 0; j < si; j++)
        a[j] = (rand() % 999)/10.0;
}

void randomInts (int *a, const int & si){
    for (int j = 0; j < si; j++)
        a[j] = rand() % 999;
}

template <class Type>
void print (Type *a, const int & si){
    for (int j = 0; j < si; j++)
        std::cout<<a[j]<<", "; 
}

template <class Type>
void insertion(Type *a, const int & si){

	Type temp;
	int j;

	for(int i =1; i<si; i++){
		temp = a[i];
		j = i-1;

		while(temp<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j]=temp;
	}
}

int main() {
   double * p;
   int n = 1000;

   p = new double[n];

   randomDouble(p, n);

   insertion(p,n);

   print(p,n);

   delete [] p;
   return 0;
 }
