#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int bilangan;
	for(int i=1; i<=100; i++){
		bilangan=0;
		for(int j=1; j<=i; j++){
			if(i%j==0){
				bilangan = bilangan+1;
			}
		}
		if(bilangan==2)
		cout <<i <<" adalah bilangan prima" <<endl;
	}
	return 0;
}
