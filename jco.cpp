/*
 * jco.cpp
 * JCO: Java Class Opener
 * Simple portable app that opens Java classes using double click.
 * No need for cmd, typing java <class name> all the time.
 *
 * To use, simply associate your ".class" files with "jco.exe"
 *
 * (c) August 2016 Raymel Francisco
 */
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main(int argc, char** args)
{
	if( argc >  1) {

		string quo = string("\"");
		string path = string(args[1]);
		int path_len = path.length();
		int name_start = path.find_last_of( string("\\"), path_len ) + 1;
		int name_end = path.find_last_of( string("."), path_len) - name_start;
		string class_name = path.substr( name_start, name_end );
		
		if( system( ("java " + quo + class_name + quo).c_str() ) == -1 )
			cout << "jco.exe failed." << endl;
		else
			cout << "jco.exe success." << endl;

	} else {
		cout << "No input file." << endl;
		cout << "jco.exe failed." << endl;
	}
	system("pause");
}