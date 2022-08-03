#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &str)
{
    //write your code here
    unordered_map<string, int> word_requency;
    stringstream sstream(str);
    string word;
    
    while (sstream >> word)
        word_requency[word]++;
    
    unordered_map<string, int>::iterator iter;
    
    for (iter = word_requency.begin(); iter != word_requency.end(); iter++){
        cout << "(" << iter->first << ", " << iter -> second << "), \n";
    }
}

int main(int argc, char** argv)
{
    
    std::ifstream ifs("file.txt");
    std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));
    
    printFrequencies(content);
    
    return 0;
}
