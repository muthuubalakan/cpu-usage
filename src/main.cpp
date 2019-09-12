#include <iostream>
#include <string>
#include "fileread.h"
#include "parser.h"
// #include "logging.h"


using namespace std;


// Logging init_logging(){
// 	Logging logging(DEBUG);
// 	return logging;
// }


int main(){

	string* cpu;

	StatReader sreader;
	StrParser parser;
	cpu = sreader.read_line();
	for (int i = 0; i < sizeof(cpu) + 1; i++){
	     parser.split_line(cpu[i]);
	}

}
