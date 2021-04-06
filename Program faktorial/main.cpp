#include <iostream>
using namespace std;
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
