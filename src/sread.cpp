#include <iostream>
#include <fstream>


using namespace std;


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
