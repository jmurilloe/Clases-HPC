#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <set>

void analyze_document(const std::string & fname);
std::string cleanword(std::string & word);

int main(int argc, char **argv)
{
    const std::string FNAME = argv[1];

    analyze_document(FNAME);

    return 0;
}

void analyze_document(const std::string & fname)
{
    std::ifstream file(fname);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << fname << std::endl;
        return;
    }

    std::map<std::string, int> word_count;
    std::string word;

    while (file >> word) {
        for(auto & x: word){
            x = std::tolower(x);
        } 
        int posendash = word.find("-"), posemdash = word.find("¬"), posapos = word.find("\'");

        if (posendash==std::string::npos){
            if (posemdash==std::string::npos){
                std::string word1 = word.substr(0,posendash);
                word.erase(0,posendash+1);
                word1 = cleanword(word1);
                word = cleanword(word);
            } else if (posemdash!=std::string::npos){
                std::string word1 = word.substr(0,posendash);
                std::string word2 = word.substr(posendash,posemdash-posendash);
                word.erase(0,posemdash+2);
                word1 = cleanword(word1);
                word2 = cleanword(word2);
                word = cleanword(word);
            }         
        } else if (posemdash!=std::string::npos){
            std::string word1 = word.substr(0,posemdash);
            word.erase(0,posemdash+1);
            word1 = cleanword(word1);
            word = cleanword(word);
        
        } else if (posapos!=std::string::npos){
            std::string word1 = word.substr(0,posapos);
            word.erase(0,posapos+1);
            word1 = cleanword(word1);
            word = cleanword(word);
        } else{
            word = cleanword(word);         
        }
    }
} 

std::string cleanword(std::string & word){
    int lenghtword = word.length();
    if(std::ispunct(word[0])!=0){
        word.erase(0,1);
        return(word);
    } else if(std::ispunct(word[lenghtword])!=0){
        word.erase(lenghtword,1);
        return(word);
    } else{
        return(word);
    }
} 
