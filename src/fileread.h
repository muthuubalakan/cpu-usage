#ifndef FILE_READ_H
#define FILE_READ_H

#include <fstream>
#include <string>

using namespace std;


class StatReader
{
	ifstream fstrm;
	public:
		StatReader();
		void open();
		void close();
		void is_fopen();
		string* read_line();
	private:
	protected:
	
};

#endif
