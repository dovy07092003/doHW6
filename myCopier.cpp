/*
 * This application will take 2 command-line arguments: one file for reading and one file for writing.
 *The application will read from one file and write the content to another file.
 *When finishing reading, the app closes both file and exit
 *To copy file_1 to file_2:  ./myCopier file_1.txt file_2.txt
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define FILE_PATH "/home/debian/"

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << endl;
		cout << "Please provide the names of the reading file and the writing file" << endl;
		cout << "The format should be ./myCopier read_file.txt write_file.txt" << endl;
		return 1; 
	}
	string	r_file_name = argv[1];
	string  w_file_name = argv[2];
	cout << endl;
	cout << "Starting the copying application" << endl;
	cout << "The current file path is " << FILE_PATH << endl;
       	cout << "The read file name is " << r_file_name << endl;
        cout << "The write file name is " << w_file_name << endl;

	
	string	r_path_name = FILE_PATH + r_file_name;
	string  w_path_name = FILE_PATH + w_file_name;
	cout << "The read path name is " << r_path_name << endl;
	cout << "The write path name is " << w_path_name << endl;
	cout << endl;

	fstream r_file;
	string line;
	fstream w_file;

	r_file.open((r_path_name).c_str(), fstream::in);// Open a file for reading, convert to a string array 
							// so that '\0' is at the end of the array
	w_file.open((w_path_name).c_str(), fstream::out);// Open a file for writing
	
	while(getline(r_file, line))// Use getline to get a string and finish until it meets the '\0'
	{
		w_file << line << endl;
	}	

	r_file.close();
	w_file.close();
	
	cout << "The program is finished" << endl;
}

