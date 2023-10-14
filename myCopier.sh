#!/bin/bash

#This application will take 2 command-line arguments: one file for reading and one file for writing.
#The application will read from one file and write the content to another file.
#When finishing reading, the app closes both file and exit
#To copy file_1 to file_2:  ./myCopier.sh file_1.txt file_2.txt
   
r_file_name=$1;
w_file_name=$2;

echo "Starting the copying program"
echo "Creating the $w_file_name file for writing"
touch $w_file_name # Creating a file for writing
echo "Done!!!"
cat $r_file_name >  $w_file_name # Read the $1 file and export the output to the $2 file
echo "Finish the copying program"
