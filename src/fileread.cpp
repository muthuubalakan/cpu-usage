#include <iostream>
#include <fstream>
#include <string>
#include "fileread.h"

using namespace std;


bool check_line(string line);


StatReader::StatReader(){
}


void StatReader::open(){
	return fstrm.open("/proc/stat");
};


void StatReader::is_fopen(){
	if (!fstrm.is_open()){
		open();
	}else{

	}
	}

string* StatReader::read_line(){
	string* cpus = new string[20];
	int number_of_cpu = 0;

	is_fopen();
	string line;
	while (getline(fstrm, line)){
		if(check_line(line)){
			cpus[number_of_cpu] = line;
			number_of_cpu++;
		}
	};
	return cpus;
}


void StatReader::close(){
	if (fstrm.is_open()){
		fstrm.close();
	}
}


bool check_line(string line){
	string cpu = "cpu";
	size_t found = line.find(cpu);

	if (found!=string::npos){
		return true;
	}else{
		return false;
	}

}
