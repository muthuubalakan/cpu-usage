#include <iostream>
#include <fstream>


using namespace std;


/*
sum up all the columns in the 1st line "cpu" :
( user + nice + system + idle + iowait + irq + softirq )
this will yield 100% of CPU time

calculate the average percentage of total 'idle' out of 100% of CPU time :
( user + nice + system + idle + iowait + irq + softirq ) = 100%
( idle ) = X %

hence
average idle percentage X % = ( idle * 100 ) / ( user + nice + system + idle + iowait + irq + softirq )


Based on the example above:
average idle percentage X % = ( 842486413 * 100 ) / ( 79242 + 0 + 74306 + 842486413 + 756859 + 6140 + 67701 + 0 ) = ( 842486413100 ) / ( 843470661 ) = 99.8833 %

*/

void load_array(string line){
	string del = " ";
	string cpu = "cpu";
	size_t found = line.find(cpu);


	if (found!=string::npos){

	string token;
	size_t position = 0;
	while ((position = line.find(del)) != string::npos){
		token = line.substr(0, position);
		cout << token << endl;
		line.erase(0, position + del.length());
	}	}
}


int main(){
	ifstream f;
	f.open("/proc/stat");

	if (f.is_open()){
		string line;
		while (getline(f, line)){
			load_array(line);
		}
		f.close();
	}
	else{
		printf("Cannot open");
	}
	return 0;
}
