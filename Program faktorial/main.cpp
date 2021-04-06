#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int bil,int hasil){
     if(bil == 0){ 
    //pemberhentian rekursif
        cout<<'=';
        return hasil;
    }
    else{
        hasil*=bil;
        cout<<bil;
        if(bil != 1)
            cout<<'*';        
        //melakukan rekursif
        factorial(bil-1,hasil); 
    }  
}


int main(int argc, char** argv) {
	int bil,hasil=1;
    cout<<"Masukan bilangan : ";
	cin>>bil;
    if(bil>=0){
    	cout<<factorial(bil,hasil);
	} else {
		cout <<"negative";
	}
   
}
