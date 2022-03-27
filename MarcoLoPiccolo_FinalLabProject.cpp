// MarcoLoPiccolo_FinalLabProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   //preprocessor directive
#include <sstream>   //allows us to use the string stream library
#include <string>   //allows us to use string functions
using namespace std;  //allows use of cout and cin with needing std:: in front of it

int main()
{
    string stringNumber = "75";   //First application is using string stream for converting a string that is a number into an actual number variable such as int
    stringstream ss;
    int integerNumber;

    ss << stringNumber;         //Prints to the stream ss instead of to the console like the normal cout << operator would do
    ss >> integerNumber;        //Utilizing string stream allows us to extract the integer from the string and saves it into the integerNumber variable

    cout << integerNumber + 12 << endl;      //the value put in the int variable can now have other int values added to it
    cout << stringNumber + "12" << endl;    //Adds 12 to the end of the string so it will be 7512

    /*The next application we will do is manipulating a string to get the number of words within a string inputted by the user as well as manipulating the words within the string
    The manipulation we are going to do is adding an s to the end of each word*/

    string userInput;      //string that user will first input into
    stringstream cc;
    string tempWord;         //the following two strings are used within the loop to explore the string
    string newString = "";
    int wordCount = 0;     //starts at 0 with an int word count so that it will count correctly

    cout << "Enter a sentence of any length" << endl;   //tells user to enter a sentence
    getline(cin, userInput);                            //allows for spaces within the user inputted sentence

    cc << userInput;                    //Prints the sentence to the stream cc like the << operator does with cout

    while (!cc.eof()) {              //checks that the stream hasn't reached its end with the use of the .eof() function
        cc >> tempWord;                   //takes the current word in the stream and saves it to tempword, then adds s to it
        tempWord = tempWord + "s";
        if (newString == "") {               //then checks to see if it is the first word being added to the new sentence
            newString = newString + tempWord;   //adds the current tempword to the new sentence string and then if it is not the first word it adds a space in between
        }
        else {
            newString = newString + " " + tempWord;
        }
        wordCount++;   //increases the word count
    }

    cout << "The word count of the sentence is " << wordCount << endl;          //Displays the new word count and the the new sentence
    cout << "The new sentence with adding an s to the end of each word is " << newString << endl;

    system("Pause");
    return 0;
}


