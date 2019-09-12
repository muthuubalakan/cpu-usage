#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <sstream>
#include "parser.h"


using namespace std;


StrParser::StrParser(){

}

void StrParser::split_line(string line){
    vector<string> arr;
    string s = line;
    istringstream sstream(s);

    string temp;
    while (sstream >> temp)
        arr.push_back(temp);
    

for(vector<string>::iterator it = arr.begin(); it != arr.end(); ++it){
    std::cout << *it <<endl;
}
}

