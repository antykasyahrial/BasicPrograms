#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int x = 1;
	cout <<x <<" adalah bilangan ganjil" <<endl;
	for(int i=1; i<99; i+=2){
		x = i+2;
		cout <<x <<" adalah bilangan ganjil" <<endl;
	}
	return 0;
}
