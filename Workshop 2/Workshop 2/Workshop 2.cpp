// Workshop 2.cpp
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>


using namespace std;



int main()
{
    //HOLDS THE TEXT
    string Text;
    //CHECKS FOR INDIVIDUAL CHARACTERS 
    char ch;
    string word;
    ifstream filename("input.txt");

    int numberOfSentences = 0;
    //VECTOR FOR WORDS 
    vector <string> wordList;
    wordList2 = wordList[word];
    int numberOfWords = 0;

    //LISTS ALL CHARACTERS AS ITEMS IN THE VECTOR
    while (getline(filename, Text)) {

        wordList.push_back(Text);
       
        

        for (int i = 0; i < Text.length(); i++)
        {
            ch = Text[i];
            if (ch == ' ' || ch == ',' || ch == '.' || ch == '!')
            {
                numberOfWords++;
            }
        }
      

        //CHECKS AMOUNT OF SENTENCES 
        for (int i = 0; i < Text.size(); i++)
        {
            ch = Text[i];
            //CHECKS FOR SENTENCES 
            if (ch == '.' || ch == '!')

            {
                numberOfSentences++;
             
            }
          

        }

        while (filename >> wordList2[word]);
        {
            ++wordList2[word];
        }
        for (map<string, int>::iterator it = wordList2.begin(); it != wordList2.end(); ++it)
        {
            cout << it->first << " : " << it->second << endl;
        }

    }
  
        cout << "\nnumber of sentences is " << numberOfSentences;
        cout << "\nnumber of words is " << numberOfWords << endl;
      
        filename.close();
      
}

