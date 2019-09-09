#include <iostream>
#include "fileread.h"
#include <string>
// #include "logging.h"


using namespace std;


// Logging init_logging(){
// 	Logging logging(DEBUG);
// 	return logging;
// }


int main(){

	string* cpu;

	StatReader sreader;
	cpu = sreader.read_line();
	for (int i = 0; i < sizeof(cpu) + 1; i++){
	     cout << cpu[i]<< endl;
	}

}
