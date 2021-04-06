#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int numb,int res){
     if(numb == 0){ 
        cout<<'=';
        return res;
    }
    else{
        res*=numb;
        cout<<numb;
        if(numb != 1)
            cout<<'*';        
        factorial(numb-1,res); 
    }  
}


int main(int argc, char** argv) {
	int numb,res=1;
    cout<<"Input Number : ";
	cin>>numb;
    if(numb>=0){
    	cout<<factorial(numb,res);
	} else {
		cout <<"negative";
	}
   
}
