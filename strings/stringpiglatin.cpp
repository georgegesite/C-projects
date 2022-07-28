/*
    Pig Latin
    Write a program that reads a sentence as input and converts
    each word    to “Pig Latin.” In one version, to convert a word to
    Pig-Latin you remove the first letter and place that letter at the
    end of the word. Then you append the string “ay” to the word. Here
    is an example:
        English: I SLEPT MOST OF THE NIGHT
        Pig Latin: IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY
*/
#include <iostream>
#include <string>
using namespace std;

// takes a string argument and returns the pigLatin equivalent
string pigLatin(string);

int main()
{
    string mySentence; 

    getline(cin, mySentence);
    mySentence = pigLatin(mySentence);
    cout << mySentence << endl;

    return 0;
}

string pigLatin(string word){

    //pigLatWord holds word translated in pig latin.
    //pigLatSentence holds entire translated sentence.
    string pigLatWord, pigLatSentence = "";
    int length = 0, index = 0;

    while (word[index] != '\0'){
        // .find returns -1 if no match is found
        if (word.find(' ', index) != -1){
            length = word.find(' ', index);
            length -= index;//length - index = the number of characters in a word
            pigLatWord = word.substr(index, length);
            pigLatWord.insert(length, "ay");
            pigLatWord.insert(length, 1, word[index]);//first letter is inserted at the end of the string
            pigLatWord.erase(0, 1);// erase first letter in string
            index += length + 1;//adding one moves index from 'space' to first letter in the next word
        }
        else{
            pigLatWord = word.substr(index);
            length = pigLatWord.length();
            pigLatWord.insert(length, "ay");
            pigLatWord.insert(length, 1, word[index]);
            pigLatWord.erase(0, 1);
            index = word.length();
        }

        pigLatSentence += (pigLatWord + " ");
    }
    return pigLatSentence;
}

